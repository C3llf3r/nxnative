#pragma once
#include <windows.h>
#include <stdint.h>
#include <string.h>
#include <sys/time.h>

#define RLIMIT_NOFILE 0

typedef uint64_t rlim_t;

struct rlimit {
    rlim_t rlim_cur;
    rlim_t rlim_max;
};

static inline int getrlimit(int resource, struct rlimit *rlp) {
    (void)resource;
    if (rlp) {
        rlp->rlim_cur = 4096;
        rlp->rlim_max = 4096;
    }
    return 0;
}

static inline int setrlimit(int resource, const struct rlimit *rlp) {
    (void)resource;
    (void)rlp;
    return 0;
}

#define RUSAGE_SELF 0
#define RUSAGE_CHILDREN -1

struct rusage {
    struct timeval ru_utime;
    struct timeval ru_stime;
    long   ru_maxrss;
    long   ru_ixrss;
    long   ru_idrss;
    long   ru_isrss;
    long   ru_minflt;
    long   ru_majflt;
    long   ru_nswap;
    long   ru_inblock;
    long   ru_oublock;
    long   ru_msgsnd;
    long   ru_msgrcv;
    long   ru_nsignals;
    long   ru_nvcsw;
    long   ru_nivcsw;
};

static inline int getrusage(int who, struct rusage *usage) {
    (void)who;
    if (usage) {
        memset(usage, 0, sizeof(*usage));
        FILETIME create, exit, kernel, user;
        if (GetProcessTimes(GetCurrentProcess(), &create, &exit, &kernel, &user)) {
            ULARGE_INTEGER k, u;
            k.LowPart = kernel.dwLowDateTime;
            k.HighPart = kernel.dwHighDateTime;
            u.LowPart = user.dwLowDateTime;
            u.HighPart = user.dwHighDateTime;
            usage->ru_utime.tv_sec = (long)(u.QuadPart / 10000000ULL);
            usage->ru_utime.tv_usec = (long)((u.QuadPart % 10000000ULL) / 10ULL);
            usage->ru_stime.tv_sec = (long)(k.QuadPart / 10000000ULL);
            usage->ru_stime.tv_usec = (long)((k.QuadPart % 10000000ULL) / 10ULL);
        }
    }
    return 0;
}
