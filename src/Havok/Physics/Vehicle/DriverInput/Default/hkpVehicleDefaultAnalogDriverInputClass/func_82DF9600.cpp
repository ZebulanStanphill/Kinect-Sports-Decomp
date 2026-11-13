// getVtablehkpVehicleDriverInputAnalogStatus, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDriverInputAnalogStatus (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDriverInputAnalogStatus -> hkpVehicleDriverInputStatus -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleDriverInputStatus : public hkReferencedObject {
public:
    hkpVehicleDriverInputStatus(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDriverInputAnalogStatus : public hkpVehicleDriverInputStatus {
public:
    hkpVehicleDriverInputAnalogStatus(hkFinishLoadedObjectFlag flag) : hkpVehicleDriverInputStatus(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDriverInputAnalogStatus()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDriverInputAnalogStatus)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDriverInputAnalogStatus(f);
    return u.ptr;
}
