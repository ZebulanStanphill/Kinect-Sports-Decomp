// hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput() (Physics/Vehicle/DriverInput/Default/hkpVehicleDefaultAnalogDriverInput.cpp).
#include "havok/hkBase.h"

class hkpVehicleDriverInput : public hkReferencedObject {
public:
    hkpVehicleDriverInput() {}
};

class hkpVehicleDefaultAnalogDriverInput : public hkpVehicleDriverInput {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultAnalogDriverInput();

    hkReal m_slopeChangePointX;   // +0x8
    hkReal m_initialSlope;        // +0xC
    hkReal m_deadZone;            // +0x10
    hkBool m_autoReverse;         // +0x14
};

hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput()
{
    m_slopeChangePointX = 0.0f;
    m_initialSlope = 0.0f;
    m_deadZone = 0.0f;
    m_autoReverse = false;
}
