// finishLoadedObjecthkpVehicleDefaultAerodynamics: the finish function in hkpVehicleDefaultAerodynamics's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultAerodynamics -> hkpVehicleAerodynamics -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultAerodynamics.h"

void HK_CALL finishLoadedObjecthkpVehicleDefaultAerodynamics(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultAerodynamics(f);
}
