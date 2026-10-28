#pragma once
#include <corecrt.h>
#include <../ucrt/sys/stat.h>

#ifndef S_ISREG
#define S_ISREG(m) (((m) & _S_IFMT) == _S_IFREG)
#endif
#ifndef S_ISDIR
#define S_ISDIR(m) (((m) & _S_IFMT) == _S_IFDIR)
#endif
#ifndef S_ISCHR
#define S_ISCHR(m) (((m) & _S_IFMT) == _S_IFCHR)
#endif
#ifndef S_ISFIFO
#define S_ISFIFO(m) (((m) & _S_IFMT) == _S_IFIFO)
#endif
#ifndef S_ISSOCK
#define S_ISSOCK(m) 0
#endif
#ifndef S_ISBLK
#define S_ISBLK(m) 0
#endif

#include <direct.h>
#ifndef mkdir
#define mkdir(p, m) _mkdir(p)
#endif
