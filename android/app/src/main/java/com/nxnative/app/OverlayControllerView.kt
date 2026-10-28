package com.nxnative.app

import android.content.Context
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import android.util.AttributeSet
import android.view.MotionEvent
import android.view.View

class OverlayControllerView @JvmOverloads constructor(
    context: Context,
    attrs: AttributeSet? = null,
    defStyleAttr: Int = 0
) : View(context, attrs, defStyleAttr) {

    private val buttonPaint = Paint().apply {
        color = Color.argb(120, 255, 255, 255)
        style = Paint.Style.FILL
        isAntiAlias = true
    }

    private val textPaint = Paint().apply {
        color = Color.BLACK
        textSize = 36f
        textAlign = Paint.Align.CENTER
        isAntiAlias = true
        isFakeBoldText = true
    }

    // Keycodes matching Switch gamepad buttons
    // 0 = A, 1 = B, 2 = X, 3 = Y, 4 = L, 5 = R, 6 = ZL, 7 = ZR, 8 = Plus, 9 = Minus
    private var btnAState = false
    private var btnBState = false
    private var btnXState = false
    private var btnYState = false

    override fun onDraw(canvas: Canvas) {
        super.onDraw(canvas)
        val w = width.toFloat()
        val h = height.toFloat()
        if (w == 0f || h == 0f) return

        // Draw Right Face Buttons (A, B, X, Y)
        val cx = w - 160f
        val cy = h - 160f
        val r = 42f
        val offset = 70f

        // A Button (Right)
        canvas.drawCircle(cx + offset, cy, r, buttonPaint)
        canvas.drawText("A", cx + offset, cy + 12f, textPaint)

        // B Button (Bottom)
        canvas.drawCircle(cx, cy + offset, r, buttonPaint)
        canvas.drawText("B", cx, cy + offset + 12f, textPaint)

        // X Button (Top)
        canvas.drawCircle(cx, cy - offset, r, buttonPaint)
        canvas.drawText("X", cx, cy - offset + 12f, textPaint)

        // Y Button (Left)
        canvas.drawCircle(cx - offset, cy, r, buttonPaint)
        canvas.drawText("Y", cx - offset, cy + 12f, textPaint)

        // Draw Left D-Pad
        val lx = 160f
        val ly = h - 160f

        canvas.drawCircle(lx, ly - offset, r, buttonPaint)
        canvas.drawText("▲", lx, ly - offset + 12f, textPaint)

        canvas.drawCircle(lx, ly + offset, r, buttonPaint)
        canvas.drawText("▼", lx, ly + offset + 12f, textPaint)

        canvas.drawCircle(lx - offset, ly, r, buttonPaint)
        canvas.drawText("◀", lx - offset, ly + 12f, textPaint)

        canvas.drawCircle(lx + offset, ly, r, buttonPaint)
        canvas.drawText("▶", lx + offset, ly + 12f, textPaint)

        // Shoulders (L, R)
        canvas.drawRoundRect(60f, 40f, 180f, 90f, 15f, 15f, buttonPaint)
        canvas.drawText("L", 120f, 75f, textPaint)

        canvas.drawRoundRect(w - 180f, 40f, w - 60f, 90f, 15f, 15f, buttonPaint)
        canvas.drawText("R", w - 120f, 75f, textPaint)
    }

    override fun onTouchEvent(event: MotionEvent): Boolean {
        val action = event.actionMasked
        val pointerIndex = event.actionIndex
        val x = event.getX(pointerIndex)
        val y = event.getY(pointerIndex)

        when (action) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                handleTouch(x, y, true)
            }
            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP -> {
                handleTouch(x, y, false)
            }
        }
        return true
    }

    private fun handleTouch(x: Float, y: Float, isDown: Boolean) {
        val w = width.toFloat()
        val h = height.toFloat()
        val cx = w - 160f
        val cy = h - 160f
        val offset = 70f
        val threshold = 55f

        // Check A button
        if (Math.hypot((x - (cx + offset)).toDouble(), (y - cy).toDouble()) < threshold) {
            if (btnAState != isDown) {
                btnAState = isDown
                NativeEngine.nativeSendKeyEvent(0, isDown)
            }
        }
        // Check B button
        if (Math.hypot((x - cx).toDouble(), (y - (cy + offset)).toDouble()) < threshold) {
            if (btnBState != isDown) {
                btnBState = isDown
                NativeEngine.nativeSendKeyEvent(1, isDown)
            }
        }
        // Check X button
        if (Math.hypot((x - cx).toDouble(), (y - (cy - offset)).toDouble()) < threshold) {
            if (btnXState != isDown) {
                btnXState = isDown
                NativeEngine.nativeSendKeyEvent(2, isDown)
            }
        }
        // Check Y button
        if (Math.hypot((x - (cx - offset)).toDouble(), (y - cy).toDouble()) < threshold) {
            if (btnYState != isDown) {
                btnYState = isDown
                NativeEngine.nativeSendKeyEvent(3, isDown)
            }
        }
    }
}
