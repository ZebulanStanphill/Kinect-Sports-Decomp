// cleanupLoadedObjecthkpRejectChassisListener: the cleanup function in hkpRejectChassisListener's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleWheelCollide.h"

void HK_CALL cleanupLoadedObjecthkpRejectChassisListener(void *p)
{
    static_cast<hkpRejectChassisListener *>(p)->~hkpRejectChassisListener();
}
