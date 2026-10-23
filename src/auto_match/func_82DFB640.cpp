// hkpVehicleDefaultBrake::hkpVehicleDefaultBrake() (Physics/Vehicle/Brake/Default/hkpVehicleDefaultBrake.cpp).
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
