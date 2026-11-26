// finishLoadedObjecthkpVehicleRayCastBatchingManager: the finish function in hkpVehicleRayCastBatchingManager's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleRayCastBatchingManager -> hkpVehicleCastBatchingManager -> hkpVehicleManager -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleRayCastBatchingManager.h"

void HK_CALL finishLoadedObjecthkpVehicleRayCastBatchingManager(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleRayCastBatchingManager(f);
}
