// hkpVehicleData::hkpVehicleData() (Physics/Vehicle/hkpVehicleData.cpp), /O2 /QVMXReserve: a leaf, so the
// zero vector used by hkMatrix3::setZero lives in the red zone. 0.1f and 30.0f are literals; the rename map
// names the game's copies __real@3dcccccd and __real@41f00000.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

// The game's 1.0f keeps its lbl_ name (Matching units reference it).
static const float lbl_82002AE0 = 1.0f;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    __vector4 m_quad;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE void setZero()
    {
        hkVector4 zero; zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
    }
    hkVector4 m_col0, m_col1, m_col2;
};
class hkRotation : public hkMatrix3 {};

struct hkpVehicleFrictionDescription {
    struct AxisDescription {
        hkReal m_frictionCircleYtab[16];
        hkReal m_xStep;
        hkReal m_xStart;
        hkReal m_wheelSurfaceInertia;
        hkReal m_wheelSurfaceInertiaInv;
        hkReal m_wheelChassisMassRatio;
        hkReal m_wheelRadius;
        hkReal m_wheelRadiusInv;
        hkReal m_wheelDownForceFactor;
        hkReal m_wheelDownForceSumFactor;
    };
    hkReal m_wheelDistance;
    hkReal m_chassisMassInv;
    AxisDescription m_axleDescr[2];
};

class hkpVehicleData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    struct WheelComponentParams {
        hkReal m_radius;
        hkReal m_mass;
        hkReal m_width;
        hkReal m_friction;
        hkReal m_viscosityFriction;
        hkReal m_maxFriction;
        hkReal m_slipAngle;
        hkReal m_forceFeedbackMultiplier;
        hkReal m_maxContactBodyAcceleration;
        hkInt8 m_axle;
    };
    hkpVehicleData();

    hkVector4 m_gravity;                                  // +0x10
    hkInt8 m_numWheels;                                   // +0x20
    hkRotation m_chassisOrientation;                      // +0x30
    hkReal m_torqueRollFactor;                            // +0x60
    hkReal m_torquePitchFactor;                           // +0x64
    hkReal m_torqueYawFactor;                             // +0x68
    hkReal m_extraTorqueFactor;                           // +0x6C
    hkReal m_maxVelocityForPositionalFriction;            // +0x70
    hkReal m_chassisUnitInertiaYaw;                       // +0x74
    hkReal m_chassisUnitInertiaRoll;                      // +0x78
    hkReal m_chassisUnitInertiaPitch;                     // +0x7C
    hkReal m_frictionEqualizer;                           // +0x80
    hkReal m_normalClippingAngleCos;                      // +0x84
    hkReal m_maxFrictionSolverMassRatio;                  // +0x88
    hkArray<WheelComponentParams> m_wheelParams;          // +0x8C
    hkArray<hkInt8> m_numWheelsPerAxle;                   // +0x98
    hkpVehicleFrictionDescription m_frictionDescription;  // +0xA4
    hkVector4 m_chassisFrictionInertiaInvDiag;            // +0x180
    hkBool m_alreadyInitialised;                          // +0x190
};

hkpVehicleData::hkpVehicleData()
{
    m_numWheels = 0;
    m_chassisOrientation.setZero();
    m_torqueRollFactor = 0.0f;
    m_torquePitchFactor = 0.0f;
    m_torqueYawFactor = lbl_82002AE0;
    m_extraTorqueFactor = 0.0f;
    m_maxVelocityForPositionalFriction = 10.0f;
    m_chassisUnitInertiaYaw = lbl_82002AE0;
    m_chassisUnitInertiaRoll = lbl_82002AE0;
    m_chassisUnitInertiaPitch = lbl_82002AE0;
    m_frictionEqualizer = 0.0f;
    m_normalClippingAngleCos = 0.1f;
    m_chassisFrictionInertiaInvDiag.setZero4();
    m_gravity.setZero4();
    m_alreadyInitialised = false;
    m_maxFrictionSolverMassRatio = 30.0f;
}
