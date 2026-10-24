// hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics() (Physics/Vehicle/AeroDynamics/Default/hkpVehicleDefaultAerodynamics.cpp).
#include "havok/hkBase.h"

// VMX128 vector type and the intrinsic hkVector4::setZero4 uses (the XDK's vectorintrinsics.h is not
// available, so they are declared here; the compiler implements __vxor itself).
typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

typedef __vector4 hkQuadReal;

class __declspec(align(16)) hkVector4 {
public:
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    hkQuadReal m_quad;
};

class hkpVehicleAerodynamics : public hkReferencedObject {
public:
    hkpVehicleAerodynamics() {}
};

class hkpVehicleDefaultAerodynamics : public hkpVehicleAerodynamics {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultAerodynamics();

    hkReal m_airDensity;          // +0x8
    hkReal m_frontalArea;         // +0xC
    hkReal m_dragCoefficient;     // +0x10
    hkReal m_liftCoefficient;     // +0x14
    hkVector4 m_extraGravityws;   // +0x20
};

hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics()
{
    m_airDensity = 0.0f;
    m_frontalArea = 0.0f;
    m_dragCoefficient = 0.0f;
    m_liftCoefficient = 0.0f;
    m_extraGravityws.setZero4();
}
