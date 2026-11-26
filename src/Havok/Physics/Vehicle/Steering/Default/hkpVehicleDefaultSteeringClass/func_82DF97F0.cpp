// finishLoadedObjecthkpVehicleDefaultSteering: the finish function in hkpVehicleDefaultSteering's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultSteering -> hkpVehicleSteering -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultSteering.h"

void HK_CALL finishLoadedObjecthkpVehicleDefaultSteering(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultSteering(f);
}
