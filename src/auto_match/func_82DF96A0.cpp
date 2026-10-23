// hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake, the implicit destructor
// (Physics/Vehicle/Brake/Default/hkpVehicleDefaultBrake.h), emitted out of line and called by the deleting
// destructor (fn_82DF9710). It destroys m_wheelBrakingProperties (+0x8, 12-byte elements).
// The constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkBase.h"

class hkpVehicleBrake : public hkReferencedObject {
public:
    hkpVehicleBrake() {}
};

class hkpVehicleDefaultBrake : public hkpVehicleBrake {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    struct WheelBrakingProperties {
        hkReal m_maxBreakingTorque;
        hkReal m_minPedalInputToBlock;
        hkBool m_isConnectedToHandbrake;
    };
    hkpVehicleDefaultBrake() {}

    hkArray<WheelBrakingProperties> m_wheelBrakingProperties;   // +0x8
    hkReal m_wheelsMinTimeToBlock;                              // +0x14
};

void emitVtable_82DF96A0(void *p) { new (p) hkpVehicleDefaultBrake; }
