// finishLoadedObjecthkpVehicleDefaultVelocityDamper: the finish function in hkpVehicleDefaultVelocityDamper's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultVelocityDamper -> hkpVehicleVelocityDamper -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleVelocityDamper : public hkReferencedObject {
public:
    hkpVehicleVelocityDamper(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultVelocityDamper : public hkpVehicleVelocityDamper {
public:
    hkpVehicleDefaultVelocityDamper(hkFinishLoadedObjectFlag flag) : hkpVehicleVelocityDamper(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDefaultVelocityDamper(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultVelocityDamper(f);
}
