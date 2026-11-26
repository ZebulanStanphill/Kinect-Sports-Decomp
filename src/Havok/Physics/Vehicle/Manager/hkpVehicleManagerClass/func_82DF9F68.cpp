// cleanupLoadedObjecthkpVehicleManager: the cleanup function in hkpVehicleManager's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleManager.h"

void HK_CALL cleanupLoadedObjecthkpVehicleManager(void *p)
{
    static_cast<hkpVehicleManager *>(p)->~hkpVehicleManager();
}
