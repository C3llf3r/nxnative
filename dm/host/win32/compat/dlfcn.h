#pragma once
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Dl_info {
    const char *dli_fname;
    void       *dli_fbase;
    const char *dli_sname;
    void       *dli_saddr;
} Dl_info;

#define RTLD_DEFAULT  ((void *)0)
#define RTLD_LAZY     1
#define RTLD_NOW      2
#define RTLD_GLOBAL   4
#define RTLD_LOCAL    8

static inline void *dlopen(const char *filename, int flag) {
    (void)flag;
    if (!filename) return (void *)GetModuleHandle(NULL);
    return (void *)LoadLibraryA(filename);
}

static inline void *dlsym(void *handle, const char *symbol) {
    if (!handle) handle = GetModuleHandle(NULL);
    return (void *)GetProcAddress((HMODULE)handle, symbol);
}

static inline int dlclose(void *handle) {
    return FreeLibrary((HMODULE)handle) ? 0 : -1;
}

static inline char *dlerror(void) {
    return "dlerror not implemented";
}

static inline int dladdr(void *addr, Dl_info *info) {
    if (!info) return 0;
    info->dli_fname = NULL;
    info->dli_fbase = NULL;
    info->dli_sname = NULL;
    info->dli_saddr = NULL;
    HMODULE hMod = NULL;
    if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)addr, &hMod)) {
        info->dli_fbase = hMod;
        static char modName[MAX_PATH];
        if (GetModuleFileNameA(hMod, modName, sizeof(modName))) {
            info->dli_fname = modName;
        }
        return 1;
    }
    return 0;
}

#ifdef __cplusplus
}
#endif
