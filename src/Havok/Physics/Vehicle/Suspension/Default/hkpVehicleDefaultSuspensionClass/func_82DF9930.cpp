// finishLoadedObjecthkpVehicleDefaultSuspension: the finish function in hkpVehicleDefaultSuspension's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultSuspension -> hkpVehicleSuspension -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultSuspension.h"

void HK_CALL finishLoadedObjecthkpVehicleDefaultSuspension(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultSuspension(f);
}
