// finishLoadedObjecthkpVehicleDefaultEngine: the finish function in hkpVehicleDefaultEngine's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultEngine -> hkpVehicleEngine -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultEngine.h"

void HK_CALL finishLoadedObjecthkpVehicleDefaultEngine(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultEngine(f);
}
