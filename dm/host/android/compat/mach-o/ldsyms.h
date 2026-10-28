#pragma once

#if defined(__ANDROID__) || defined(__linux__)

#ifdef __cplusplus
extern "C" {
#endif

struct mach_header_64 {
    int dummy;
};
static const struct mach_header_64 _mh_execute_header = {0};

#ifdef __cplusplus
}
#endif

#endif
