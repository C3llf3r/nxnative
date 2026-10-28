#if defined(__ANDROID__)

#include "compat_android.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <dirent.h>
#include <sys/stat.h>

static char g_android_storage_root[1024] = "/sdcard/nxnative";

const char *android_get_storage_root(void) {
    return g_android_storage_root;
}

void android_set_storage_root(const char *path) {
    if (path && *path) {
        strncpy(g_android_storage_root, path, sizeof(g_android_storage_root) - 1);
        g_android_storage_root[sizeof(g_android_storage_root) - 1] = '\0';
    }
}

static int copy_single_file(const char *src, const char *dst) {
    int fd_in = open(src, O_RDONLY);
    if (fd_in < 0) return -1;
    struct stat st;
    if (fstat(fd_in, &st) < 0) {
        close(fd_in);
        return -1;
    }
    int fd_out = open(dst, O_WRONLY | O_CREAT | O_TRUNC, st.st_mode & 0777);
    if (fd_out < 0) {
        close(fd_in);
        return -1;
    }

    char buf[65536];
    ssize_t bytes;
    while ((bytes = read(fd_in, buf, sizeof(buf))) > 0) {
        ssize_t written = write(fd_out, buf, (size_t)bytes);
        if (written != bytes) {
            close(fd_in);
            close(fd_out);
            return -1;
        }
    }
    close(fd_in);
    close(fd_out);
    return 0;
}

static int copy_recursive(const char *src, const char *dst) {
    struct stat st;
    if (stat(src, &st) < 0) return -1;
    if (S_ISDIR(st.st_mode)) {
        mkdir(dst, 0755);
        DIR *dir = opendir(src);
        if (!dir) return -1;
        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL) {
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) continue;
            char sub_src[1024];
            char sub_dst[1024];
            snprintf(sub_src, sizeof(sub_src), "%s/%s", src, entry->d_name);
            snprintf(sub_dst, sizeof(sub_dst), "%s/%s", dst, entry->d_name);
            if (copy_recursive(sub_src, sub_dst) < 0) {
                closedir(dir);
                return -1;
            }
        }
        closedir(dir);
        return 0;
    } else if (S_ISREG(st.st_mode)) {
        return copy_single_file(src, dst);
    }
    return 0;
}

int android_clonefile(const char *src, const char *dst, int flags) {
    (void)flags;
    return copy_recursive(src, dst);
}

int android_renamex_np(const char *oldpath, const char *newpath, unsigned int flags) {
    if (flags & RENAME_SWAP) {
        char tmppath[1024];
        snprintf(tmppath, sizeof(tmppath), "%s.swap_tmp_%d_%u", oldpath, getpid(), (unsigned int)time(NULL));
        if (rename(oldpath, tmppath) != 0) return -1;
        if (rename(newpath, oldpath) != 0) {
            rename(tmppath, oldpath);
            return -1;
        }
        if (rename(tmppath, newpath) != 0) return -1;
        return 0;
    }
    return rename(oldpath, newpath);
}

#endif
