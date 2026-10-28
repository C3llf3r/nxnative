// NVN counter timestamps are 614.4 MHz ticks (384 ticks per 625 ns), not the CPU's 19.2 MHz system counter.
// Keep the guest clock's epoch in both directions. Wide products avoid overflow on long host uptimes.
#pragma once
#include <stdint.h>

static inline uint64_t nvn_timestamp_from_ns(uint64_t ns) {
    uint64_t q = ns / 625;
    uint64_t r = ns % 625;
    return q * 384 + (r * 384) / 625;
}

static inline uint64_t nvn_timestamp_to_ns(uint64_t ticks) {
    uint64_t q = ticks / 384;
    uint64_t r = ticks % 384;
    return q * 625 + (r * 625) / 384;
}
