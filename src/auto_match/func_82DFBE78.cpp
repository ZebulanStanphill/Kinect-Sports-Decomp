// hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission() (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.cpp).
#include "havok/hkpVehicleDefaultTransmission.h"

hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission()
{
    m_downshiftRPM = 0.0f;
    m_upshiftRPM = 0.0f;
    m_primaryTransmissionRatio = 0.0f;
    m_clutchDelayTime = 0.0f;
    m_reverseGearRatio = 0.0f;
}
