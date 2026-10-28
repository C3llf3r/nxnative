#pragma once
#include <windows.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#define CLONE_NOFOLLOW    0x0001
#define CLONE_NOOWNERCOPY 0x0002

static inline int clonefile(const char *src, const char *dst, int flags) {
    (void)flags;
    DWORD attrs = GetFileAttributesA(src);
    if (attrs == INVALID_FILE_ATTRIBUTES) {
        errno = ENOENT;
        return -1;
    }
    if (!(attrs & FILE_ATTRIBUTE_DIRECTORY)) {
        if (!CopyFileA(src, dst, FALSE)) {
            errno = EIO;
            return -1;
        }
        return 0;
    }
    if (!CreateDirectoryA(dst, NULL)) {
        DWORD err = GetLastError();
        if (err != ERROR_ALREADY_EXISTS) {
            errno = (err == ERROR_ACCESS_DENIED) ? EACCES : EIO;
            return -1;
        }
    }
    char pattern[MAX_PATH];
    snprintf(pattern, sizeof(pattern), "%s\\*", src);
    WIN32_FIND_DATAA fd;
    HANDLE hFind = FindFirstFileA(pattern, &fd);
    if (hFind == INVALID_HANDLE_VALUE) {
        return 0;
    }
    int res = 0;
    do {
        if (!strcmp(fd.cFileName, ".") || !strcmp(fd.cFileName, "..")) continue;
        char src_sub[MAX_PATH], dst_sub[MAX_PATH];
        snprintf(src_sub, sizeof(src_sub), "%s/%s", src, fd.cFileName);
        snprintf(dst_sub, sizeof(dst_sub), "%s/%s", dst, fd.cFileName);
        if (clonefile(src_sub, dst_sub, flags) != 0) {
            res = -1;
            break;
        }
    } while (FindNextFileA(hFind, &fd));
    FindClose(hFind);
    return res;
}
