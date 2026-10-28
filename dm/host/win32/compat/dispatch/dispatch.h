#pragma once
#include <windows.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void *dispatch_queue_t;
typedef void *dispatch_source_t;
typedef HANDLE dispatch_semaphore_t;
typedef uint64_t dispatch_time_t;

#define DISPATCH_QUEUE_PRIORITY_DEFAULT 0
#define DISPATCH_TIME_NOW 0ull
#define DISPATCH_TIME_FOREVER (~0ull)

static inline dispatch_time_t dispatch_time(dispatch_time_t when, int64_t delta) {
    if (when == DISPATCH_TIME_FOREVER) return DISPATCH_TIME_FOREVER;
    return when + delta;
}

static inline dispatch_semaphore_t dispatch_semaphore_create(long value) {
    return CreateSemaphoreA(NULL, value, 32767, NULL);
}

static inline long dispatch_semaphore_wait(dispatch_semaphore_t dsema, dispatch_time_t timeout) {
    DWORD ms = INFINITE;
    if (timeout != DISPATCH_TIME_FOREVER) {
        ms = (DWORD)(timeout / 1000000ull);
    }
    DWORD res = WaitForSingleObject(dsema, ms);
    return (res == WAIT_OBJECT_0) ? 0 : -1;
}

static inline long dispatch_semaphore_signal(dispatch_semaphore_t dsema) {
    ReleaseSemaphore(dsema, 1, NULL);
    return 0;
}

static inline void dispatch_release(void *obj) {
    if (obj) CloseHandle((HANDLE)obj);
}

static inline dispatch_queue_t dispatch_get_global_queue(long identifier, unsigned long flags) {
    (void)identifier; (void)flags;
    return (dispatch_queue_t)1;
}

static inline void dispatch_async_f(dispatch_queue_t queue, void *context, void (*work)(void *)) {
    (void)queue;
    if (work) work(context);
}

#ifdef __cplusplus
}
#endif
