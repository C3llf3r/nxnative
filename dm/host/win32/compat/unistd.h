// Minimal POSIX unistd.h wrapper for Windows
#pragma once
#include <windows.h>
#include <BaseTsd.h>
#include <io.h>
#include <process.h>
#include <direct.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef SSIZE_T ssize_t;
typedef unsigned int useconds_t;

#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#endif


#ifndef F_OK
#define F_OK 0
#define X_OK 1
#define W_OK 2
#define R_OK 4
#endif

#define _SC_NPROCESSORS_ONLN 58

static inline long sysconf(int name) {
    if (name == _SC_NPROCESSORS_ONLN) {
        SYSTEM_INFO si;
        GetSystemInfo(&si);
        return (long)si.dwNumberOfProcessors;
    }
    return -1;
}

static inline int getdtablesize(void) {
    return 512;
}

static inline size_t strlcpy(char *dst, const char *src, size_t siz) {
    size_t len = strlen(src);
    if (siz) {
        size_t n = len < siz - 1 ? len : siz - 1;
        memcpy(dst, src, n);
        dst[n] = '\0';
    }
    return len;
}

static inline int getpagesize(void) {
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    return (int)si.dwPageSize; // 4096 on Windows
}

static inline unsigned int sleep(unsigned int seconds) {
    Sleep(seconds * 1000);
    return 0;
}

static inline int usleep(unsigned __int64 usec) {
    Sleep((DWORD)(usec / 1000));
    return 0;
}

static inline int getpid(void) {
    return (int)GetCurrentProcessId();
}

static inline int getuid(void) { return 0; }
static inline int geteuid(void) { return 0; }
static inline int getgid(void) { return 0; }
static inline int getegid(void) { return 0;
}


#ifndef RENAME_SWAP
#define RENAME_SWAP 0x00000002
#endif

#ifndef tzname
#define tzname _tzname
#endif
#ifndef tzset
#define tzset _tzset
#endif

static inline int renamex_np(const char *oldpath, const char *newpath, unsigned int flags) {
    if (flags & RENAME_SWAP) {
        char tmppath[1024];
        snprintf(tmppath, sizeof(tmppath), "%s.swap_tmp_%u", oldpath, (unsigned int)GetTickCount());
        if (!MoveFileA(oldpath, tmppath)) return -1;
        if (!MoveFileA(newpath, oldpath)) {
            MoveFileA(tmppath, oldpath);
            return -1;
        }
        if (!MoveFileA(tmppath, newpath)) return -1;
        return 0;
    }
    return MoveFileExA(oldpath, newpath, MOVEFILE_REPLACE_EXISTING) ? 0 : -1;
}

static inline char *mkdtemp(char *tmpl) {
    size_t len = strlen(tmpl);
    if (len < 6) return NULL;
    char *sub = tmpl + len - 6;
    if (strcmp(sub, "XXXXXX") != 0) return NULL;
    for (int retry = 0; retry < 1000; retry++) {
        unsigned int rnd = ((unsigned int)rand() << 16) ^ (unsigned int)GetCurrentProcessId() ^ (unsigned int)GetTickCount();
        snprintf(sub, 7, "%06x", rnd & 0xffffff);
        if (CreateDirectoryA(tmpl, NULL)) return tmpl;
        if (GetLastError() != ERROR_ALREADY_EXISTS) return NULL;
    }
    return NULL;
}

#ifdef __cplusplus
}
#endif
