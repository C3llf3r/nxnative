#pragma once
#include <stdlib.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void *CFTypeRef;
typedef struct CFDictionaryEntry {
    const void *key;
    const void *value;
} CFDictionaryEntry;

typedef struct CFDictionaryImpl {
    size_t count;
    size_t capacity;
    CFDictionaryEntry *entries;
} *CFMutableDictionaryRef, *CFDictionaryRef;

static inline CFMutableDictionaryRef CFDictionaryCreateMutable(void *allocator, size_t capacity, const void *keyCallBacks, const void *valueCallBacks) {
    (void)allocator; (void)keyCallBacks; (void)valueCallBacks;
    if (capacity < 16) capacity = 16;
    CFMutableDictionaryRef d = (CFMutableDictionaryRef)calloc(1, sizeof(struct CFDictionaryImpl));
    d->capacity = capacity;
    d->entries = (CFDictionaryEntry *)calloc(capacity, sizeof(CFDictionaryEntry));
    return d;
}

static inline const void *CFDictionaryGetValue(CFDictionaryRef dict, const void *key) {
    if (!dict || !dict->entries) return NULL;
    for (size_t i = 0; i < dict->capacity; i++) {
        if (dict->entries[i].key == key) {
            return dict->entries[i].value;
        }
    }
    return NULL;
}

static inline void CFDictionarySetValue(CFMutableDictionaryRef dict, const void *key, const void *value) {
    if (!dict) return;
    for (size_t i = 0; i < dict->capacity; i++) {
        if (dict->entries[i].key == key) {
            dict->entries[i].value = value;
            return;
        }
    }
    if (dict->count >= dict->capacity) {
        size_t new_cap = dict->capacity * 2;
        CFDictionaryEntry *new_entries = (CFDictionaryEntry *)realloc(dict->entries, new_cap * sizeof(CFDictionaryEntry));
        if (new_entries) {
            for (size_t i = dict->capacity; i < new_cap; i++) {
                new_entries[i].key = NULL;
                new_entries[i].value = NULL;
            }
            dict->entries = new_entries;
            dict->capacity = new_cap;
        }
    }
    for (size_t i = 0; i < dict->capacity; i++) {
        if (!dict->entries[i].key) {
            dict->entries[i].key = key;
            dict->entries[i].value = value;
            dict->count++;
            return;
        }
    }
}

static inline void CFDictionaryRemoveValue(CFMutableDictionaryRef dict, const void *key) {
    if (!dict || !dict->entries) return;
    for (size_t i = 0; i < dict->capacity; i++) {
        if (dict->entries[i].key == key) {
            dict->entries[i].key = NULL;
            dict->entries[i].value = NULL;
            dict->count--;
            return;
        }
    }
}

static inline void CFRelease(CFTypeRef cf) {
    (void)cf;
}

#ifdef __cplusplus
}
#endif
