// hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput() (Physics/Vehicle/DriverInput/Default/hkpVehicleDefaultAnalogDriverInput.cpp).
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput()
{
    m_slopeChangePointX = 0.0f;
    m_initialSlope = 0.0f;
    m_deadZone = 0.0f;
    m_autoReverse = false;
}
