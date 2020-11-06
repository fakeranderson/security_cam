#include "CameraManager.h"

CameraManager* CameraManager::s_instance = nullptr;

CameraManager::CameraManager()
{

}

CameraManager::~CameraManager()
{
	
}

void CameraManager::createInstance()
{
	if(!s_instance)
	{
		s_instance = new CameraManager();
	}
	else
	{
		//  output error message
	}
}

CameraManager* CameraManager::getInstance()
{
	return s_instance;
}

void CameraManager::destroyInstance()
{
	if(s_instance)
	{
		delete s_instance;
	}
	else
	{
		// error message
	}
}

void CameraManager::init()
{

}

void CameraManager::process()
{

}

void CameraManager::shutdown()
{

}
