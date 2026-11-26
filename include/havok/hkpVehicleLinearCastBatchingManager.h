// hkpVehicleLinearCastBatchingManager
// (Physics/Vehicle/Manager/LinearCastBatchingManager/hkpVehicleLinearCastBatchingManager.h): batches the wheels'
// linear casts. Its vtable (??_7hkpVehicleLinearCastBatchingManager@@6B@, 11 slots, at 8214740C) is described in
// hkpVehicleCastBatchingManager.h; its own functions start at +0x20 (82DFF698) and are not declared. Members of its
// own, if any, are not identified.
#ifndef HAVOK_HKPVEHICLELINEARCASTBATCHINGMANAGER_H
#define HAVOK_HKPVEHICLELINEARCASTBATCHINGMANAGER_H

#include "havok/hkpVehicleCastBatchingManager.h"

class hkpVehicleLinearCastBatchingManager : public hkpVehicleCastBatchingManager {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleLinearCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleCastBatchingManager(flag) {}
};

#endif
