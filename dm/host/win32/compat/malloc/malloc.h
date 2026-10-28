#pragma once
#include <windows.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct malloc_zone_t {
    int dummy;
} malloc_zone_t;

static inline malloc_zone_t *malloc_create_zone(size_t start_size, unsigned flags) {
    (void)start_size; (void)flags;
    static malloc_zone_t zone;
    return &zone;
}

static inline void malloc_set_zone_name(malloc_zone_t *zone, const char *name) {
    (void)zone; (void)name;
}

static inline void *malloc_zone_malloc(malloc_zone_t *zone, size_t size) {
    (void)zone;
    size_t *p = (size_t *)malloc(size + 16);
    if (!p) return NULL;
    *p = size;
    return (void *)(p + 2);
}

static inline void *malloc_zone_memalign(malloc_zone_t *zone, size_t alignment, size_t size) {
    (void)zone; (void)alignment;
    return malloc_zone_malloc(zone, size);
}

static inline void malloc_zone_free(malloc_zone_t *zone, void *ptr) {
    (void)zone;
    if (ptr) {
        size_t *p = ((size_t *)ptr) - 2;
        free(p);
    }
}

static inline size_t malloc_size(const void *ptr) {
    if (!ptr) return 0;
    return *(((const size_t *)ptr) - 2);
}

static inline void *malloc_zone_realloc(malloc_zone_t *zone, void *ptr, size_t size) {
    (void)zone;
    if (!ptr) return malloc_zone_malloc(zone, size);
    size_t old_size = malloc_size(ptr);
    void *new_p = malloc_zone_malloc(zone, size);
    if (new_p) {
        size_t copy_n = old_size < size ? old_size : size;
        memcpy(new_p, ptr, copy_n);
        malloc_zone_free(zone, ptr);
    }
    return new_p;
}

static inline size_t malloc_good_size(size_t size) {
    return (size + 15) & ~15ull;
}

#ifdef __cplusplus
}
#endif
