// hkpVehicleDefaultBrake's scalar deleting destructor
// (Physics/Vehicle/Brake/Default/hkpVehicleDefaultBrake.h): it calls the implicit destructor
// (??1, fn_82DF96A0, emitted out of line) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
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

void emitVtable_82DF9710(void *p) { new (p) hkpVehicleDefaultBrake; }
