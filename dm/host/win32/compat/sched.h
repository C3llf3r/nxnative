#pragma once
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline int sched_yield(void) {
    return SwitchToThread() ? 0 : 0;
}

#ifdef __cplusplus
}
#endif
