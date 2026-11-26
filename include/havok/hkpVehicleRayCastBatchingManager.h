// hkpVehicleRayCastBatchingManager
// (Physics/Vehicle/Manager/RayCastBatchingManager/hkpVehicleRayCastBatchingManager.h): batches the wheels'
// ray casts. Its vtable (??_7hkpVehicleRayCastBatchingManager@@6B@, 11 slots, at 821476C4) is described in
// hkpVehicleCastBatchingManager.h; its own functions start at +0x20 (82E01000) and are not declared. Members of its
// own, if any, are not identified.
#ifndef HAVOK_HKPVEHICLERAYCASTBATCHINGMANAGER_H
#define HAVOK_HKPVEHICLERAYCASTBATCHINGMANAGER_H

#include "havok/hkpVehicleCastBatchingManager.h"

class hkpVehicleRayCastBatchingManager : public hkpVehicleCastBatchingManager {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleRayCastBatchingManager(hkFinishLoadedObjectFlag flag) : hkpVehicleCastBatchingManager(flag) {}
};

#endif
