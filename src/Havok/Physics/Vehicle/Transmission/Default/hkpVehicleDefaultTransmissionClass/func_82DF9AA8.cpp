// getVtablehkpVehicleDefaultTransmission, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultTransmission (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultTransmission -> hkpVehicleTransmission -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleTransmission : public hkReferencedObject {
public:
    hkpVehicleTransmission(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultTransmission : public hkpVehicleTransmission {
public:
    hkpVehicleDefaultTransmission(hkFinishLoadedObjectFlag flag) : hkpVehicleTransmission(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultTransmission()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultTransmission)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultTransmission(f);
    return u.ptr;
}
