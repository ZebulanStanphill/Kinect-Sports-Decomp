// finishLoadedObjecthkpVehicleDefaultTransmission: the finish function in hkpVehicleDefaultTransmission's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultTransmission -> hkpVehicleTransmission -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultTransmission.h"

void HK_CALL finishLoadedObjecthkpVehicleDefaultTransmission(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultTransmission(f);
}
