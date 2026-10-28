#pragma once

#if defined(__ANDROID__) || defined(__linux__)

#include "../../compat_android.h"

static inline int clonefile(const char *src, const char *dst, int flags) {
    return android_clonefile(src, dst, flags);
}

#endif
