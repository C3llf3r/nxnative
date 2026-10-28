#pragma once
#include <time.h>
#include <windows.h>

#ifndef _TIMEVAL_DEFINED
#define _TIMEVAL_DEFINED
struct timeval {
    long tv_sec;
    long tv_usec;
};
#endif

#ifndef CLOCK_REALTIME
#define CLOCK_REALTIME 0
#endif
#ifndef CLOCK_MONOTONIC
#define CLOCK_MONOTONIC 1
#endif
#ifndef CLOCK_THREAD_CPUTIME_ID
#define CLOCK_THREAD_CPUTIME_ID 3
#endif

#if defined(_WIN32)
#define timegm _mkgmtime

#ifndef _LOCALTIME_R_DEFINED
#define _LOCALTIME_R_DEFINED
static inline struct tm *localtime_r(const time_t *timep, struct tm *result) {
    return localtime_s(result, timep) == 0 ? result : NULL;
}

static inline struct tm *gmtime_r(const time_t *timep, struct tm *result) {
    return gmtime_s(result, timep) == 0 ? result : NULL;
}
#endif

struct timezone {
    int tz_minuteswest;
    int tz_dsttime;
};

static inline int gettimeofday(struct timeval *tv, struct timezone *tz) {
    (void)tz;
    if (tv) {
        FILETIME ft;
        GetSystemTimeAsFileTime(&ft);
        ULARGE_INTEGER u;
        u.LowPart = ft.dwLowDateTime;
        u.HighPart = ft.dwHighDateTime;
        uint64_t t = (u.QuadPart - 116444736000000000ULL) / 10;
        tv->tv_sec = (long)(t / 1000000);
        tv->tv_usec = (long)(t % 1000000);
    }
    return 0;
}
#endif

#ifndef tzname
#define tzname _tzname
#endif
#ifndef tzset
#define tzset _tzset
#endif
