// Windows Front End for nxnative (Win32)
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "../front.h"
#include "../dm.h"

static HWND g_hwnd = NULL;

void *front_metal_layer(void) {
    return (void *)g_hwnd;
}

int front_screen_max_fps(void) {
    DEVMODEW dm;
    memset(&dm, 0, sizeof(dm));
    dm.dmSize = sizeof(dm);
    if (EnumDisplaySettingsW(NULL, ENUM_CURRENT_SETTINGS, &dm)) {
        return (int)dm.dmDisplayFrequency;
    }
    return 60;
}

void front_screen_match(int fps) {
    (void)fps;
}

void front_progress(const char *title, long done, long total) {
    if (title) {
        LOG("[front] %s: %ld/%ld", title, done, total);
    }
}

int front_text_input(const char *title, const char *sub, const char *guide, const char *initial, int max_chars, char *out, int out_cap) {
    (void)title; (void)sub; (void)guide; (void)initial; (void)max_chars;
    if (out && out_cap > 0) {
        out[0] = '\0';
    }
    return 0; // Cancel/empty for now
}

void front_save_failed(int err) {
    LOG("[RED] front: save failed with error %d", err);
}

void front_run(void (*guest)(void)) {
    LOG("[front] Starting Windows front-end...");
    // For now, execute the guest entry directly on this thread
    if (guest) {
        guest();
    }
}
