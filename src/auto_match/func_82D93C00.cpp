// hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/
// LimitedHinge/hkpLimitedHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (fn_82D93FE8)
// is out of line and keeps its fn_ name.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

// The game's 1.0f keeps its lbl_ name (Matching units reference it); -pi and pi are literals, and the
// rename map names the game's copies __real@c0490fdb and __real@40490fdb.
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

struct hkpAngMotorConstraintAtom : public hkpConstraintAtom {
    hkBool m_isEnabled;                                // +0x2
    hkUint8 m_motorAxis;                               // +0x3
    hkInt16 m_initializedOffset;                       // +0x4
    hkInt16 m_previousTargetAngleOffset;               // +0x6
    hkInt16 m_correspondingAngLimitSolverResultOffset; // +0x8
    hkReal m_targetAngle;                              // +0xC
    hkpConstraintMotor *m_motor;                       // +0x10
};

struct hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_isEnabled;
    hkUint8 m_firstFrictionAxis;
    hkUint8 m_numFrictionAxes;
    hkReal m_maxFrictionTorque;
};

struct hkpAngLimitConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_isEnabled;
    hkUint8 m_limitAxis;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_freeRotationAxis;
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_solvingMethod;
    hkUint8 m_velocityStabilizationFactor;
    hkReal m_maxImpulse;
};

struct hkpLimitedHingeConstraintDataAtoms;
extern "C" void fn_82D93FE8(hkpLimitedHingeConstraintDataAtoms *self);   // hkpLimitedHingeConstraintData::Atoms::Atoms()

struct hkpLimitedHingeConstraintDataAtoms {
    HK_FORCE_INLINE hkpLimitedHingeConstraintDataAtoms() { fn_82D93FE8(this); }
    hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x10
    hkpAngMotorConstraintAtom m_angMotor;               // +0xA0
    hkpAngFrictionConstraintAtom m_angFriction;         // +0xB4
    hkpAngLimitConstraintAtom m_angLimit;               // +0xC0
    hkp2dAngConstraintAtom m_2dAng;                     // +0xD0
    hkpBallSocketConstraintAtom m_ballSocket;           // +0xD4
};

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpLimitedHingeConstraintData();
    hkpLimitedHingeConstraintDataAtoms m_atoms;
};

hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;

    m_atoms.m_angLimit.m_limitAxis = 0;
    m_atoms.m_angLimit.m_minAngle = -3.14159265358979f;
    m_atoms.m_angLimit.m_maxAngle = 3.14159265358979f;
    m_atoms.m_angLimit.m_angularLimitsTauFactor = 1.0f;

    m_atoms.m_angFriction.m_firstFrictionAxis = 0;
    m_atoms.m_angFriction.m_numFrictionAxes = 1;
    m_atoms.m_angFriction.m_maxFrictionTorque = 0.0f;

    m_atoms.m_angMotor.m_initializedOffset = 0x40;
    m_atoms.m_angMotor.m_previousTargetAngleOffset = 0x44;
    m_atoms.m_angMotor.m_correspondingAngLimitSolverResultOffset = 0x10;
    m_atoms.m_angMotor.m_isEnabled = false;
    m_atoms.m_angMotor.m_targetAngle = 0.0f;
    m_atoms.m_angMotor.m_motor = HK_NULL;
    m_atoms.m_angMotor.m_motorAxis = 0;
}
