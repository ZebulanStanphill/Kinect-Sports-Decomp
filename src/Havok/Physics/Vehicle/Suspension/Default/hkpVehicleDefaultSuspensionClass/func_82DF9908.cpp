// cleanupLoadedObjecthkpVehicleDefaultSuspension: the cleanup function in hkpVehicleDefaultSuspension's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleDefaultSuspension.h"

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultSuspension(void *p)
{
    static_cast<hkpVehicleDefaultSuspension *>(p)->~hkpVehicleDefaultSuspension();
}
