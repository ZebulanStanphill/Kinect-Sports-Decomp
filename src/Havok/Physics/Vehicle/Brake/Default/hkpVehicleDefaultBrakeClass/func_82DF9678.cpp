// finishLoadedObjecthkpVehicleDefaultBrake: the finish function in hkpVehicleDefaultBrake's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultBrake -> hkpVehicleBrake -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultBrake.h"

void HK_CALL finishLoadedObjecthkpVehicleDefaultBrake(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultBrake(f);
}
