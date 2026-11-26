// cleanupLoadedObjecthkpVehicleDefaultBrake: the cleanup function in hkpVehicleDefaultBrake's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleDefaultBrake.h"

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultBrake(void *p)
{
    static_cast<hkpVehicleDefaultBrake *>(p)->~hkpVehicleDefaultBrake();
}
