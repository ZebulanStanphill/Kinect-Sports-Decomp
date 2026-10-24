// hkpRagdollConstraintData::hkpRagdollConstraintData() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/
// hkpRagdollConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (fn_82D98100) is out of line
// and keeps its fn_ name. The float constants are literals; the rename map names the game's copies
// __real@... (1.0f is lbl_82002AE0, which Matching units reference, so it stays a static constant with
// that name).
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
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
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
    HK_FORCE_INLINE void setIdentity()
    {
        setZero();
        m_col0(0) = lbl_82002AE0;
        m_col1(1) = lbl_82002AE0;
        m_col2(2) = lbl_82002AE0;
    }
    hkVector4 m_col0, m_col1, m_col2;
};
class hkRotation : public hkMatrix3 {};

class hkTransform {
public:
    HK_FORCE_INLINE void setIdentity()
    {
        m_rotation.setIdentity();
        m_translation.setZero4();
    }
    hkRotation m_rotation;
    hkVector4 m_translation;
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class hkpConstraintMotor;

struct hkpConstraintAtom {
    hkUint16 m_type;
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

struct hkpRagdollMotorConstraintAtom : public hkpConstraintAtom {
    hkBool m_isEnabled;                   // +0x2
    hkInt16 m_initializedOffset;          // +0x4
    hkInt16 m_previousTargetAnglesOffset; // +0x6
    hkMatrix3 m_target_bRca;              // +0x10
    hkpConstraintMotor *m_motors[3];      // +0x40
};

struct hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_isEnabled;
    hkUint8 m_firstFrictionAxis;
    hkUint8 m_numFrictionAxes;
    hkReal m_maxFrictionTorque;
};

struct hkpTwistLimitConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_isEnabled;
    hkUint8 m_twistAxis;
    hkUint8 m_refAxis;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

struct hkpConeLimitConstraintAtom : public hkpConstraintAtom {
    enum MeasurementMode {
        ZERO_WHEN_VECTORS_ALIGNED = 0,
        ZERO_WHEN_VECTORS_PERPENDICULAR = 1
    };
    hkUint8 m_isEnabled;
    hkUint8 m_twistAxisInA;
    hkUint8 m_refAxisInB;
    hkUint8 m_angleMeasurementMode;
    hkUint8 m_memOffsetToAngleOffset;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_solvingMethod;
    hkUint8 m_velocityStabilizationFactor;
    hkReal m_maxImpulse;
};

class hkpRagdollConstraintData;
struct hkpRagdollConstraintDataAtoms;
extern "C" void fn_82D98100(hkpRagdollConstraintDataAtoms *self);   // hkpRagdollConstraintData::Atoms::Atoms()

struct hkpRagdollConstraintDataAtoms {
    HK_FORCE_INLINE hkpRagdollConstraintDataAtoms() { fn_82D98100(this); }
    hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x10
    hkpRagdollMotorConstraintAtom m_ragdollMotors;      // +0xA0
    hkpAngFrictionConstraintAtom m_angFriction;         // +0xF0
    hkpTwistLimitConstraintAtom m_twistLimit;           // +0xFC
    hkpConeLimitConstraintAtom m_coneLimit;             // +0x110
    hkpConeLimitConstraintAtom m_planesLimit;           // +0x124
    hkpBallSocketConstraintAtom m_ballSocket;           // +0x138
};

class hkpRagdollConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpRagdollConstraintData();
    hkpRagdollConstraintDataAtoms m_atoms;
};

hkpRagdollConstraintData::hkpRagdollConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_angFriction.m_firstFrictionAxis = 0;
    m_atoms.m_angFriction.m_numFrictionAxes = 3;
    m_atoms.m_angFriction.m_maxFrictionTorque = 0.0f;

    m_atoms.m_ragdollMotors.m_isEnabled = false;
    m_atoms.m_ragdollMotors.m_initializedOffset = 0x60;
    m_atoms.m_ragdollMotors.m_previousTargetAnglesOffset = 0x64;
    m_atoms.m_ragdollMotors.m_target_bRca.setIdentity();
    m_atoms.m_ragdollMotors.m_motors[0] = HK_NULL;
    m_atoms.m_ragdollMotors.m_motors[1] = HK_NULL;
    m_atoms.m_ragdollMotors.m_motors[2] = HK_NULL;

    m_atoms.m_twistLimit.m_twistAxis = 0;
    m_atoms.m_twistLimit.m_refAxis = 1;
    m_atoms.m_twistLimit.m_minAngle = -0.5236f;
    m_atoms.m_twistLimit.m_maxAngle = 0.5236f;
    m_atoms.m_twistLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_coneLimit.m_twistAxisInA = 0;
    m_atoms.m_coneLimit.m_refAxisInB = 0;
    m_atoms.m_coneLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_ALIGNED;
    m_atoms.m_coneLimit.m_memOffsetToAngleOffset = 0x38;
    m_atoms.m_coneLimit.m_minAngle = -100.0f;
    m_atoms.m_coneLimit.m_maxAngle = 1.0f;
    m_atoms.m_coneLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_planesLimit.m_twistAxisInA = 0;
    m_atoms.m_planesLimit.m_refAxisInB = 1;
    m_atoms.m_planesLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_PERPENDICULAR;
    m_atoms.m_planesLimit.m_minAngle = -0.025f;
    m_atoms.m_planesLimit.m_maxAngle = 0.025f;
    m_atoms.m_planesLimit.m_angularLimitsTauFactor = 0.8f;
}
