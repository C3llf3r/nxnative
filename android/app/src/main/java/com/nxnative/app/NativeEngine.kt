package com.nxnative.app

import android.view.Surface

object NativeEngine {
    init {
        try {
            System.loadLibrary("nxnative")
        } catch (e: UnsatisfiedLinkError) {
            e.printStackTrace()
        }
    }

    external fun nativeInit(gameDir: String, storageDir: String?): Boolean
    external fun nativeSetSurface(surface: Surface)
    external fun nativeDestroySurface()
    external fun nativeSendKeyEvent(keyCode: Int, isDown: Boolean)
    external fun nativeSendTouchEvent(action: Int, x: Float, y: Float)
    external fun nativeSetPause(paused: Boolean)
    external fun nativeStop()
}
