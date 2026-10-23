// hkpVehicleDefaultSteering's scalar deleting destructor
// (Physics/Vehicle/Steering/Default/hkpVehicleDefaultSteering.h): it calls the implicit destructor
// (??1, fn_82DF9818, emitted out of line) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkpVehicleSteering : public hkReferencedObject {
public:
    hkpVehicleSteering() {}
};

class hkpVehicleDefaultSteering : public hkpVehicleSteering {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultSteering() {}

    hkReal m_maxSteeringAngle;             // +0x8
    hkReal m_maxSpeedFullSteeringAngle;    // +0xC
    hkArray<hkBool> m_doesWheelSteer;      // +0x10
};

void emitVtable_82DF9888(void *p) { new (p) hkpVehicleDefaultSteering; }
