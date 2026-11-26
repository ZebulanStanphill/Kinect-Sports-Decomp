// cleanupLoadedObjecthkpVehicleData: the cleanup function in hkpVehicleData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleData.h"

void HK_CALL cleanupLoadedObjecthkpVehicleData(void *p)
{
    static_cast<hkpVehicleData *>(p)->~hkpVehicleData();
}
