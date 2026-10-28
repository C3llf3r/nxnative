#pragma once
#include <windows.h>
#include <psapi.h>
#include <intrin.h>
#include <sys/ucontext.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long long vm_address_t;
typedef unsigned long long vm_size_t;
typedef int kern_return_t;
typedef int vm_prot_t;
typedef int boolean_t;
typedef uint32_t mach_msg_type_number_t;
typedef void *mach_port_t;
typedef int task_flavor_t;
typedef int *task_info_t;
typedef int thread_flavor_t;
typedef int *thread_info_t;
typedef int thread_state_flavor_t;
typedef int *thread_state_t;
typedef mach_port_t *thread_act_array_t;

#define KERN_SUCCESS 0
#define VM_PROT_NONE 0
#define VM_PROT_READ 1
#define VM_PROT_WRITE 2
#define VM_PROT_EXECUTE 4

#define VM_FLAGS_FIXED 0x0000
#define VM_FLAGS_ANYWHERE 0x0001
#define VM_FLAGS_OVERWRITE 0x4000
#define VM_INHERIT_NONE 2
#define vm_page_size 4096

#define ARM_THREAD_STATE64 6
#ifndef ARM_THREAD_STATE64_COUNT
#define ARM_THREAD_STATE64_COUNT (sizeof(arm_thread_state64_t) / sizeof(int))
#endif

#ifndef CLOCK_THREAD_CPUTIME_ID
#define CLOCK_THREAD_CPUTIME_ID 3
#endif

#ifndef __ATOMIC_RELAXED
#define __ATOMIC_RELAXED 0
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_SEQ_CST 5
#endif

#if defined(_MSC_VER)
#define __atomic_load_n(ptr, memorder) (*(ptr))
#define __atomic_store_n(ptr, val, memorder) (*(ptr) = (val))
static inline int __builtin_popcount(unsigned int x) {
    return (int)__popcnt(x);
}
#endif

static inline void *mach_task_self(void) {
    return GetCurrentProcess();
}

static inline kern_return_t vm_read_overwrite(void *task, vm_address_t addr, vm_size_t size, vm_address_t data, vm_size_t *outsize) {
    (void)task;
    SIZE_T bytesRead = 0;
    if (ReadProcessMemory(GetCurrentProcess(), (LPCVOID)(uintptr_t)addr, (LPVOID)(uintptr_t)data, (SIZE_T)size, &bytesRead)) {
        if (outsize) *outsize = (vm_size_t)bytesRead;
        return KERN_SUCCESS;
    }
    return 1;
}

typedef struct task_vm_info {
    uint64_t phys_footprint;
} task_vm_info_data_t;
#define TASK_VM_INFO 22
#define TASK_VM_INFO_COUNT (sizeof(task_vm_info_data_t) / sizeof(int))

typedef struct {
    uint64_t total_user;
    uint64_t total_system;
    uint64_t task_interrupt_wakeups;
    uint64_t task_platform_idle_wakeups;
} task_power_cpu_energy_t;

typedef struct {
    uint64_t task_gpu_utilisation;
} task_power_gpu_energy_t;

typedef struct task_power_info_v2 {
    task_power_cpu_energy_t cpu_energy;
    task_power_gpu_energy_t gpu_energy;
    uint64_t task_ptime;
    uint64_t task_energy;
} task_power_info_v2_data_t;
#define TASK_POWER_INFO_V2 23
#define TASK_POWER_INFO_V2_COUNT (sizeof(task_power_info_v2_data_t) / sizeof(int))

static inline kern_return_t task_info(void *target_task, task_flavor_t flavor, task_info_t task_info_out, mach_msg_type_number_t *task_info_outCnt) {
    (void)target_task; (void)task_info_outCnt;
    if (task_info_out && flavor == TASK_VM_INFO) {
        task_vm_info_data_t *vi = (task_vm_info_data_t *)task_info_out;
        PROCESS_MEMORY_COUNTERS pmc = { sizeof(pmc) };
        if (GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc))) {
            vi->phys_footprint = pmc.WorkingSetSize;
        } else {
            vi->phys_footprint = 0;
        }
        return KERN_SUCCESS;
    }
    if (task_info_out && flavor == TASK_POWER_INFO_V2) {
        task_power_info_v2_data_t *pw = (task_power_info_v2_data_t *)task_info_out;
        memset(pw, 0, sizeof(*pw));
        return KERN_SUCCESS;
    }
    return 1;
}

typedef struct time_value {
    int seconds;
    int microseconds;
} time_value_t;

typedef struct thread_basic_info {
    time_value_t user_time;
    time_value_t system_time;
    int cpu_usage;
    int policy;
    int run_state;
    int flags;
    int suspend_count;
    int sleep_time;
} thread_basic_info_data_t;
#define THREAD_BASIC_INFO 3
#define THREAD_BASIC_INFO_COUNT (sizeof(thread_basic_info_data_t) / sizeof(int))

typedef struct thread_extended_info {
    int pth_curpri;
    int pth_priority;
    int pth_policy;
} thread_extended_info_data_t;
#define THREAD_EXTENDED_INFO 5
#define THREAD_EXTENDED_INFO_COUNT (sizeof(thread_extended_info_data_t) / sizeof(int))

typedef mach_port_t thread_act_t;
typedef thread_act_t *thread_act_array_t;

static inline mach_port_t pthread_mach_thread_np(HANDLE t) {
    (void)t;
    return (mach_port_t)1;
}

static inline kern_return_t thread_info(mach_port_t target_act, thread_flavor_t flavor, thread_info_t thread_info_out, mach_msg_type_number_t *thread_info_outCnt) {
    (void)target_act; (void)flavor; (void)thread_info_out; (void)thread_info_outCnt;
    return 1;
}

static inline kern_return_t task_threads(void *target_task, thread_act_array_t *act_list, mach_msg_type_number_t *act_listCnt) {
    (void)target_task;
    if (act_list) *act_list = NULL;
    if (act_listCnt) *act_listCnt = 0;
    return 1;
}

static inline kern_return_t thread_get_state(mach_port_t target_act, thread_state_flavor_t flavor, thread_state_t old_state, mach_msg_type_number_t *old_stateCnt) {
    (void)target_act; (void)flavor; (void)old_state; (void)old_stateCnt;
    return 1;
}

static inline kern_return_t mach_port_deallocate(void *task, mach_port_t name) {
    (void)task; (void)name;
    return KERN_SUCCESS;
}

static inline kern_return_t vm_deallocate(void *task, vm_address_t address, vm_size_t size) {
    (void)task; (void)address; (void)size;
    return KERN_SUCCESS;
}

typedef uint64_t mach_vm_address_t;
typedef uint64_t mach_vm_size_t;
typedef uint64_t mach_vm_offset_t;
typedef int vm_inherit_t;
typedef int vm_region_flavor_t;
typedef int *vm_region_info_t;

typedef struct vm_region_basic_info_64 {
    vm_prot_t protection;
    vm_prot_t max_protection;
    unsigned int inheritance;
    boolean_t shared;
    boolean_t reserved;
    uint64_t offset;
    int behavior;
    unsigned short user_wired_count;
} vm_region_basic_info_data_64_t;

#define VM_REGION_BASIC_INFO_64 9
#define VM_REGION_BASIC_INFO_COUNT_64 (sizeof(vm_region_basic_info_data_64_t) / sizeof(int))

static inline kern_return_t mach_vm_region(
    void *target_task,
    mach_vm_address_t *address,
    mach_vm_size_t *size,
    vm_region_flavor_t flavor,
    vm_region_info_t info,
    mach_msg_type_number_t *infoCnt,
    mach_port_t *object_name) {
    (void)target_task; (void)address; (void)size; (void)flavor; (void)info; (void)infoCnt; (void)object_name;
    return 1;
}

static inline kern_return_t mach_vm_remap(
    void *target_task,
    mach_vm_address_t *target_address,
    mach_vm_size_t size,
    mach_vm_offset_t mask,
    int flags,
    void *src_task,
    mach_vm_address_t src_address,
    boolean_t copy,
    vm_prot_t *cur_protection,
    vm_prot_t *max_protection,
    vm_inherit_t inheritance) {
    (void)target_task; (void)target_address; (void)size; (void)mask; (void)flags; (void)src_task; (void)src_address; (void)copy; (void)cur_protection; (void)max_protection; (void)inheritance;
    return 1;
}




static inline thread_act_t mach_thread_self(void) {
    return (thread_act_t)(uintptr_t)GetCurrentThread();
}

static inline kern_return_t thread_suspend(thread_act_t act) {
    (void)act;
    return KERN_SUCCESS;
}

static inline kern_return_t thread_resume(thread_act_t act) {
    (void)act;
    return KERN_SUCCESS;
}


#ifndef MACH_PORT_NULL
#define MACH_PORT_NULL ((mach_port_t)0)
#endif

static inline kern_return_t vm_region_64(
    void *target_task,
    vm_address_t *address,
    vm_size_t *size,
    vm_region_flavor_t flavor,
    vm_region_info_t info,
    mach_msg_type_number_t *infoCnt,
    mach_port_t *object_name) {
    (void)target_task; (void)address; (void)size; (void)flavor; (void)info; (void)infoCnt; (void)object_name;
    return 1;
}

#ifdef __cplusplus
}
#endif
