#pragma once
//#include <opencv2/core/mat.hpp>
class CameraManager
{
  public:
	CameraManager();
	~CameraManager();
	static void createInstance();
	static CameraManager* getInstance();
	static void destroyInstance();
	
	void init();
    /*RETURN AN IMAGE */void process();
	void shutdown();

  private:
	static CameraManager* s_instance;
};
