// hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering, the implicit destructor
// (Physics/Vehicle/Steering/Default/hkpVehicleDefaultSteering.h), emitted out of line and called by the deleting
// destructor (fn_82DF9888). It destroys m_doesWheelSteer (+0x10).
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
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

void emitVtable_82DF9818(void *p) { new (p) hkpVehicleDefaultSteering; }
