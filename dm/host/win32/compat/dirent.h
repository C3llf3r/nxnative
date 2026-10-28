// Minimal dirent.h for Windows Win32
#pragma once
#include <windows.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DT_UNKNOWN
#define DT_UNKNOWN 0
#define DT_DIR     4
#define DT_REG     8
#endif

struct dirent {
    char d_name[MAX_PATH];
    unsigned char d_type;
};

typedef struct {
    HANDLE handle;
    WIN32_FIND_DATAA find_data;
    struct dirent current;
    int first;
} DIR;

static inline DIR *opendir(const char *name) {
    char pattern[MAX_PATH];
    snprintf(pattern, sizeof(pattern), "%s\\*", name);
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    if (!dir) return NULL;
    dir->handle = FindFirstFileA(pattern, &dir->find_data);
    if (dir->handle == INVALID_HANDLE_VALUE) {
        free(dir);
        return NULL;
    }
    dir->first = 1;
    return dir;
}

static inline struct dirent *readdir(DIR *dir) {
    if (!dir || dir->handle == INVALID_HANDLE_VALUE) return NULL;
    if (dir->first) {
        dir->first = 0;
    } else {
        if (!FindNextFileA(dir->handle, &dir->find_data)) {
            return NULL;
        }
    }
    strncpy(dir->current.d_name, dir->find_data.cFileName, MAX_PATH);
    dir->current.d_name[MAX_PATH - 1] = '\0';
    dir->current.d_type = (dir->find_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? DT_DIR : DT_REG;
    return &dir->current;
}

static inline int closedir(DIR *dir) {
    if (!dir) return -1;
    if (dir->handle != INVALID_HANDLE_VALUE) {
        FindClose(dir->handle);
    }
    free(dir);
    return 0;
}

#ifdef __cplusplus
}
#endif
