#pragma once
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t val[16];
} uint8x16_t;

typedef struct {
    uint8x16_t val[2];
} uint8x16x2_t;

static inline uint8x16_t vld1q_u8(const uint8_t *p) {
    uint8x16_t r;
    memcpy(r.val, p, 16);
    return r;
}

static inline void vst2q_u8(uint8_t *p, uint8x16x2_t val) {
    for (int i = 0; i < 16; i++) {
        p[2 * i] = val.val[0].val[i];
        p[2 * i + 1] = val.val[1].val[i];
    }
}

#ifdef __cplusplus
}
#endif
