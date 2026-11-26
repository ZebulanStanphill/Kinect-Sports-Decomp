// cleanupLoadedObjecthkpVehicleDefaultSteering: the cleanup function in hkpVehicleDefaultSteering's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleDefaultSteering.h"

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultSteering(void *p)
{
    static_cast<hkpVehicleDefaultSteering *>(p)->~hkpVehicleDefaultSteering();
}
