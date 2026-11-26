// cleanupLoadedObjecthkpVehicleLinearCastBatchingManager: the cleanup function in hkpVehicleLinearCastBatchingManager's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleLinearCastBatchingManager.h"

void HK_CALL cleanupLoadedObjecthkpVehicleLinearCastBatchingManager(void *p)
{
    static_cast<hkpVehicleLinearCastBatchingManager *>(p)->~hkpVehicleLinearCastBatchingManager();
}
