// getVtablehkpVehicleManager, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleManager (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleManager -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleManager.h"

const void *HK_CALL getVtablehkpVehicleManager()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleManager)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleManager(f);
    return u.ptr;
}
