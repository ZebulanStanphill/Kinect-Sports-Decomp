// finishLoadedObjecthkpVehicleDefaultAerodynamics: the finish function in hkpVehicleDefaultAerodynamics's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultAerodynamics -> hkpVehicleAerodynamics -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleAerodynamics : public hkReferencedObject {
public:
    hkpVehicleAerodynamics(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultAerodynamics : public hkpVehicleAerodynamics {
public:
    hkpVehicleDefaultAerodynamics(hkFinishLoadedObjectFlag flag) : hkpVehicleAerodynamics(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDefaultAerodynamics(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultAerodynamics(f);
}
