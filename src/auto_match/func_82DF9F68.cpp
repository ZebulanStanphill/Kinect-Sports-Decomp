// cleanupLoadedObjecthkpVehicleManager: the cleanup function in hkpVehicleManager's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleManager {
public:
    virtual ~hkpVehicleManager();
};

void HK_CALL cleanupLoadedObjecthkpVehicleManager(void *p)
{
    static_cast<hkpVehicleManager *>(p)->~hkpVehicleManager();
}
