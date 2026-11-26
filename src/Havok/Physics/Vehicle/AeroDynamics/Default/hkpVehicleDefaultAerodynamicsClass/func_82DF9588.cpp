// getVtablehkpVehicleDefaultAerodynamics, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleDefaultAerodynamics (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleDefaultAerodynamics -> hkpVehicleAerodynamics -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleDefaultAerodynamics.h"

const void *HK_CALL getVtablehkpVehicleDefaultAerodynamics()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleDefaultAerodynamics)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleDefaultAerodynamics(f);
    return u.ptr;
}
