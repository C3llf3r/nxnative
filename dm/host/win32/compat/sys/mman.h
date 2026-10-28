// Minimal sys/mman.h wrapper for Windows VirtualAlloc
#pragma once
#include <windows.h>
#include <sys/types.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

#define PROT_NONE       0x00
#define PROT_READ       0x01
#define PROT_WRITE      0x02
#define PROT_EXEC       0x04

#define MAP_SHARED      0x01
#define MAP_PRIVATE     0x02
#define MAP_FIXED       0x10
#define MAP_ANON        0x20
#define MAP_ANONYMOUS   0x20

#define MAP_FAILED      ((void *)-1)

static inline DWORD win_prot_from_posix(int prot) {
    if ((prot & PROT_READ) && (prot & PROT_WRITE) && (prot & PROT_EXEC)) return PAGE_EXECUTE_READWRITE;
    if ((prot & PROT_READ) && (prot & PROT_EXEC)) return PAGE_EXECUTE_READ;
    if ((prot & PROT_READ) && (prot & PROT_WRITE)) return PAGE_READWRITE;
    if (prot & PROT_READ) return PAGE_READONLY;
    if (prot & PROT_EXEC) return PAGE_EXECUTE;
    return PAGE_NOACCESS;
}

static inline void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) {
    (void)fd; (void)offset;
    DWORD type = MEM_RESERVE | MEM_COMMIT;
    if (prot == PROT_NONE) {
        type = MEM_RESERVE; // Only reserve address space
    }
    DWORD win_prot = win_prot_from_posix(prot);
    void *ptr = VirtualAlloc(addr, length, type, win_prot);
    if (!ptr) {
        return MAP_FAILED;
    }
    return ptr;
}

static inline int mprotect(void *addr, size_t len, int prot) {
    DWORD old;
    DWORD win_prot = win_prot_from_posix(prot);
    if (!VirtualProtect(addr, len, win_prot, &old)) {
        return -1;
    }
    return 0;
}

static inline int munmap(void *addr, size_t len) {
    (void)len;
    if (!VirtualFree(addr, 0, MEM_RELEASE)) {
        return -1;
    }
    return 0;
}

#ifdef __cplusplus
}
#endif

#ifndef MADV_FREE
#define MADV_FREE 5
#endif
#ifndef MADV_DONTNEED
#define MADV_DONTNEED 4
#endif

static inline int madvise(void *addr, size_t len, int advice) {
    (void)addr; (void)len; (void)advice;
    return 0;
}
