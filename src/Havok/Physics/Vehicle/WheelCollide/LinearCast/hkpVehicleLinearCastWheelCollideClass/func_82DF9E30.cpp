// cleanupLoadedObjecthkpVehicleLinearCastWheelCollide: the cleanup function in hkpVehicleLinearCastWheelCollide's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleWheelCollide.h"

void HK_CALL cleanupLoadedObjecthkpVehicleLinearCastWheelCollide(void *p)
{
    static_cast<hkpVehicleLinearCastWheelCollide *>(p)->~hkpVehicleLinearCastWheelCollide();
}
