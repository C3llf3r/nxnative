// Minimal POSIX pthread wrapper for Windows Win32
#pragma once
#include <windows.h>
#include <process.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <errno.h>
#include "sched.h"

#if defined(_MSC_VER) && !defined(__clang__)
#define __thread __declspec(thread)
#define __attribute__(x)
#endif

#ifdef __cplusplus
extern "C" {
#endif

// Thread
typedef HANDLE pthread_t;
typedef void *pthread_attr_t;
pthread_t pthread_self(void);

static inline int pthread_attr_init(pthread_attr_t *attr) { (void)attr; return 0; }
static inline int pthread_attr_destroy(pthread_attr_t *attr) { (void)attr; return 0; }
static inline int pthread_attr_setstacksize(pthread_attr_t *attr, size_t stacksize) { (void)attr; (void)stacksize; return 0; }

typedef struct {
    void *(*start_routine)(void *);
    void *arg;
} win_pthread_trampoline_t;

static inline unsigned __stdcall win_pthread_proc(void *param) {
    win_pthread_trampoline_t *t = (win_pthread_trampoline_t *)param;
    void *(*fn)(void *) = t->start_routine;
    void *arg = t->arg;
    free(t);
    fn(arg);
    return 0;
}

static inline int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg) {
    (void)attr;
    win_pthread_trampoline_t *t = (win_pthread_trampoline_t *)malloc(sizeof(win_pthread_trampoline_t));
    if (!t) return ENOMEM;
    t->start_routine = start_routine;
    t->arg = arg;
    uintptr_t h = _beginthreadex(NULL, 0, win_pthread_proc, t, 0, NULL);
    if (!h) {
        free(t);
        return EAGAIN;
    }
    *thread = (HANDLE)h;
    return 0;
}

static inline int pthread_join(pthread_t thread, void **retval) {
    WaitForSingleObject(thread, INFINITE);
    if (retval) *retval = NULL;
    CloseHandle(thread);
    return 0;
}

static inline int pthread_detach(pthread_t thread) {
    CloseHandle(thread);
    return 0;
}

// Mutex (using SRWLOCK for ultra-low overhead)
typedef SRWLOCK pthread_mutex_t;
typedef void *pthread_mutexattr_t;
#define PTHREAD_MUTEX_INITIALIZER SRWLOCK_INIT

static inline int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr) {
    (void)attr;
    InitializeSRWLock(mutex);
    return 0;
}
static inline int pthread_mutex_destroy(pthread_mutex_t *mutex) { (void)mutex; return 0; }
static inline int pthread_mutex_lock(pthread_mutex_t *mutex) {
    AcquireSRWLockExclusive(mutex);
    return 0;
}
static inline int pthread_mutex_trylock(pthread_mutex_t *mutex) {
    return TryAcquireSRWLockExclusive(mutex) ? 0 : EBUSY;
}
static inline int pthread_mutex_unlock(pthread_mutex_t *mutex) {
    ReleaseSRWLockExclusive(mutex);
    return 0;
}

// Read-Write Lock
typedef struct {
    SRWLOCK lock;
    DWORD exclusive_owner;
} pthread_rwlock_t;
typedef void *pthread_rwlockattr_t;
#define PTHREAD_RWLOCK_INITIALIZER { SRWLOCK_INIT, 0 }

static inline int pthread_rwlock_init(pthread_rwlock_t *rwlock, const pthread_rwlockattr_t *attr) {
    (void)attr;
    InitializeSRWLock(&rwlock->lock);
    rwlock->exclusive_owner = 0;
    return 0;
}
static inline int pthread_rwlock_destroy(pthread_rwlock_t *rwlock) { (void)rwlock; return 0; }
static inline int pthread_rwlock_rdlock(pthread_rwlock_t *rwlock) {
    AcquireSRWLockShared(&rwlock->lock);
    return 0;
}
static inline int pthread_rwlock_wrlock(pthread_rwlock_t *rwlock) {
    AcquireSRWLockExclusive(&rwlock->lock);
    rwlock->exclusive_owner = GetCurrentThreadId();
    return 0;
}
static inline int pthread_rwlock_unlock(pthread_rwlock_t *rwlock) {
    // Note: SRWLock release depends on shared/exclusive, but caller generally knows.
    // In loader.c: wrlock/rdlock matching unlock
    if (rwlock->exclusive_owner == GetCurrentThreadId()) {
        rwlock->exclusive_owner = 0;
        ReleaseSRWLockExclusive(&rwlock->lock);
    } else {
        ReleaseSRWLockShared(&rwlock->lock);
    }
    return 0;
}

// Condition Variable
typedef CONDITION_VARIABLE pthread_cond_t;
typedef void *pthread_condattr_t;
#define PTHREAD_COND_INITIALIZER CONDITION_VARIABLE_INIT

#ifndef CLOCK_REALTIME
#define CLOCK_REALTIME 0
#endif
#ifndef CLOCK_MONOTONIC
#define CLOCK_MONOTONIC 1
#endif
#ifndef ETIMEDOUT
#define ETIMEDOUT 110
#endif

typedef int clockid_t;

static inline int clock_gettime(clockid_t clk_id, struct timespec *tp) {
    (void)clk_id;
    if (tp) {
        FILETIME ft;
        GetSystemTimeAsFileTime(&ft);
        ULARGE_INTEGER u;
        u.LowPart = ft.dwLowDateTime;
        u.HighPart = ft.dwHighDateTime;
        uint64_t t = (u.QuadPart - 116444736000000000ULL);
        tp->tv_sec = (time_t)(t / 10000000ULL);
        tp->tv_nsec = (long)((t % 10000000ULL) * 100);
    }
    return 0;
}

static inline int pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *attr) {
    (void)attr;
    InitializeConditionVariable(cond);
    return 0;
}
static inline int pthread_cond_destroy(pthread_cond_t *cond) { (void)cond; return 0; }
static inline int pthread_cond_signal(pthread_cond_t *cond) {
    WakeConditionVariable(cond);
    return 0;
}
static inline int pthread_cond_broadcast(pthread_cond_t *cond) {
    WakeAllConditionVariable(cond);
    return 0;
}
static inline int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex) {
    SleepConditionVariableSRW(cond, mutex, INFINITE, 0);
    return 0;
}
static inline int pthread_cond_timedwait(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime) {
    struct timespec now;
    clock_gettime(CLOCK_REALTIME, &now);
    int64_t diff_ms = (int64_t)(abstime->tv_sec - now.tv_sec) * 1000 + (abstime->tv_nsec - now.tv_nsec) / 1000000;
    if (diff_ms < 0) diff_ms = 0;
    if (!SleepConditionVariableSRW(cond, mutex, (DWORD)diff_ms, 0)) {
        if (GetLastError() == ERROR_TIMEOUT) return ETIMEDOUT;
        return EINVAL;
    }
    return 0;
}

// Thread-Specific Data (Keys)
typedef DWORD pthread_key_t;

static inline int pthread_key_create(pthread_key_t *key, void (*destructor)(void *)) {
    (void)destructor;
    DWORD k = TlsAlloc();
    if (k == TLS_OUT_OF_INDEXES) return EAGAIN;
    *key = k;
    return 0;
}
static inline int pthread_key_delete(pthread_key_t key) {
    return TlsFree(key) ? 0 : EINVAL;
}
static inline void *pthread_getspecific(pthread_key_t key) {
    return TlsGetValue(key);
}
static inline int pthread_setspecific(pthread_key_t key, const void *value) {
    return TlsSetValue(key, (LPVOID)value) ? 0 : EINVAL;
}

// Once
typedef INIT_ONCE pthread_once_t;
#define PTHREAD_ONCE_INIT INIT_ONCE_STATIC_INIT

static inline int pthread_once(pthread_once_t *once_control, void (*init_routine)(void)) {
    BOOL pending = FALSE;
    if (InitOnceBeginInitialize(once_control, 0, &pending, NULL) && pending) {
        init_routine();
        InitOnceComplete(once_control, 0, NULL);
    }
    return 0;
}

typedef int qos_class_t;
#define QOS_CLASS_USER_INTERACTIVE 0x21
#define QOS_CLASS_USER_INITIATED   0x19
#define QOS_CLASS_DEFAULT          0x15
#define QOS_CLASS_UTILITY          0x11
#define QOS_CLASS_BACKGROUND       0x09
#define QOS_CLASS_UNSPECIFIED      0x00

static inline int pthread_get_qos_class_np(HANDLE thread, qos_class_t *qos_class, int *relative_priority) {
    (void)thread;
    if (qos_class) *qos_class = QOS_CLASS_DEFAULT;
    if (relative_priority) *relative_priority = 0;
    return 0;
}

#define PTHREAD_CREATE_JOINABLE 0
#define PTHREAD_CREATE_DETACHED 1

typedef void *pthread_override_t;

static inline pthread_override_t pthread_override_qos_class_start_np(HANDLE thread, qos_class_t qos_class, int relative_priority) {
    (void)thread; (void)qos_class; (void)relative_priority;
    return (pthread_override_t)1;
}

static inline int pthread_override_qos_class_end_np(pthread_override_t override) {
    (void)override;
    return 0;
}

#ifdef __cplusplus
}
#endif
