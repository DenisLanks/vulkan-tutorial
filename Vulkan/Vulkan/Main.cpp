// Vulkan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Main.h"
#include <iostream>
using namespace std;

int main()
{
	Application application = Application("Vulkan Tutorial Application", "Vulkan Engine", VK_VERSION_1_0, VK_VERSION_1_0);
	auto result = application.initialize();
	switch (result)
	{
		case VK_SUCCESS: {	cout << "VkInstance was created." << endl;	}break;
		case VK_NOT_READY:			break;
		case VK_TIMEOUT:			break;
		case VK_EVENT_SET:			break;
		case VK_EVENT_RESET:			break;
		case VK_INCOMPLETE:			break;
		case VK_ERROR_OUT_OF_HOST_MEMORY:			break;
		case VK_ERROR_OUT_OF_DEVICE_MEMORY:			break;
		case VK_ERROR_INITIALIZATION_FAILED:			break;
		case VK_ERROR_DEVICE_LOST:			break;
		case VK_ERROR_MEMORY_MAP_FAILED:			break;
		case VK_ERROR_LAYER_NOT_PRESENT:			break;
		case VK_ERROR_EXTENSION_NOT_PRESENT:			break;
		case VK_ERROR_FEATURE_NOT_PRESENT:			break;
		case VK_ERROR_INCOMPATIBLE_DRIVER:			break;
		case VK_ERROR_TOO_MANY_OBJECTS:			break;
		case VK_ERROR_FORMAT_NOT_SUPPORTED:			break;
		case VK_ERROR_FRAGMENTED_POOL:			break;
		case VK_ERROR_SURFACE_LOST_KHR:			break;
		case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR:			return VK_ERROR_NATIVE_WINDOW_IN_USE_KHR;
		case VK_SUBOPTIMAL_KHR:			break;
		case VK_ERROR_OUT_OF_DATE_KHR:			return VK_ERROR_OUT_OF_DATE_KHR;
		case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR:			return VK_ERROR_INCOMPATIBLE_DISPLAY_KHR;
		case VK_ERROR_VALIDATION_FAILED_EXT:			break;
		case VK_ERROR_INVALID_SHADER_NV:			break;
		case VK_RESULT_RANGE_SIZE:			break;
		case VK_RESULT_MAX_ENUM:			break;		
	}
	return 0;
}
