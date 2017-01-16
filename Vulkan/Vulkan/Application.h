#pragma once
#include <iostream>
#include <vulkan\vulkan.h>
class Application
{
protected:
	char*						_name;
	char *						_engineName;
	uint32_t					_appVersion;
	uint32_t					_engineVersion;
	VkInstance					_vkInstance;
	VkAllocationCallbacks		_vkAllocationCallbacks;
public:
	Application(char * name,char * engineName, uint32_t appVersion, uint32_t engineVersion);
	~Application();

	uint32_t initialize();
	uint32_t loadResource();
	uint32_t unloadResource();
	uint32_t run();
	VkInstance * getVkInstance();
	char * getName();
};

//This function will called on application destroyed

void VKAPI_PTR onFreeApplication(
	void*                                       pUserData,
	void*                                       pMemory);