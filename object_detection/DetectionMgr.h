#include<Enums.h>
#include<map>


namespace DetectionMgr
{

class DetectionMgr
{
  public:
    typedef int64_t Image;
    typedef int64_t Object
    typedef std::map<Image, ObjectTypeEnums::VehicleTypeBrand> VehicleBrandMatch;
    static bool createInstance();
    static DetectionMgr* getInstance() { return s_instance;}
    static bool hasInstance() { return (s_instance != nullptr); }
    static void destroyInstance();

  private:
    static DetectionMgr* s_instance;
    

}

}
