# Ralph Loop: Plan de Verificación de nxnative para Windows

Este plan sigue el patrón Ralph Loop: Tarea -> Código -> Tests -> Feedback -> Repetir.
El objetivo es verificar rigurosamente que todos los subsistemas del Host funcionen de manera correcta y confiable bajo Windows 11 x64.

---

## Tareas

- [x] **Tarea 1**: Crear el plan de pruebas y harness de verificación en `ralph_plan.md`.
- [x] **Tarea 2**: Integrar los subsistemas y tests con la capa de compatibilidad Win32 (POSIX emulation, SEH cleanup, rwlocks, CRT error handlers).
- [x] **Tarea 3**: Compilar, ejecutar y validar `t_time` (manejo de reloj UTC, PosixTime, calendarios y monotonic clock).
  - *Resultado*: `time: 28 checks, 0 failed`.
- [x] **Tarea 4**: Compilar, ejecutar y validar sincronización y eventos (`t_condvar`, `t_system_event`).
  - *Resultados*:
    - `test_condvar.exe`: 1/1 passed.
    - `test_condvar_old.exe`: 1/1 passed (negative control).
    - `test_system_event.exe`: 5/5 passed (duplicate vi, rapid replacement, storage/handle reuse, vi rebind, host skip/guest lazy binding).
- [x] **Tarea 5**: Compilar, ejecutar y validar `t_fs_commit_list` (sistema de archivos transaccional de guardado en Windows, swap atómico, rollback, clonación COW emulada).
  - *Resultado*: `list Commit: 95 checks, 0 failed`.
- [x] **Tarea 6**: Validar subsistemas multimedia (`t_vorbis`, `t_movie_vpx`) y prueba de integración de `dmhost.exe`.
  - *Resultados*:
    - `test_vorbis.exe`: 10/10 passed (canales 1, 2, 3, 6, 8, mapeos de tipo 0, 1, 2).
    - `test_movie_vpx.exe`: Decodificación multihilo VP8 y VP9 con conversión NV12/RGBA passed.
    - `dmhost.exe`: Máquina de estados y precarga de módulos verificados con pipeline mock sin fallos ni diálogos de bloqueo.
- [x] **Tarea 7**: Reporte final consolidado del estado de funcionamiento en Windows.
