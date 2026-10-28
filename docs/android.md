# Guía de Construcción y Ejecución en Android (nxnative)

Esta guía documenta la arquitectura y los pasos para compilar y ejecutar **nxnative** en dispositivos **Android**.

---

## 1. Arquitectura en Android

Dado que Nintendo Switch utiliza un SoC con arquitectura **ARM64 (Cortex-A57)** y la inmensa mayoría de teléfonos Android modernos utilizan procesadores **ARM64 (Snapdragon, MediaTek Dimensity, Google Tensor, Exynos)**:

* **Ejecución Nativa en CPU**: El código del juego (`main`, NSO) se ejecuta de forma nativa directamente en los núcleos del procesador del teléfono móvil, sin la sobrecarga de emuladores JIT lentos.
* **Kernel y Memoria**: Android utiliza el kernel Linux con soporte nativo de páginas de memoria de **4 KB**, el mismo tamaño de página nativo que la Nintendo Switch.
* **Capa Gráfica**: En Android, las llamadas gráficas NVN se retransmiten a través de **Vulkan** (`dm/gfx/android/nvn_vk_android.c`) conectado a un `ANativeWindow` de Android (`VK_KHR_android_surface`).
* **Puente JNI**: La interfaz entre la aplicación Android y el runtime C se encuentra en `dm/host/android/front_android.c`.

---

## 2. Estructura del Proyecto Android

El proyecto Android se ubica en el directorio `android/`:

```text
android/
├── build.gradle               # Configuración raíz de Gradle
├── settings.gradle            # Inclusión del módulo :app
├── gradle.properties          # Parámetros de JVM y AndroidX
└── app/
    ├── build.gradle           # Configuración NDK, CMake y ABI arm64-v8a
    └── src/main/
        ├── AndroidManifest.xml # Permisos, orientación horizontal y categoría Game
        ├── res/               # Recursos de UI, temas inmersivos y colores
        └── java/com/nxnative/app/
            ├── MainActivity.kt           # Activity principal y selector de juegos
            ├── NativeEngine.kt           # Declaración de métodos JNI hacia libnxnative.so
            ├── GameSurfaceView.kt        # Vista SurfaceView para renderizado Vulkan
            └── OverlayControllerView.kt  # Mando virtual táctil en pantalla (A, B, X, Y, D-Pad, L, R)
```

---

## 3. Instrucciones de Compilación

### Opción A: Desde Android Studio (Recomendado)

1. Abre **Android Studio**.
2. Selecciona **Open** y navega a la carpeta `C:\Users\Administrador\Desktop\nintendo\android`.
3. Espera a que Gradle sincronice las dependencias y configure el CMake nativo.
4. Conecta tu teléfono Android por USB (con depuración USB activada) o utiliza un emulador ARM64.
5. Haz clic en **Run** (ícono verde de Play) o en el menú: **Build $\rightarrow$ Build Bundle(s) / APK(s) $\rightarrow$ Build APK(s)**.

### Opción B: Por Línea de Comandos (Gradle)

Desde una terminal en la carpeta `android`:

```bash
cd android
./gradlew assembleDebug
```

El APK generado se encontrará en:
`android/app/build/outputs/apk/debug/app-debug.apk`

Para instalarlo directamente en tu teléfono:
```bash
adb install -r app/build/outputs/apk/debug/app-debug.apk
```

---

## 4. Cómo Cargar y Jugar Títulos de Switch

1. **Transferir el Juego al Teléfono**:
   Copia la carpeta del juego desempaquetada (que contenga los archivos `main`, librerías `sdk` y la carpeta `romfs/`) a la memoria interna de tu dispositivo, por ejemplo en:
   `/sdcard/nxnative/010015100B514000/`

2. **Abrir la Aplicación**:
   * Abre **nxnative** en tu teléfono Android.
   * La app iniciará en modo horizontal (*landscape*) y pantalla completa inmersiva.
   * Pulsa el botón superior **"Seleccionar Carpeta del Juego"**.
   * Navega hasta la carpeta del juego y concédele permiso de acceso.

3. **Controles**:
   * **Táctil**: El overlay en pantalla provee botones virtuales transparentes para la cruceta (D-Pad), botones frontales (A, B, X, Y) y gatillos (L, R).
   * **Mandos Físicos**: Si conectas un mando por Bluetooth o USB (mando de Xbox, PlayStation DualSense, Switch Pro Controller o adaptadores tipo Razer Kishi / Backbone), la aplicación intercepta automáticamente los botones analógicos y digitales sin necesidad de configuración adicional.
