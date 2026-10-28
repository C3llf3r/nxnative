package com.nxnative.app

import android.app.Activity
import android.content.Intent
import android.os.Build
import android.os.Bundle
import android.os.Environment
import android.view.KeyEvent
import android.view.View
import android.view.WindowInsets
import android.view.WindowInsetsController
import android.widget.Button
import android.widget.TextView
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {

    private lateinit var tvStatus: TextView
    private lateinit var btnSelectGame: Button
    private var selectedGamePath: String? = null

    private val folderPicker = registerForActivityResult(ActivityResultContracts.OpenDocumentTree()) { uri ->
        if (uri != null) {
            val path = uri.path ?: ""
            selectedGamePath = path
            tvStatus.text = "Cargado: $path"
            val storagePath = getExternalFilesDir(null)?.absolutePath
            NativeEngine.nativeInit(path, storagePath)
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        hideSystemUI()
        setContentView(R.layout.activity_main)

        tvStatus = findViewById(R.id.tvStatus)
        btnSelectGame = findViewById(R.id.btnSelectGame)

        btnSelectGame.setOnClickListener {
            folderPicker.launch(null)
        }
    }

    private fun hideSystemUI() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            window.insetsController?.let { controller ->
                controller.hide(WindowInsets.Type.statusBars() or WindowInsets.Type.navigationBars())
                controller.systemBarsBehavior = WindowInsetsController.BEHAVIOR_SHOW_TRANSIENT_BARS_BY_SWIPE
            }
        } else {
            @Suppress("DEPRECATION")
            window.decorView.systemUiVisibility = (
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                or View.SYSTEM_UI_FLAG_FULLSCREEN
                or View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                or View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                or View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                or View.SYSTEM_UI_FLAG_LAYOUT_STABLE
            )
        }
    }

    override fun onKeyDown(keyCode: Int, event: KeyEvent?): Boolean {
        // Physical gamepad button events
        NativeEngine.nativeSendKeyEvent(keyCode, true)
        return super.onKeyDown(keyCode, event)
    }

    override fun onKeyUp(keyCode: Int, event: KeyEvent?): Boolean {
        NativeEngine.nativeSendKeyEvent(keyCode, false)
        return super.onKeyUp(keyCode, event)
    }

    override fun onPause() {
        super.onPause()
        NativeEngine.nativeSetPause(true)
    }

    override fun onResume() {
        super.onResume()
        hideSystemUI()
        NativeEngine.nativeSetPause(false)
    }

    override fun onDestroy() {
        super.onDestroy()
        NativeEngine.nativeStop()
    }
}
