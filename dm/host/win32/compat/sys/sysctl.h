#pragma once
#include <windows.h>
#include <stdint.h>

#define CTL_HW 6
#define HW_MEMSIZE 24

static inline int sysctl(int *name, unsigned int namelen, void *oldp, size_t *oldlenp, void *newp, size_t newlen) {
    (void)name; (void)namelen; (void)newp; (void)newlen;
    if (oldp && oldlenp && *oldlenp >= sizeof(uint64_t)) {
        MEMORYSTATUSEX ms = { sizeof(ms) };
        if (GlobalMemoryStatusEx(&ms)) {
            *(uint64_t *)oldp = (uint64_t)ms.ullTotalPhys;
            *oldlenp = sizeof(uint64_t);
            return 0;
        }
    }
    return -1;
}
