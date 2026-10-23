// getVtablehkpVehicleDefaultSuspension, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultSuspension (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultSuspension -> hkpVehicleSuspension -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleSuspension : public hkReferencedObject {
public:
    hkpVehicleSuspension(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleDefaultSuspension : public hkpVehicleSuspension {
public:
    hkpVehicleDefaultSuspension(hkFinishLoadedObjectFlag flag) : hkpVehicleSuspension(flag) {}
};

const void *HK_CALL getVtablehkpVehicleDefaultSuspension()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultSuspension)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultSuspension(f);
    return u.ptr;
}
