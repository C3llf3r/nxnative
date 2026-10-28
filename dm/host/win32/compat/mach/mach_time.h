#pragma once
#include <stdint.h>
#include <windows.h>

typedef struct mach_timebase_info_data {
    uint32_t numer;
    uint32_t denom;
} mach_timebase_info_data_t;

static inline void mach_timebase_info(mach_timebase_info_data_t *info) {
    if (info) {
        info->numer = 1;
        info->denom = 1;
    }
}

static inline uint64_t mach_absolute_time(void) {
    static LARGE_INTEGER freq;
    static int init = 0;
    if (!init) {
        QueryPerformanceFrequency(&freq);
        init = 1;
    }
    LARGE_INTEGER count;
    QueryPerformanceCounter(&count);
    return (uint64_t)(count.QuadPart * 1000000000ULL / freq.QuadPart);
}
