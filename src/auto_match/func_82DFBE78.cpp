// hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission() (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.cpp).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"

#pragma intrinsic(__vxor)

class hkpVehicleTransmission : public hkReferencedObject {
public:
    hkpVehicleTransmission() {}
};

class hkpVehicleDefaultTransmission : public hkpVehicleTransmission {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultTransmission();

    hkReal m_downshiftRPM;               // +0x8
    hkReal m_upshiftRPM;                 // +0xC
    hkReal m_primaryTransmissionRatio;   // +0x10
    hkReal m_clutchDelayTime;            // +0x14
    hkReal m_reverseGearRatio;           // +0x18
    hkArray<hkReal> m_gearsRatio;        // +0x1C
    hkArray<hkReal> m_wheelsTorqueRatio; // +0x28
};

hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission()
{
    m_downshiftRPM = 0.0f;
    m_upshiftRPM = 0.0f;
    m_primaryTransmissionRatio = 0.0f;
    m_clutchDelayTime = 0.0f;
    m_reverseGearRatio = 0.0f;
}
