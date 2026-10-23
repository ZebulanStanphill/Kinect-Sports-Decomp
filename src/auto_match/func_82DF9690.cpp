// getVtablehkpVehicleDefaultBrake, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultBrake (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultBrake -> hkpVehicleBrake -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleBrake : public hkReferencedObject {
public:
    hkpVehicleBrake(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultBrake : public hkpVehicleBrake {
public:
    hkpVehicleDefaultBrake(hkFinishLoadedObjectFlag flag) : hkpVehicleBrake(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultBrake()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultBrake)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultBrake(f);
    return u.ptr;
}
