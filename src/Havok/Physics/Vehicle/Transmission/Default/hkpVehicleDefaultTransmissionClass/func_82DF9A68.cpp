// cleanupLoadedObjecthkpVehicleDefaultTransmission: the cleanup function in hkpVehicleDefaultTransmission's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleDefaultTransmission.h"

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultTransmission(void *p)
{
    static_cast<hkpVehicleDefaultTransmission *>(p)->~hkpVehicleDefaultTransmission();
}
