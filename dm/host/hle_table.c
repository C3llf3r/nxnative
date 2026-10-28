// libc passthrough table: C library functions consistent with AAPCS64 and with no struct layout dependency, connected directly to Apple libc. Goes into the swhle section.
#include "dm.h"
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

typedef struct { const char *name; void *fn; } hle_ent;

#if defined(_MSC_VER)
#pragma section(".swhle", read)
#define L(n) __declspec(allocate(".swhle")) const hle_ent hle_lib_##n = { #n, (void *)n };
#define L_ALIAS(n, real) __declspec(allocate(".swhle")) const hle_ent hle_lib_##n = { #n, (void *)real };

static int dm_strcasecmp(const char *s1, const char *s2) { return _stricmp(s1, s2); }
static int dm_strncasecmp(const char *s1, const char *s2, size_t n) { return _strnicmp(s1, s2, n); }
static time_t dm_timegm(struct tm *tm) { return _mkgmtime(tm); }
static struct tm *dm_gmtime_r(const time_t *timep, struct tm *result) { return gmtime_s(result, timep) == 0 ? result : NULL; }
static struct tm *dm_localtime_r(const time_t *timep, struct tm *result) { return localtime_s(result, timep) == 0 ? result : NULL; }

#else
#define L(n) __attribute__((used, section("__DATA,swhle"))) static const hle_ent hle_lib_##n = { #n, (void *)n };
#define L_ALIAS(n, real) L(n)
#endif

L(memcpy) L(memset) L(memmove) L(memcmp) L(memchr) L(strlen) L(strnlen) L(strcmp) L(strncmp)
L(strcpy) L(strncpy) L(strcat) L(strncat) L(strchr) L(strrchr) L(strstr) L(strspn) L(strcspn)
L(strpbrk)
#if defined(_MSC_VER)
L_ALIAS(strcasecmp, dm_strcasecmp) L_ALIAS(strncasecmp, dm_strncasecmp)
#else
L(strcasecmp) L(strncasecmp)
#endif
L(atoi) L(atof) L(strtol) L(strtoul) L(strtoll) L(strtoull)
L(strtod) L(strtof) L(sqrtf) L(cbrtf) L(expf) L(acosf) L(cosf) L(sinf) L(atan2f) L(fmodf) L(cos)
L(sin) L(powf) L(atanf) L(tanf) L(asinf) L(log10) L(pow) L(logf) L(ldexpf) L(log10f) L(log)
L(ldexp) L(frexp) L(atan2) L(modff) L(exp2f) L(exp2) L(log2f) L(log2) L(lroundf)
L(mktime)
#if defined(_MSC_VER)
L_ALIAS(timegm, dm_timegm) L_ALIAS(gmtime_r, dm_gmtime_r) L_ALIAS(localtime_r, dm_localtime_r)
#else
L(timegm) L(gmtime_r) L(localtime_r)
#endif
L(strftime)
