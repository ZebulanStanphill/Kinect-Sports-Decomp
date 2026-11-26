// getVtablehkpVehicleLinearCastBatchingManager, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleLinearCastBatchingManager (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleLinearCastBatchingManager -> hkpVehicleCastBatchingManager -> hkpVehicleManager -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpVehicleLinearCastBatchingManager.h"

const void *HK_CALL getVtablehkpVehicleLinearCastBatchingManager()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleLinearCastBatchingManager)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleLinearCastBatchingManager(f);
    return u.ptr;
}
