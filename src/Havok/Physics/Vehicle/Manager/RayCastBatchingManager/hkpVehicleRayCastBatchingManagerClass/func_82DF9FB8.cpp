// cleanupLoadedObjecthkpVehicleRayCastBatchingManager: the cleanup function in hkpVehicleRayCastBatchingManager's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleRayCastBatchingManager.h"

void HK_CALL cleanupLoadedObjecthkpVehicleRayCastBatchingManager(void *p)
{
    static_cast<hkpVehicleRayCastBatchingManager *>(p)->~hkpVehicleRayCastBatchingManager();
}
