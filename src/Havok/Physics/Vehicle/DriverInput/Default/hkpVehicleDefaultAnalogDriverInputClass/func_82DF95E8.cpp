// finishLoadedObjecthkpVehicleDriverInputAnalogStatus: the finish function in hkpVehicleDriverInputAnalogStatus's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDriverInputAnalogStatus -> hkpVehicleDriverInputStatus -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

void HK_CALL finishLoadedObjecthkpVehicleDriverInputAnalogStatus(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDriverInputAnalogStatus(f);
}
