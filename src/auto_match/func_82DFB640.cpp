// hkpVehicleDefaultBrake::hkpVehicleDefaultBrake() (Physics/Vehicle/Brake/Default/hkpVehicleDefaultBrake.cpp).
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
    hkpVehicleDefaultBrake();

    hkArray<WheelBrakingProperties> m_wheelBrakingProperties;   // +0x8
    hkReal m_wheelsMinTimeToBlock;                              // +0x14
};

hkpVehicleDefaultBrake::hkpVehicleDefaultBrake()
{
    m_wheelsMinTimeToBlock = 0.0f;
}
