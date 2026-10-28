#pragma once

#if defined(__ANDROID__)

#include <android/log.h>
#include <time.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ANDROID_LOG_TAG "nxnative"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, ANDROID_LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, ANDROID_LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, ANDROID_LOG_TAG, __VA_ARGS__)

#ifndef CLOCK_MONOTONIC_RAW
#define CLOCK_MONOTONIC_RAW CLOCK_MONOTONIC
#endif

// High-resolution monotonic timer for Android
static inline uint64_t clock_gettime_nsec_np(int clock_id) {
    struct timespec ts;
    clock_gettime(clock_id, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ULL + (uint64_t)ts.tv_nsec;
}

// Emulation of Apple's clonefile on Linux/Android
int android_clonefile(const char *src, const char *dst, int flags);

// Emulation of Apple's renamex_np with RENAME_SWAP
#define RENAME_SWAP (1 << 1)
int android_renamex_np(const char *oldpath, const char *newpath, unsigned int flags);

// Storage path resolution for Android app sandboxing
const char *android_get_storage_root(void);
void android_set_storage_root(const char *path);

#endif
