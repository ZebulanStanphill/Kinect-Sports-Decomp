// getVtablehkpVehicleDefaultSteering, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultSteering (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultSteering -> hkpVehicleSteering -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleSteering : public hkReferencedObject {
public:
    hkpVehicleSteering(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultSteering : public hkpVehicleSteering {
public:
    hkpVehicleDefaultSteering(hkFinishLoadedObjectFlag flag) : hkpVehicleSteering(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultSteering()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultSteering)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultSteering(f);
    return u.ptr;
}
