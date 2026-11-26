// getVtablehkpVehicleDefaultTransmission, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultTransmission (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultTransmission -> hkpVehicleTransmission -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultTransmission.h"

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
