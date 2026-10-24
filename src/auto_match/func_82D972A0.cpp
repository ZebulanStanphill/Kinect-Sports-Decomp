// hkpPrismaticConstraintData::hkpPrismaticConstraintData() (Physics/Dynamics/Constraint/Bilateral/Prismatic/
// hkpPrismaticConstraintData.cpp), /O2 /QVMXReserve. It keeps its fn_ name: its three callers
// (func_8260A120, func_82DBF0E0, func_82DBF6D8) use no other C++ and could match as C.
// The atoms' constructors are inlined (each stores its type; motor and friction start enabled).
// HK_REAL_MAX and -HK_REAL_MAX were literals in Havok; they are defined here (selectany) with their
// configured lbl_ names so that the compiler may schedule their loads like constants (an extern
// declaration keeps the HK_REAL_MAX load after the stores).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

// The game's 1.0f keeps its lbl_ name (Matching units reference it).
static const float lbl_82002AE0 = 1.0f;
extern "C" __declspec(selectany) const float lbl_82134504 = -3.40282e+38f;
extern "C" __declspec(selectany) const float lbl_82134508 = 3.40282e+38f;

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

struct hkpConstraintAtom {
    enum AtomType { TYPE_SET_LOCAL_TRANSFORMS = 2, TYPE_LIN = 7, TYPE_LIN_LIMIT = 9, TYPE_LIN_FRICTION = 10, TYPE_LIN_MOTOR = 11, TYPE_ANG = 13 };
    HK_FORCE_INLINE hkpConstraintAtom(AtomType type) : m_type(type) {}
    hkUint16 m_type;
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

class hkpConstraintMotor;
struct hkpLinMotorConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpLinMotorConstraintAtom() : hkpConstraintAtom(TYPE_LIN_MOTOR), m_isEnabled(true), m_initializedOffset(0), m_previousTargetPositionOffset(0) {}
    hkBool m_isEnabled;
    hkUint8 m_motorAxis;
    hkInt16 m_initializedOffset;
    hkInt16 m_previousTargetPositionOffset;
    hkReal m_targetPosition;
    hkpConstraintMotor *m_motor;
};

struct hkpLinFrictionConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpLinFrictionConstraintAtom() : hkpConstraintAtom(TYPE_LIN_FRICTION), m_isEnabled(true) {}
    hkUint8 m_isEnabled;
    hkUint8 m_frictionAxis;
    hkReal m_maxFrictionForce;
};

struct hkpAngConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpAngConstraintAtom() : hkpConstraintAtom(TYPE_ANG) {}
    hkUint8 m_firstConstrainedAxis;
    hkUint8 m_numConstrainedAxes;
};

struct hkpLinConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpLinConstraintAtom() : hkpConstraintAtom(TYPE_LIN) {}
    hkUint8 m_axisIndex;
};

struct hkpLinLimitConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpLinLimitConstraintAtom() : hkpConstraintAtom(TYPE_LIN_LIMIT) {}
    hkUint8 m_axisIndex;
    hkReal m_min;
    hkReal m_max;
};

class hkpPrismaticConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    HK_FORCE_INLINE hkpPrismaticConstraintData();

    struct Atoms {
        HK_FORCE_INLINE Atoms() {}
        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x10
        hkpLinMotorConstraintAtom m_motor;                  // +0xa0
        hkpLinFrictionConstraintAtom m_friction;            // +0xb0
        hkpAngConstraintAtom m_ang;                         // +0xb8
        hkpLinConstraintAtom m_lin0;                        // +0xbc
        hkpLinConstraintAtom m_lin1;                        // +0xc0
        hkpLinLimitConstraintAtom m_linLimit;               // +0xc4
    };
    Atoms m_atoms;
};

HK_FORCE_INLINE hkpPrismaticConstraintData::hkpPrismaticConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_linLimit.m_axisIndex = 0;
    m_atoms.m_friction.m_frictionAxis = 0;
    m_atoms.m_linLimit.m_min = lbl_82134504;
    m_atoms.m_linLimit.m_max = lbl_82134508;
    m_atoms.m_friction.m_maxFrictionForce = 0.0f;
    m_atoms.m_motor.m_isEnabled = false;
    m_atoms.m_motor.m_targetPosition = 0.0f;
    m_atoms.m_motor.m_motor = HK_NULL;
    m_atoms.m_motor.m_motorAxis = 0;
    m_atoms.m_motor.m_initializedOffset = 0x40;
    m_atoms.m_motor.m_previousTargetPositionOffset = 0x44;
    m_atoms.m_ang.m_firstConstrainedAxis = 0;
    m_atoms.m_ang.m_numConstrainedAxes = 3;
    m_atoms.m_lin0.m_axisIndex = 1;
    m_atoms.m_lin1.m_axisIndex = 2;
}

extern "C" hkpPrismaticConstraintData *fn_82D972A0(hkpPrismaticConstraintData *self)
{
    self->hkpPrismaticConstraintData::hkpPrismaticConstraintData();
    return self;
}
