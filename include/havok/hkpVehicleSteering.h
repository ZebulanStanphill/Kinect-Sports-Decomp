// hkpVehicleSteering (Physics/Vehicle/Steering/hkpVehicleSteering.h): the steering component's interface.
// 0x8 bytes. No vtable of its own in the game (it is abstract; only its RTTI, ??_R3hkpVehicleSteering@@8);
// the destructor is the implicit one.
#ifndef HAVOK_HKPVEHICLESTEERING_H
#define HAVOK_HKPVEHICLESTEERING_H

#include "havok/hkpVehicleDriverInput.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: calcSteering (+0xC; hkpVehicleDefaultSteering's is 82DFB8F0).
class hkpVehicleSteering : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // What calcSteering fills: the main steering angle at +0x0, then the wheels' angles (82DFB8F0 writes
    // through the pointer at +0x4). Not declared further here.
    struct SteeringAnglesOutput;
    hkpVehicleSteering() {}
    hkpVehicleSteering(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void calcSteering(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                              const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                              SteeringAnglesOutput &steeringOutput) = 0;   // +0xC
};

#endif
