#pragma once
#include <iostream>
#include <vulkan\vulkan.h>
class Application
{
protected:
	char* _name;
	char * _engineName;
	uint32_t _appVersion;
	uint32_t _engineVersion;
	VkInstance _vkInstance;
public:
	Application(char * name,char * engineName, uint32_t appVersion, uint32_t engineVersion);
	~Application();

	uint32_t initialize();
	uint32_t loadResource();
	uint32_t unloadResource();
	uint32_t run();
	VkInstance * getVkInstance();
};

