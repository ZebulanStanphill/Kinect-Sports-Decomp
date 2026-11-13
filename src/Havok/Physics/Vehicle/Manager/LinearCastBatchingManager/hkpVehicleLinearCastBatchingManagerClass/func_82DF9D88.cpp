// finishLoadedObjecthkpVehicleLinearCastBatchingManager: the finish function in hkpVehicleLinearCastBatchingManager's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpVehicleLinearCastBatchingManager -> hkpVehicleCastBatchingManager -> hkpVehicleManager -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpVehicleManager : public hkReferencedObject {
public:
    hkpVehicleManager(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpVehicleCastBatchingManager : public hkpVehicleManager {
public:
    hkpVehicleCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleManager(flag) {}
};

class hkpVehicleLinearCastBatchingManager : public hkpVehicleCastBatchingManager {
public:
    hkpVehicleLinearCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleCastBatchingManager(flag) {}
};

void HK_CALL finishLoadedObjecthkpVehicleLinearCastBatchingManager(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleLinearCastBatchingManager(f);
}
