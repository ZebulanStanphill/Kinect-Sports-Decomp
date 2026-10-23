// finishLoadedObjecthkpVehicleDriverInputAnalogStatus: the finish function in hkpVehicleDriverInputAnalogStatus's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDriverInputAnalogStatus -> hkpVehicleDriverInputStatus -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleDriverInputStatus : public hkReferencedObject {
public:
    hkpVehicleDriverInputStatus(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDriverInputAnalogStatus : public hkpVehicleDriverInputStatus {
public:
    hkpVehicleDriverInputAnalogStatus(hkFinishLoadedObjectFlag flag) : hkpVehicleDriverInputStatus(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDriverInputAnalogStatus(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDriverInputAnalogStatus(f);
}
