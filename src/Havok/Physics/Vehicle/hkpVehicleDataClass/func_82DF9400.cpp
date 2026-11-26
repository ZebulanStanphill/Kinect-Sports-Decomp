// finishLoadedObjecthkpVehicleData: the finish function in hkpVehicleData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleData -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleData.h"

void HK_CALL finishLoadedObjecthkpVehicleData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleData(f);
}
