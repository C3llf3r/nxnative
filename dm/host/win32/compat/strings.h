#pragma once
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#endif

#ifdef __cplusplus
}
#endif

#if defined(_MSC_VER)
#include <intrin.h>
static inline int __builtin_ctz(unsigned int x) {
    unsigned long idx = 0;
    _BitScanForward(&idx, x);
    return (int)idx;
}
static inline int __builtin_ctzl(unsigned long x) {
    unsigned long idx = 0;
    _BitScanForward(&idx, x);
    return (int)idx;
}
static inline int __builtin_ctzll(unsigned long long x) {
    unsigned long idx = 0;
    _BitScanForward64(&idx, x);
    return (int)idx;
}
static inline int __builtin_popcountll(unsigned long long x) {
    return (int)__popcnt64(x);
}
#endif
