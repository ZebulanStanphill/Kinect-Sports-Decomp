// cleanupLoadedObjecthkpVehicleRayCastBatchingManager: the cleanup function in hkpVehicleRayCastBatchingManager's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleRayCastBatchingManager {
public:
    virtual ~hkpVehicleRayCastBatchingManager();
};

void HK_CALL cleanupLoadedObjecthkpVehicleRayCastBatchingManager(void *p)
{
    static_cast<hkpVehicleRayCastBatchingManager *>(p)->~hkpVehicleRayCastBatchingManager();
}
