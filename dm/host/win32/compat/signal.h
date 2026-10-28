#pragma once
#include <corecrt.h>
#include <stdio.h>
#include <windows.h>

#ifndef _INC_SIGNAL
#define _INC_SIGNAL
typedef int sig_atomic_t;
typedef void (__CRTDECL* _crt_signal_t)(int);
#define NSIG            23
#define SIGINT          2
#define SIGILL          4
#define SIGFPE          8
#define SIGSEGV         11
#define SIGTERM         15
#define SIGBREAK        21
#define SIGABRT         22
#define SIGABRT_COMPAT  6
#define SIG_DFL ((_crt_signal_t)0)
#define SIG_IGN ((_crt_signal_t)1)
#define SIG_GET ((_crt_signal_t)2)
#define SIG_SGE ((_crt_signal_t)3)
#define SIG_ACK ((_crt_signal_t)4)
#define SIG_ERR ((_crt_signal_t)-1)
_ACRTIMP _crt_signal_t __cdecl signal(int _Signal, _crt_signal_t _Function);
_ACRTIMP int __cdecl raise(int _Signal);
#endif

#ifndef SIGTRAP
#define SIGTRAP 5
#endif
#ifndef SIGBUS
#define SIGBUS 10
#endif
#ifndef SIGALRM
#define SIGALRM 14
#endif
#ifndef SIGPIPE
#define SIGPIPE 13
#endif
#ifndef SIGUSR1
#define SIGUSR1 30
#endif
#ifndef SIGUSR2
#define SIGUSR2 31
#endif

typedef int sigset_t;

typedef struct {
    void *si_addr;
    int si_signo;
    int si_errno;
    int si_code;
} siginfo_t;

typedef struct {
    void *ss_sp;
    size_t ss_size;
    int ss_flags;
} stack_t;

#define SS_DISABLE 4
#define SA_RESTART 0x0002
#define SA_SIGINFO 0x0040
#define SA_ONSTACK 0x08000000

struct sigaction {
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
    sigset_t sa_mask;
    int sa_flags;
};

static inline int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact) {
    (void)signum; (void)act; (void)oldact;
    return 0;
}

static inline int sigaltstack(const stack_t *ss, stack_t *old_ss) {
    (void)ss; (void)old_ss;
    return 0;
}

static inline unsigned int alarm(unsigned int seconds) {
    (void)seconds;
    return 0;
}

static inline int pause(void) {
    Sleep(INFINITE);
    return -1;
}

static inline int ftrylockfile(FILE *f) {
    (void)f;
    return 0;
}

static inline void funlockfile(FILE *f) {
    (void)f;
}

#include <sys/ucontext.h>
