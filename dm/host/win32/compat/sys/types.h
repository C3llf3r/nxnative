#pragma once
#include <stdint.h>
#include <windows.h>
#include <BaseTsd.h>
#include <corecrt.h>

#ifndef _INO_T_DEFINED
    #define _INO_T_DEFINED
    typedef unsigned short _ino_t;
    typedef _ino_t ino_t;
#endif

#ifndef _DEV_T_DEFINED
    #define _DEV_T_DEFINED
    typedef unsigned int _dev_t;
    typedef _dev_t dev_t;
#endif

#ifndef _OFF_T_DEFINED
    #define _OFF_T_DEFINED
    typedef long _off_t;
    typedef _off_t off_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef SSIZE_T ssize_t;
typedef int mode_t;
typedef uint32_t uid_t;
typedef uint32_t gid_t;
typedef int pid_t;

#ifdef __cplusplus
}
#endif
