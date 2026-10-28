#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
#ifndef __uint128_t_defined
#define __uint128_t_defined
typedef struct {
    uint64_t low;
    uint64_t high;
} __uint128_t;
#endif
#endif

typedef struct __darwin_arm_thread_state64 {
    uint64_t __x[29];
    uint64_t __fp;
    uint64_t __lr;
    uint64_t __sp;
    uint64_t __pc;
    uint32_t __cpsr;
    uint32_t __pad;
} arm_thread_state64_t;

typedef struct {
    uint32_t __esr;
    uint32_t __exception;
    uint64_t __far;
} arm_exception_state64_t;

typedef struct {
    uint8_t __v[32][16];
    uint32_t __fpcr;
    uint32_t __fpsr;
    uint32_t __pad;
} arm_neon_state64_t;

typedef struct mcontext64 {
    arm_exception_state64_t __es;
    arm_thread_state64_t __ss;
    arm_neon_state64_t __ns;
} *mcontext_t;

typedef struct ucontext_t {
    struct ucontext_t *uc_link;
    int uc_sigmask;
    struct {
        void *ss_sp;
        size_t ss_size;
        int ss_flags;
    } uc_stack;
    struct mcontext64 uc_mcontext_data;
    struct mcontext64 *uc_mcontext;
} ucontext_t;


#ifndef _STRUCT_ARM_THREAD_STATE64
#define _STRUCT_ARM_THREAD_STATE64 arm_thread_state64_t
#endif
#ifndef _STRUCT_ARM_NEON_STATE64
#define _STRUCT_ARM_NEON_STATE64 arm_neon_state64_t
#endif

#ifndef ARM_THREAD_STATE64
#define ARM_THREAD_STATE64 6
#endif
#ifndef ARM_THREAD_STATE64_COUNT
#define ARM_THREAD_STATE64_COUNT (sizeof(arm_thread_state64_t) / sizeof(uint32_t))
#endif

#define __darwin_arm_thread_state64_get_pc(st) ((st).__pc)
#define __darwin_arm_thread_state64_get_lr(st) ((st).__lr)
#define __darwin_arm_thread_state64_get_fp(st) ((st).__fp)
#define __darwin_arm_thread_state64_get_sp(st) ((st).__sp)

#ifdef __cplusplus
}
#endif
