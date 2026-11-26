// finishLoadedObjecthkpVehicleInstance: the finish function in hkpVehicleInstance's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkpVehicleInstance.h"

void HK_CALL finishLoadedObjecthkpVehicleInstance(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleInstance(f);
}
