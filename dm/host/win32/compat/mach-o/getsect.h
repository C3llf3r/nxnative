#pragma once
#include <windows.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

struct mach_header_64 {
    int dummy;
};
extern const struct mach_header_64 _mh_execute_header;

static inline void *getsectiondata(const struct mach_header_64 *mhp, const char *segname, const char *sectname, unsigned long *size) {
    (void)mhp; (void)segname;
    uint8_t *base = (uint8_t *)GetModuleHandle(NULL);
    if (!base) return NULL;
    IMAGE_DOS_HEADER *dos = (IMAGE_DOS_HEADER *)base;
    if (dos->e_magic != IMAGE_DOS_SIGNATURE) return NULL;
    IMAGE_NT_HEADERS *nt = (IMAGE_NT_HEADERS *)(base + dos->e_lfanew);
    if (nt->Signature != IMAGE_NT_SIGNATURE) return NULL;

    IMAGE_SECTION_HEADER *sec = IMAGE_FIRST_SECTION(nt);
    for (WORD i = 0; i < nt->FileHeader.NumberOfSections; i++) {
        char sec_name[9] = {0};
        memcpy(sec_name, sec[i].Name, 8);
        const char *p = sec_name;
        if (*p == '.') p++;
        if (strcmp(p, sectname) == 0) {
            if (size) *size = sec[i].Misc.VirtualSize;
            return (void *)(base + sec[i].VirtualAddress);
        }
    }
    if (size) *size = 0;
    return NULL;
}

#ifdef __cplusplus
}
#endif
