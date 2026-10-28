#pragma once
#include <../ucrt/string.h>
#include <corecrt.h>

#ifdef __cplusplus
extern "C" {
#endif

void *memmem(const void *haystack, size_t haystacklen, const void *needle, size_t needlelen);

#ifdef __cplusplus
}
#endif
