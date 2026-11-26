// hkpVehicleBrake (Physics/Vehicle/Brake/hkpVehicleBrake.h): the brake component's interface.
// 0x8 bytes. No vtable of its own in the game (it is abstract; only its RTTI, ??_R3hkpVehicleBrake@@8); the
// destructor is the implicit one.
#ifndef HAVOK_HKPVEHICLEBRAKE_H
#define HAVOK_HKPVEHICLEBRAKE_H

#include "havok/hkpVehicleDriverInput.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: calcBreakingInfo (+0xC; hkpVehicleDefaultBrake's is
// 82DFB4A0, which reads the filtered input's m_brakePedalInput and m_handbrakeOn). The name and the spelling
// "Breaking" follow Havok's header.
class hkpVehicleBrake : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // What calcBreakingInfo fills (per-wheel braking torques and blocked flags); not declared further here.
    struct WheelBreakingOutput;
    hkpVehicleBrake() {}
    hkpVehicleBrake(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void calcBreakingInfo(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                                  WheelBreakingOutput &breakingInfo) = 0;   // +0xC
};

#endif
