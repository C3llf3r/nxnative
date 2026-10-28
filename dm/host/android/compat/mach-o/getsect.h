#pragma once

#if defined(__ANDROID__) || defined(__linux__)

#include <string.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct mach_header_64 {
    int dummy;
};
extern const struct mach_header_64 _mh_execute_header;

extern const char __start_swhle[] __attribute__((weak));
extern const char __stop_swhle[] __attribute__((weak));
extern const char __start_swforce[] __attribute__((weak));
extern const char __stop_swforce[] __attribute__((weak));

static inline void *getsectiondata(const struct mach_header_64 *mhp, const char *segname, const char *sectname, unsigned long *size) {
    (void)mhp; (void)segname;
    if (strcmp(sectname, "swhle") == 0) {
        if (&__start_swhle && &__stop_swhle) {
            if (size) *size = (unsigned long)(__stop_swhle - __start_swhle);
            return (void *)__start_swhle;
        }
    } else if (strcmp(sectname, "swforce") == 0) {
        if (&__start_swforce && &__stop_swforce) {
            if (size) *size = (unsigned long)(__stop_swforce - __start_swforce);
            return (void *)__start_swforce;
        }
    }
    if (size) *size = 0;
    return NULL;
}

#ifdef __cplusplus
}
#endif

#endif
