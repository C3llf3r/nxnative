#pragma once

#if defined(__ANDROID__) || defined(__linux__)

#define QOS_CLASS_USER_INTERACTIVE 0x21
#define QOS_CLASS_USER_INITIATED   0x19
#define QOS_CLASS_DEFAULT          0x15
#define QOS_CLASS_UTILITY          0x11
#define QOS_CLASS_BACKGROUND       0x09
#define QOS_CLASS_UNSPECIFIED      0x00

typedef unsigned int qos_class_t;

static inline qos_class_t qos_class_self(void) {
    return QOS_CLASS_DEFAULT;
}

#endif
