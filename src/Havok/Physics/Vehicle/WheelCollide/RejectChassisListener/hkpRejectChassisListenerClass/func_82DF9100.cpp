// finishLoadedObjecthkpRejectChassisListener: the finish function in hkpRejectChassisListener's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

void HK_CALL finishLoadedObjecthkpRejectChassisListener(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRejectChassisListener(f);
}
