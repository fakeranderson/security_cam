#include <iostream>
#include "camera/CameraManager.h"
#include "enums/ModuleEnums.h"

// TODO add create/destroy for each module
void initSystems(int moduleList)
{
	if(moduleList & ModuleList::MODULE_CAMERA_MANAGER)
	{
		CameraManager::createInstance();
		CameraManager::getInstance()->init();
	}
}

void destroySystems(int moduleList)
{
	if(moduleList & ModuleList::MODULE_CAMERA_MANAGER)
	{
		CameraManager::getInstance()->shutdown();
		CameraManager::destroyInstance();
	}
}

int main()
{
	int moduleList = ModuleList::MODULE_NONE;
	moduleList |= ModuleList::MODULE_CAMERA_MANAGER;
	initSystems(moduleList);
	CameraManager* camMgr = CameraManager::getInstance();
	std::cout << "Hello\n";
	// Grab the latest image from the camera. 60fps/30fps
	//
  // 1. get the image, store locally
  // 2. process the image for objects, stored in a container
  // 3. process the container of objects, alert for those we're instructed to
  //    a. if we should store that object, store it in a file directory for that object
  //    b. if we should alert the user, store it into an alertable container
  // 4. process alert items
  // 5. store the original picture if that user setting exists
  return 0;
}
