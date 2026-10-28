#pragma once
#include <errno.h>
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>

#define XATTR_NOFOLLOW 0x0001
#define XATTR_CREATE   0x0002
#define XATTR_REPLACE  0x0004

#ifndef ENOATTR
#define ENOATTR 93
#endif

static inline ssize_t getxattr(const char *path, const char *name, void *value, size_t size, uint32_t position, int options) {
    (void)path; (void)name; (void)value; (void)size; (void)position; (void)options;
    errno = ENOATTR;
    return -1;
}

static inline int setxattr(const char *path, const char *name, const void *value, size_t size, uint32_t position, int options) {
    (void)path; (void)name; (void)value; (void)size; (void)position; (void)options;
    return 0;
}

static inline int removexattr(const char *path, const char *name, int options) {
    (void)path; (void)name; (void)options;
    errno = ENOATTR;
    return -1;
}

static inline ssize_t listxattr(const char *path, char *namebuf, size_t size, int options) {
    (void)path; (void)namebuf; (void)size; (void)options;
    return 0;
}
