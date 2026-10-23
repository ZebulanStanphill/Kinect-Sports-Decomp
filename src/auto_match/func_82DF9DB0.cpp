// hkpVehicleManager's scalar deleting destructor (Physics/Vehicle/Manager/hkpVehicleManager.h); identical code
// also serves hkpVehicleLinearCastBatchingManager and hkpVehicleRayCastBatchingManager (folded). It calls the
// destructor (fn_82DFF158, out of line) and frees through the class allocator. The finish constructor below
// only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkpVehicleInstance : public hkReferencedObject {
};

class hkpVehicleManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleManager(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_registeredVehicles(f) {}
    virtual ~hkpVehicleManager();

    hkArray<hkpVehicleInstance *> m_registeredVehicles;   // +0x8
};

void emitVtable_82DF9DB0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpVehicleManager(f); }
