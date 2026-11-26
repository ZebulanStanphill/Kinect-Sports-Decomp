// finishLoadedObjecthkpVehicleManager: the finish function in hkpVehicleManager's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleManager -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleManager.h"

void HK_CALL finishLoadedObjecthkpVehicleManager(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleManager(f);
}
