// getVtablehkpVehicleDefaultVelocityDamper, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultVelocityDamper (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultVelocityDamper -> hkpVehicleVelocityDamper -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleVelocityDamper : public hkReferencedObject {
public:
    hkpVehicleVelocityDamper(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultVelocityDamper : public hkpVehicleVelocityDamper {
public:
    hkpVehicleDefaultVelocityDamper(hkFinishLoadedObjectFlag flag) : hkpVehicleVelocityDamper(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultVelocityDamper()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultVelocityDamper)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultVelocityDamper(f);
    return u.ptr;
}
