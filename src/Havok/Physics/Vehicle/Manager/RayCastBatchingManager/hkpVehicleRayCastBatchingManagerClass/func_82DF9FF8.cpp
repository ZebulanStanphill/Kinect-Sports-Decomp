// getVtablehkpVehicleRayCastBatchingManager, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpVehicleRayCastBatchingManager (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpVehicleRayCastBatchingManager -> hkpVehicleCastBatchingManager -> hkpVehicleManager -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleManager : public hkReferencedObject {
public:
    hkpVehicleManager(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleCastBatchingManager : public hkpVehicleManager {
public:
    hkpVehicleCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleManager(flag) {}
};

class hkpVehicleRayCastBatchingManager : public hkpVehicleCastBatchingManager {
public:
    hkpVehicleRayCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleCastBatchingManager(flag) {}
};

const void *HK_CALL getVtablehkpVehicleRayCastBatchingManager()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleRayCastBatchingManager)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleRayCastBatchingManager(f);
    return u.ptr;
}
