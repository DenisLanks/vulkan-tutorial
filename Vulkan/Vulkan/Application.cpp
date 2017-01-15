#include "stdafx.h"
#include "Application.h"


Application::Application(char * name, char * engineName, uint32_t appVersion, uint32_t engineVersion)
{

	_name = name;
	_engineName = engineName;
	_appVersion = appVersion;
	_engineVersion = engineVersion;
	_vkInstance = nullptr;
}


Application::~Application()
{
}

uint32_t Application::initialize()
{
	if (loadResource()!=0) {
		return -1;
	}	
	return 0;
}

uint32_t Application::loadResource()
{
	VkApplicationInfo vkApplicationInfo = {};
	vkApplicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	vkApplicationInfo.pApplicationName = _name;
	vkApplicationInfo.pEngineName = _engineName;
	vkApplicationInfo.apiVersion = 0;
	vkApplicationInfo.applicationVersion = _appVersion;
	vkApplicationInfo.engineVersion = _engineVersion;

	VkInstanceCreateInfo vkInstanceCreateInfo = {};
	vkInstanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	vkInstanceCreateInfo.pNext = nullptr;
	vkInstanceCreateInfo.pApplicationInfo = &vkApplicationInfo;
	vkInstanceCreateInfo.enabledExtensionCount = 0;
	vkInstanceCreateInfo.enabledLayerCount = 0;
	vkInstanceCreateInfo.ppEnabledExtensionNames = nullptr;
	vkInstanceCreateInfo.ppEnabledLayerNames = nullptr;
	vkInstanceCreateInfo.flags = 0;

	auto result = vkCreateInstance(&vkInstanceCreateInfo, nullptr, &_vkInstance);
	return uint32_t();
}

uint32_t Application::unloadResource()
{
	return uint32_t();
}

uint32_t Application::run()
{
	return uint32_t();
}

VkInstance * Application::getVkInstance()
{
	return &_vkInstance;
}
