// hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission() (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.cpp).
#include "havok/hkBase.h"

// VMX128 vector type and the intrinsic hkVector4::setZero4 uses (the XDK's vectorintrinsics.h is not
// available, so they are declared here; the compiler implements __vxor itself).
typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);
#pragma intrinsic(__vxor)

typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    hkQuadReal m_quad;
};

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
