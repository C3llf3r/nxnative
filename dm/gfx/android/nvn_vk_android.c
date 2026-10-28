#if defined(__ANDROID__)

#include "nvn_vk_android.h"
#include "../../host/android/compat_android.h"
#include <stdlib.h>
#include <string.h>

static vk_android_context_t g_vk_ctx = {0};

bool vk_android_init(ANativeWindow *window) {
    if (!window) {
        LOGE("[vk_android] Invalid ANativeWindow pointer");
        return false;
    }

    if (g_vk_ctx.initialized) {
        LOGW("[vk_android] Vulkan context already initialized");
        return true;
    }

    // 1. Create Vulkan Instance
    VkApplicationInfo app_info = {
        .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pApplicationName = "nxnative",
        .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
        .pEngineName = "nxnative-vulkan",
        .engineVersion = VK_MAKE_VERSION(1, 0, 0),
        .apiVersion = VK_API_VERSION_1_1,
    };

    const char *extensions[] = {
        VK_KHR_SURFACE_EXTENSION_NAME,
        VK_KHR_ANDROID_SURFACE_EXTENSION_NAME,
    };

    VkInstanceCreateInfo inst_info = {
        .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pApplicationInfo = &app_info,
        .enabledExtensionCount = 2,
        .ppEnabledExtensionNames = extensions,
    };

    if (vkCreateInstance(&inst_info, NULL, &g_vk_ctx.instance) != VK_SUCCESS) {
        LOGE("[vk_android] vkCreateInstance failed");
        return false;
    }

    // 2. Create Android Surface
    VkAndroidSurfaceCreateInfoKHR surface_info = {
        .sType = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR,
        .window = window,
    };

    if (vkCreateAndroidSurfaceKHR(g_vk_ctx.instance, &surface_info, NULL, &g_vk_ctx.surface) != VK_SUCCESS) {
        LOGE("[vk_android] vkCreateAndroidSurfaceKHR failed");
        vkDestroyInstance(g_vk_ctx.instance, NULL);
        return false;
    }

    // 3. Pick Physical Device
    uint32_t gpu_count = 0;
    vkEnumeratePhysicalDevices(g_vk_ctx.instance, &gpu_count, NULL);
    if (gpu_count == 0) {
        LOGE("[vk_android] No Vulkan physical devices found");
        return false;
    }

    VkPhysicalDevice gpus[4];
    if (gpu_count > 4) gpu_count = 4;
    vkEnumeratePhysicalDevices(g_vk_ctx.instance, &gpu_count, gpus);
    g_vk_ctx.physical_device = gpus[0];

    VkPhysicalDeviceProperties props;
    vkGetPhysicalDeviceProperties(g_vk_ctx.physical_device, &props);
    LOGI("[vk_android] Selected GPU: %s (Vulkan %d.%d)", props.deviceName,
         VK_VERSION_MAJOR(props.apiVersion), VK_VERSION_MINOR(props.apiVersion));

    // 4. Create Logical Device
    float queue_priority = 1.0f;
    g_vk_ctx.queue_family_index = 0; // standard graphics family on mobile GPUs

    VkDeviceQueueCreateInfo queue_info = {
        .sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
        .queueFamilyIndex = g_vk_ctx.queue_family_index,
        .queueCount = 1,
        .pQueuePriorities = &queue_priority,
    };

    const char *device_extensions[] = {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME,
    };

    VkDeviceCreateInfo dev_info = {
        .sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
        .queueCreateInfoCount = 1,
        .pQueueCreateInfos = &queue_info,
        .enabledExtensionCount = 1,
        .ppEnabledExtensionNames = device_extensions,
    };

    if (vkCreateDevice(g_vk_ctx.physical_device, &dev_info, NULL, &g_vk_ctx.device) != VK_SUCCESS) {
        LOGE("[vk_android] vkCreateDevice failed");
        return false;
    }

    vkGetDeviceQueue(g_vk_ctx.device, g_vk_ctx.queue_family_index, 0, &g_vk_ctx.graphics_queue);

    // 5. Query Surface Capabilities & create Swapchain
    VkSurfaceCapabilitiesKHR caps;
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(g_vk_ctx.physical_device, g_vk_ctx.surface, &caps);

    g_vk_ctx.extent = caps.currentExtent;
    LOGI("[vk_android] Surface extent: %ux%u", g_vk_ctx.extent.width, g_vk_ctx.extent.height);

    VkSwapchainCreateInfoKHR swapchain_info = {
        .sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR,
        .surface = g_vk_ctx.surface,
        .minImageCount = caps.minImageCount > 2 ? caps.minImageCount : 2,
        .imageFormat = VK_FORMAT_R8G8B8A8_UNORM,
        .imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
        .imageExtent = g_vk_ctx.extent,
        .imageArrayLayers = 1,
        .imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT,
        .imageSharingMode = VK_SHARING_MODE_EXCLUSIVE,
        .preTransform = caps.currentTransform,
        .compositeAlpha = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
        .presentMode = VK_PRESENT_MODE_FIFO_KHR,
        .clipped = VK_TRUE,
    };

    if (vkCreateSwapchainKHR(g_vk_ctx.device, &swapchain_info, NULL, &g_vk_ctx.swapchain) != VK_SUCCESS) {
        LOGE("[vk_android] vkCreateSwapchainKHR failed");
        return false;
    }

    LOGI("[vk_android] Vulkan swapchain created successfully on Android");
    g_vk_ctx.initialized = true;
    return true;
}

void vk_android_present_frame(void) {
    if (!g_vk_ctx.initialized) return;
    // Swapchain acquire, command submit, and present
}

void vk_android_shutdown(void) {
    if (!g_vk_ctx.initialized) return;
    if (g_vk_ctx.swapchain) vkDestroySwapchainKHR(g_vk_ctx.device, g_vk_ctx.swapchain, NULL);
    if (g_vk_ctx.device) vkDestroyDevice(g_vk_ctx.device, NULL);
    if (g_vk_ctx.surface) vkDestroySurfaceKHR(g_vk_ctx.instance, g_vk_ctx.surface, NULL);
    if (g_vk_ctx.instance) vkDestroyInstance(g_vk_ctx.instance, NULL);
    memset(&g_vk_ctx, 0, sizeof(g_vk_ctx));
    LOGI("[vk_android] Vulkan shutdown completed");
}

#endif
