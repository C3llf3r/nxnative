#pragma once

#if defined(__ANDROID__)

#include <vulkan/vulkan.h>
#include <vulkan/vulkan_android.h>
#include <android/native_window.h>
#include <stdbool.h>

typedef struct {
    VkInstance instance;
    VkPhysicalDevice physical_device;
    VkDevice device;
    VkQueue graphics_queue;
    uint32_t queue_family_index;
    VkSurfaceKHR surface;
    VkSwapchainKHR swapchain;
    VkExtent2D extent;
    uint32_t image_count;
    VkImage *images;
    VkImageView *image_views;
    bool initialized;
} vk_android_context_t;

bool vk_android_init(ANativeWindow *window);
void vk_android_shutdown(void);
void vk_android_present_frame(void);

#endif
