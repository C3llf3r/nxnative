// Windows compatibility layer for nxnative
#include <windows.h>
#include <wincrypt.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>
#include <errno.h>
#include <intrin.h>
#include <pthread.h>
#include <dirent.h>
#include <signal.h>
#include <mach/mach.h>
#include <mach/mach_time.h>
#include <mach/thread_policy.h>
#include <mach-o/getsect.h>
#include "../hle_haptics.h"

// Stubs for Apple-specific haptics
void dm_haptics_apple_init(void) {}
void dm_haptics_apple_shutdown(void) {}

static void win32_invalid_param_handler(const wchar_t *expr, const wchar_t *func, const wchar_t *file, unsigned int line, uintptr_t pReserved) {
    (void)expr; (void)func; (void)file; (void)line; (void)pReserved;
}
static int init_crt_handlers(void) {
    _set_invalid_parameter_handler(win32_invalid_param_handler);
    _set_abort_behavior(0, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
    return 0;
}
#pragma section(".CRT$XCU", read)
__declspec(allocate(".CRT$XCU")) static int (*p_init_crt_handlers)(void) = init_crt_handlers;
void dm_haptics_apple_controller(int player, void *controller) {
    (void)player; (void)controller;
}

// Memory statistics stub for Windows
void memstat_win32_init(void) {}

// High-resolution timer for Windows
uint64_t win32_now_ns(void) {
    static LARGE_INTEGER freq;
    static int init = 0;
    if (!init) {
        QueryPerformanceFrequency(&freq);
        init = 1;
    }
    LARGE_INTEGER count;
    QueryPerformanceCounter(&count);
    return (uint64_t)((count.QuadPart * 1000000000ULL) / freq.QuadPart);
}

void *memmem(const void *haystack, size_t haystacklen, const void *needle, size_t needlelen) {
    if (!haystack || !needle || needlelen == 0 || haystacklen < needlelen) return NULL;
    const unsigned char *h = (const unsigned char *)haystack;
    const unsigned char *n = (const unsigned char *)needle;
    for (size_t i = 0; i <= haystacklen - needlelen; i++) {
        if (h[i] == n[0] && memcmp(h + i, n, needlelen) == 0) {
            return (void *)(h + i);
        }
    }
    return NULL;
}

// POSIX strings
size_t strlcpy(char *dst, const char *src, size_t siz) {
    size_t len = strlen(src);
    if (siz) {
        size_t n = len < siz - 1 ? len : siz - 1;
        memcpy(dst, src, n);
        dst[n] = '\0';
    }
    return len;
}

size_t strlcat(char *dst, const char *src, size_t siz) {
    size_t dlen = strlen(dst);
    size_t slen = strlen(src);
    if (dlen >= siz) return siz + slen;
    size_t n = siz - dlen - 1;
    if (slen < n) n = slen;
    memcpy(dst + dlen, src, n);
    dst[dlen + n] = '\0';
    return dlen + slen;
}

int strncasecmp(const char *s1, const char *s2, size_t n) {
    return _strnicmp(s1, s2, n);
}

char *strtok_r(char *str, const char *delim, char **saveptr) {
    return strtok_s(str, delim, saveptr);
}

int setenv(const char *name, const char *value, int overwrite) {
    if (!overwrite && getenv(name)) return 0;
    return _putenv_s(name, value ? value : "");
}

int unsetenv(const char *name) {
    return _putenv_s(name, "");
}

int sigemptyset(sigset_t *set) {
    if (set) *set = 0;
    return 0;
}

// POSIX I/O and FS
ssize_t pread(int fd, void *buf, size_t count, off_t offset) {
    HANDLE h = (HANDLE)_get_osfhandle(fd);
    if (h == INVALID_HANDLE_VALUE) return -1;
    OVERLAPPED ov = {0};
    ov.Offset = (DWORD)offset;
    ov.OffsetHigh = (DWORD)((uint64_t)offset >> 32);
    DWORD bytesRead = 0;
    if (!ReadFile(h, buf, (DWORD)count, &bytesRead, &ov)) {
        if (GetLastError() == ERROR_HANDLE_EOF) return 0;
        return -1;
    }
    return (ssize_t)bytesRead;
}

ssize_t pwrite(int fd, const void *buf, size_t count, off_t offset) {
    HANDLE h = (HANDLE)_get_osfhandle(fd);
    if (h == INVALID_HANDLE_VALUE) return -1;
    OVERLAPPED ov = {0};
    ov.Offset = (DWORD)offset;
    ov.OffsetHigh = (DWORD)((uint64_t)offset >> 32);
    DWORD bytesWritten = 0;
    if (!WriteFile(h, buf, (DWORD)count, &bytesWritten, &ov)) {
        return -1;
    }
    return (ssize_t)bytesWritten;
}

int ftruncate(int fd, off_t length) {
    if (length < 0) {
        errno = EINVAL;
        return -1;
    }
    return _chsize_s(fd, length) == 0 ? 0 : -1;
}

int fstatat(int dirfd, const char *pathname, struct stat *statbuf, int flags) {
    (void)dirfd; (void)flags;
    return stat(pathname, statbuf);
}

int lstat(const char *pathname, struct stat *statbuf) {
    return stat(pathname, statbuf);
}

int dirfd(DIR *dirp) {
    (void)dirp;
    return -1;
}

void flockfile(FILE *filehandle) {
    (void)filehandle;
}

// Memory and random
int posix_memalign(void **memptr, size_t alignment, size_t size) {
    void *ptr = _aligned_malloc(size, alignment);
    if (!ptr) return ENOMEM;
    *memptr = ptr;
    return 0;
}

uint32_t arc4random(void) {
    uint32_t val = 0;
    HCRYPTPROV hProv;
    if (CryptAcquireContext(&hProv, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT)) {
        CryptGenRandom(hProv, sizeof(val), (BYTE *)&val);
        CryptReleaseContext(hProv, 0);
    } else {
        val = (uint32_t)rand();
    }
    return val;
}

void arc4random_buf(void *buf, size_t nbytes) {
    HCRYPTPROV hProv;
    if (CryptAcquireContext(&hProv, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT)) {
        CryptGenRandom(hProv, (DWORD)nbytes, (BYTE *)buf);
        CryptReleaseContext(hProv, 0);
    } else {
        uint8_t *p = (uint8_t *)buf;
        for (size_t i = 0; i < nbytes; i++) p[i] = (uint8_t)rand();
    }
}

int nanosleep(const struct timespec *req, struct timespec *rem) {
    (void)rem;
    if (!req) return -1;
    DWORD ms = (DWORD)(req->tv_sec * 1000 + req->tv_nsec / 1000000);
    Sleep(ms);
    return 0;
}

uint64_t clock_gettime_nsec_np(clockid_t clk_id) {
    (void)clk_id;
    return win32_now_ns();
}

kern_return_t mach_wait_until(uint64_t deadline) {
    uint64_t now = win32_now_ns();
    if (deadline > now) {
        uint64_t diff_ns = deadline - now;
        Sleep((DWORD)(diff_ns / 1000000));
    }
    return KERN_SUCCESS;
}

kern_return_t vm_remap(
    void *target_task,
    vm_address_t *target_address,
    vm_size_t size,
    vm_address_t mask,
    int flags,
    void *src_task,
    vm_address_t src_address,
    boolean_t copy,
    vm_prot_t *cur_protection,
    vm_prot_t *max_protection,
    vm_inherit_t inheritance) {
    (void)target_task; (void)target_address; (void)size; (void)mask; (void)flags;
    (void)src_task; (void)src_address; (void)copy; (void)cur_protection; (void)max_protection; (void)inheritance;
    return 1;
}

// Pthreads and Darwin threading
int pthread_equal(pthread_t t1, pthread_t t2) {
    return t1 == t2;
}

void pthread_exit(void *retval) {
    ExitThread((DWORD)(uintptr_t)retval);
}

int pthread_kill(pthread_t thread, int sig) {
    (void)thread; (void)sig;
    return 0;
}

int pthread_setname_np(const char *name) {
    (void)name;
    return 0;
}

int pthread_attr_setdetachstate(pthread_attr_t *attr, int detachstate) {
    (void)attr; (void)detachstate;
    return 0;
}

int pthread_cond_timedwait_relative_np(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *reltime) {
    if (!reltime) return pthread_cond_wait(cond, mutex);
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    ts.tv_sec += reltime->tv_sec;
    ts.tv_nsec += reltime->tv_nsec;
    if (ts.tv_nsec >= 1000000000L) {
        ts.tv_sec += 1;
        ts.tv_nsec -= 1000000000L;
    }
    return pthread_cond_timedwait(cond, mutex, &ts);
}

void *pthread_get_stackaddr_np(pthread_t thread) {
    (void)thread;
    return NULL;
}

size_t pthread_get_stacksize_np(pthread_t thread) {
    (void)thread;
    return 1024 * 1024 * 8; // 8MB
}

int pthread_set_qos_class_self_np(qos_class_t qos_class, int relative_priority) {
    (void)qos_class; (void)relative_priority;
    return 0;
}

kern_return_t thread_policy_set(
    thread_act_t thread,
    thread_policy_flavor_t flavor,
    thread_policy_t policy_info,
    mach_msg_type_number_t count) {
    (void)thread; (void)flavor; (void)policy_info; (void)count;
    return KERN_SUCCESS;
}

int thread_selfcounts(int type, void *buf, size_t nbytes) {
    (void)type; (void)buf; (void)nbytes;
    return 0;
}

int sysctlbyname(const char *name, void *oldp, size_t *oldlenp, void *newp, size_t newlen) {
    (void)name; (void)oldp; (void)oldlenp; (void)newp; (void)newlen;
    return 0;
}

// Builtins and atomic operations
uint32_t __builtin_bswap32(uint32_t x) {
    return _byteswap_ulong(x);
}

int __builtin_clzll(unsigned long long x) {
    unsigned long idx = 0;
    if (_BitScanReverse64(&idx, x)) return (int)(63 - idx);
    return 64;
}

int __builtin_ctz(unsigned int x) {
    unsigned long idx = 0;
    if (_BitScanForward(&idx, x)) return (int)idx;
    return 32;
}

int __builtin_ctzl(unsigned long x) {
    unsigned long idx = 0;
    if (_BitScanForward(&idx, x)) return (int)idx;
    return 32;
}

int __builtin_ctzll(unsigned long long x) {
    unsigned long idx = 0;
    if (_BitScanForward64(&idx, x)) return (int)idx;
    return 64;
}

int __builtin_popcountll(unsigned long long x) {
    return (int)__popcnt64(x);
}

void *__builtin_frame_address(unsigned int level) {
    (void)level;
    return _AddressOfReturnAddress();
}

void *__builtin_return_address(unsigned int level) {
    (void)level;
    return _ReturnAddress();
}

int __atomic_compare_exchange_n(volatile void *ptr, void *expected, uint64_t desired, int success_memorder, int failure_memorder) {
    (void)success_memorder; (void)failure_memorder;
    uint64_t exp = *(uint64_t *)expected;
    uint64_t old = (uint64_t)InterlockedCompareExchange64((volatile LONG64 *)ptr, (LONG64)desired, (LONG64)exp);
    if (old == exp) return 1;
    *(uint64_t *)expected = old;
    return 0;
}

// Guest CPU assembly entries (trampolines/stubs for Windows x86_64 host)
void dm_gate(void) {}
#ifndef DM_HAS_CUSTOM_THREAD_ENTER
void dm_thread_enter(void) {}
#endif
void nvn_unimpl_entry(void) {
    fprintf(stderr, "[RED] Unimplemented NVN function called\\n");
    abort();
}

// Mach-O and POSIX symbols
const struct mach_header_64 _mh_execute_header = {0};
uint8_t unimpl_stubs[4096 * 8] = {0};

pthread_t pthread_self(void) {
    return (pthread_t)GetCurrentThread();
}
