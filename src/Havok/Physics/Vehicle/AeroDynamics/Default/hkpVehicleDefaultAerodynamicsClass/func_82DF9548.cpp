// cleanupLoadedObjecthkpVehicleDefaultAerodynamics: the cleanup function in hkpVehicleDefaultAerodynamics's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleDefaultAerodynamics.h"

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultAerodynamics(void *p)
{
    static_cast<hkpVehicleDefaultAerodynamics *>(p)->~hkpVehicleDefaultAerodynamics();
}
