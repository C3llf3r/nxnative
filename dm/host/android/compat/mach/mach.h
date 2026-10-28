#pragma once

#if defined(__ANDROID__) || defined(__linux__)

#include <stdint.h>
#include <unistd.h>
#include "mach_time.h"

typedef int kern_return_t;
typedef uint32_t mach_port_t;
#define KERN_SUCCESS 0

static inline mach_port_t mach_task_self(void) { return 0; }
static inline mach_port_t mach_thread_self(void) { return 0; }

#endif
