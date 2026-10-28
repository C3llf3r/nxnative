#pragma once
#include <mach/mach.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int thread_policy_flavor_t;
typedef int *thread_policy_t;

typedef struct thread_time_constraint_policy {
    uint32_t period;
    uint32_t computation;
    uint32_t constraint;
    boolean_t preemptible;
} thread_time_constraint_policy_data_t;

#define THREAD_TIME_CONSTRAINT_POLICY 2
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT (sizeof(thread_time_constraint_policy_data_t) / sizeof(int))

static inline kern_return_t thread_policy_get(mach_port_t thread, thread_policy_flavor_t flavor, thread_policy_t policy_info, mach_msg_type_number_t *count, boolean_t *get_default) {
    (void)thread; (void)flavor; (void)policy_info; (void)count;
    if (get_default) *get_default = 1;
    return 1;
}

#ifdef __cplusplus
}
#endif
