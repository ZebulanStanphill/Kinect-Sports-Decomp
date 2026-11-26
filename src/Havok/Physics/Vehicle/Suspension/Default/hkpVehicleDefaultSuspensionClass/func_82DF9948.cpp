// getVtablehkpVehicleDefaultSuspension, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultSuspension (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultSuspension -> hkpVehicleSuspension -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultSuspension.h"

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
