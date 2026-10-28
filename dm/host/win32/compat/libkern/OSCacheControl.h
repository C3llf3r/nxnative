#pragma once
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline void sys_icache_invalidate(void *start, size_t len) {
    FlushInstructionCache(GetCurrentProcess(), start, len);
}

static inline void sys_dcache_flush(void *start, size_t len) {
    (void)start; (void)len;
}

#ifdef __cplusplus
}
#endif
