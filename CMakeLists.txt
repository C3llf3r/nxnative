cmake_minimum_required(VERSION 3.20)
project(nxnative C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Game profile ID (ej: 010015100B514000 para Super Mario Wonder)
set(GAME "010015100B514000" CACHE STRING "Nintendo Switch Game Title ID")

if(NOT GAME)
    message(FATAL_ERROR "GAME no especificado. Use -DGAME=<TitleID>")
endif()

message(STATUS "Configurando nxnative para el juego: ${GAME}")

# Generar game_profile.h utilizando python
set(GAME_GEN_DIR "${CMAKE_CURRENT_BINARY_DIR}/gen/${GAME}")
set(GAME_PROFILE_H "${GAME_GEN_DIR}/game_profile.h")
file(MAKE_DIRECTORY "${GAME_GEN_DIR}")

find_package(Python3 REQUIRED COMPONENTS Interpreter)

add_custom_command(
    OUTPUT "${GAME_PROFILE_H}"
    COMMAND ${Python3_EXECUTABLE} "${CMAKE_CURRENT_SOURCE_DIR}/dm/games/game.py" header "${GAME}" "${GAME_PROFILE_H}"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/dm/games/${GAME}/game.tsv"
            "${CMAKE_CURRENT_SOURCE_DIR}/dm/games/game.py"
    COMMENT "Generando game_profile.h para ${GAME}"
    VERBATIM
)

add_custom_target(generate_game_profile DEPENDS "${GAME_PROFILE_H}")

# Rutas de inclusión
if(WIN32)
    include_directories(BEFORE "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/win32/compat")
endif()
include_directories(
    "${GAME_GEN_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/tex"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/vulkan-headers/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/libvpx"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/libvpx/config"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/stb_vorbis"
)

# 1. Compilar libvpx como librería estática
file(GLOB_RECURSE LIBVPX_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/libvpx/*.c")
# Excluir ejemplos y tests de libvpx
list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/examples/.*")
list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/test/.*")
list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/tools/.*")

# Filtrar según la arquitectura de CPU
if(CMAKE_SYSTEM_PROCESSOR MATCHES "ARM64|aarch64" OR MSVC_CXX_ARCHITECTURE_ID MATCHES "ARM64")
    list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/x86/.*")
else()
    list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/arm/.*")
    list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/mips/.*")
    list(FILTER LIBVPX_SOURCES EXCLUDE REGEX ".*/ppc/.*")
endif()

add_library(vpx STATIC ${LIBVPX_SOURCES})
target_include_directories(vpx PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/libvpx"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/third_party/libvpx/config"
)
if(MSVC)
    target_compile_options(vpx PRIVATE /W0)
else()
    target_compile_options(vpx PRIVATE -w)
endif()

# 2. Fuentes del Host y Gráficos comunes (C puro)
file(GLOB HOST_COMMON_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/hle_*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/crash.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/hle.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/loader.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/main.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/probe.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/thread.c"
    # stb_vorbis.c included in hle_movie.c
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/tex/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/hle_nvn.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/nvn_dirty.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/nvn_tex.c"
)

# Fuentes específicas de la plataforma
if(APPLE)
    file(GLOB APPLE_SRC
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/front_mac.m"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/haptics_apple.m"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/memstat.m"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/entry.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/*.m"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/nvn_entry.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/nvn/nvn_thunks.S"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/tex/*.m"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/vk/*.m"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/gfx/gl/*.m"
    )
    add_executable(dmhost ${HOST_COMMON_SRC} ${APPLE_SRC})
    target_link_libraries(dmhost PRIVATE
        vpx
        "-framework Cocoa"
        "-framework QuartzCore"
        "-framework Metal"
        "-framework MetalFX"
        "-framework GameController"
        "-framework CoreHaptics"
        "-framework IOKit"
        "-framework AudioToolbox"
        "-framework VideoToolbox"
        "-framework CoreMedia"
        "-framework CoreVideo"
        "-framework ImageIO"
        "-framework UniformTypeIdentifiers"
    )
    target_compile_options(dmhost PRIVATE -fobjc-arc -Wall -Wno-unused-function)
elseif(WIN32)
    # Plataforma Windows
    message(STATUS "Configurando target dmhost para Windows")
    add_definitions(-D_CRT_SECURE_NO_WARNINGS -DNOMINMAX -DWIN32_LEAN_AND_MEAN -D_USE_MATH_DEFINES)
    
    # Archivos específicos de Windows (capa de compatibilidad y frontend)
    set(WIN32_SRC
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/win32/front_win32.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/win32/compat_win32.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/win32/mtl_win32.c"
        "${CMAKE_CURRENT_SOURCE_DIR}/dm/host/win32/nvn_thunks_win32.c"
    )
    
    add_executable(dmhost ${HOST_COMMON_SRC} ${WIN32_SRC})
    if(MSVC)
        target_compile_options(dmhost PRIVATE /experimental:c11atomics /wd4068 /wd4146)
    endif()
    target_link_libraries(dmhost PRIVATE
        vpx
        kernel32
        user32
        onecore
        ws2_32
    )
endif()

add_dependencies(dmhost generate_game_profile)
