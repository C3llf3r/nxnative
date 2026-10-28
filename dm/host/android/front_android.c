#if defined(__ANDROID__)

#include <jni.h>
#include <android/native_window.h>
#include <android/native_window_jni.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "compat_android.h"

// External declarations from dmhost core
extern int dm_main(int argc, char **argv);
extern void dm_focus_set(int st);
extern void dm_audio_suspend(int on);

static ANativeWindow *g_native_window = NULL;
static pthread_mutex_t g_window_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_t g_worker_thread = 0;
static bool g_is_running = false;
static char g_game_dir[1024] = {0};

ANativeWindow *android_get_native_window(void) {
    pthread_mutex_lock(&g_window_mutex);
    ANativeWindow *w = g_native_window;
    pthread_mutex_unlock(&g_window_mutex);
    return w;
}

static void *game_runner_thread(void *arg) {
    (void)arg;
    LOGI("[android] Game runner thread starting for directory: %s", g_game_dir);

    char *argv[] = { "dmhost", g_game_dir, NULL };
    int argc = 2;

    int ret = dm_main(argc, argv);
    LOGI("[android] Game runner finished with code %d", ret);
    g_is_running = false;
    return NULL;
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    (void)vm; (void)reserved;
    LOGI("[android] JNI_OnLoad: nxnative library loaded successfully");
    return JNI_VERSION_1_6;
}

JNIEXPORT jboolean JNICALL
Java_com_nxnative_app_NativeEngine_nativeInit(JNIEnv *env, jobject thiz, jstring gameDir, jstring storageDir) {
    (void)thiz;
    if (!gameDir) return JNI_FALSE;

    const char *game_str = (*env)->GetStringUTFChars(env, gameDir, NULL);
    strncpy(g_game_dir, game_str, sizeof(g_game_dir) - 1);
    (*env)->ReleaseStringUTFChars(env, gameDir, game_str);

    if (storageDir) {
        const char *storage_str = (*env)->GetStringUTFChars(env, storageDir, NULL);
        android_set_storage_root(storage_str);
        (*env)->ReleaseStringUTFChars(env, storageDir, storage_str);
    }

    LOGI("[android] nativeInit configured. GameDir: %s, Storage: %s", g_game_dir, android_get_storage_root());

    if (!g_is_running) {
        g_is_running = true;
        if (pthread_create(&g_worker_thread, NULL, game_runner_thread, NULL) != 0) {
            LOGE("[android] Failed to start game runner thread");
            g_is_running = false;
            return JNI_FALSE;
        }
    }

    return JNI_TRUE;
}

JNIEXPORT void JNICALL
Java_com_nxnative_app_NativeEngine_nativeSetSurface(JNIEnv *env, jobject thiz, jobject surface) {
    (void)thiz;
    pthread_mutex_lock(&g_window_mutex);
    if (g_native_window) {
        ANativeWindow_release(g_native_window);
        g_native_window = NULL;
    }
    if (surface) {
        g_native_window = ANativeWindow_fromSurface(env, surface);
        LOGI("[android] ANativeWindow assigned: %p (width=%d, height=%d)",
             g_native_window,
             ANativeWindow_getWidth(g_native_window),
             ANativeWindow_getHeight(g_native_window));
    }
    pthread_mutex_unlock(&g_window_mutex);
}

JNIEXPORT void JNICALL
Java_com_nxnative_app_NativeEngine_nativeDestroySurface(JNIEnv *env, jobject thiz) {
    (void)env; (void)thiz;
    pthread_mutex_lock(&g_window_mutex);
    if (g_native_window) {
        LOGI("[android] Releasing ANativeWindow");
        ANativeWindow_release(g_native_window);
        g_native_window = NULL;
    }
    pthread_mutex_unlock(&g_window_mutex);
}

JNIEXPORT void JNICALL
Java_com_nxnative_app_NativeEngine_nativeSendKeyEvent(JNIEnv *env, jobject thiz, jint keyCode, jboolean isDown) {
    (void)env; (void)thiz;
    // Map Android KeyEvent keycodes to Nintendo Switch HID buttons
    // 0 = A, 1 = B, 2 = X, 3 = Y, 4 = L, 5 = R, 6 = ZL, 7 = ZR, 8 = Plus, 9 = Minus, etc.
    LOGI("[android] Key event: code=%d down=%d", keyCode, isDown);
}

JNIEXPORT void JNICALL
Java_com_nxnative_app_NativeEngine_nativeSendTouchEvent(JNIEnv *env, jobject thiz, jint action, jfloat x, jfloat y) {
    (void)env; (void)thiz;
    // Touch screen event forwarding to Switch HID touch subsystem
    // action: 0 = DOWN, 1 = UP, 2 = MOVE
    (void)action; (void)x; (void)y;
}

JNIEXPORT void JNICALL
Java_com_nxnative_app_NativeEngine_nativeSetPause(JNIEnv *env, jobject thiz, jboolean paused) {
    (void)env; (void)thiz;
    LOGI("[android] Lifecycle pause change: paused=%d", paused);
    if (paused) {
        dm_focus_set(3); // Background
        dm_audio_suspend(1);
    } else {
        dm_focus_set(1); // Foreground
        dm_audio_suspend(0);
    }
}

JNIEXPORT void JNICALL
Java_com_nxnative_app_NativeEngine_nativeStop(JNIEnv *env, jobject thiz) {
    (void)env; (void)thiz;
    LOGI("[android] nativeStop requested");
    g_is_running = false;
    dm_focus_set(3);
    dm_audio_suspend(1);
}

#endif
