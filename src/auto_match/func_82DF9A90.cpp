// finishLoadedObjecthkpVehicleDefaultTransmission: the finish function in hkpVehicleDefaultTransmission's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultTransmission -> hkpVehicleTransmission -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleTransmission : public hkReferencedObject {
public:
    hkpVehicleTransmission(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultTransmission : public hkpVehicleTransmission {
public:
    hkpVehicleDefaultTransmission(hkFinishLoadedObjectFlag flag) : hkpVehicleTransmission(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDefaultTransmission(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultTransmission(f);
}
