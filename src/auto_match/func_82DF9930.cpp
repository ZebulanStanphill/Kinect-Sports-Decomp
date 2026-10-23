// finishLoadedObjecthkpVehicleDefaultSuspension: the finish function in hkpVehicleDefaultSuspension's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleDefaultSuspension -> hkpVehicleSuspension -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleSuspension : public hkReferencedObject {
public:
    hkpVehicleSuspension(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultSuspension : public hkpVehicleSuspension {
public:
    hkpVehicleDefaultSuspension(hkFinishLoadedObjectFlag flag) : hkpVehicleSuspension(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleDefaultSuspension(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleDefaultSuspension(f);
}
