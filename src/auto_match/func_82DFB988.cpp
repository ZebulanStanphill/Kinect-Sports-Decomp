// hkpVehicleDefaultSteering::hkpVehicleDefaultSteering() (Physics/Vehicle/Steering/Default/hkpVehicleDefaultSteering.cpp).
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

class hkpVehicleSteering : public hkReferencedObject {
public:
    hkpVehicleSteering() {}
};

class hkpVehicleDefaultSteering : public hkpVehicleSteering {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultSteering();

    hkReal m_maxSteeringAngle;             // +0x8
    hkReal m_maxSpeedFullSteeringAngle;    // +0xC
    hkArray<hkBool> m_doesWheelSteer;      // +0x10
};

hkpVehicleDefaultSteering::hkpVehicleDefaultSteering()
{
    m_maxSteeringAngle = 0.0f;
    m_maxSpeedFullSteeringAngle = 0.0f;
}
