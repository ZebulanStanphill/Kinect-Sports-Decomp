// hkpWheelConstraintData::hkpWheelConstraintData() (Physics/Dynamics/Constraint/Bilateral/Wheel/
// hkpWheelConstraintData.cpp), /O2 /QVMXReserve. Layouts from the game's hkClass data.
// The padding byte loop (HK_CONSTRAINT_FILL_PADDING_WITH_ZERO, from &m_lin2 + 1 to &m_steeringBase,
// an empty range) is not folded when it runs in the constructor body through an Atoms reference;
// inside Atoms() it folds away. Because that loop comes first, the matrices' local zero vectors are
// read as undefined registers (`vxor v11,v11,v11`, no stack load): MSVC keeps an uninitialized local
// in its stack slot only when it is read in the entry block.
// The lin0Limit assignments must come before lin0Soft's (order of the constant loads).
// 1.0f is lbl_82002AE0 and 0.5f lbl_82002C5C (Matching units reference them): a static constant and a
// selectany definition (two statics would share one base register). -0.5f is renamed __real@bf000000.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

static const float lbl_82002AE0 = 1.0f;
extern "C" __declspec(selectany) const float lbl_82002C5C = 0.5f;

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

#define HK_CONSTRAINT_FILL_PADDING_WITH_ZERO(fromAfter, tillBefore) \
    { for (hkUint8 *p = (hkUint8 *)((&(fromAfter)) + 1); p < (hkUint8 *)(&(tillBefore)); p++) *p = 0; }

struct hkpConstraintAtom {
    enum AtomType {
        TYPE_SET_LOCAL_TRANSFORMS = 2,
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_LIN = 7,
        TYPE_LIN_SOFT = 8,
        TYPE_LIN_LIMIT = 9,
        TYPE_2D_ANG = 12
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;
    hkTransform m_transformB;
};

struct hkpLinLimitConstraintAtom : public hkpConstraintAtom {
    hkpLinLimitConstraintAtom() : hkpConstraintAtom(TYPE_LIN_LIMIT) {}
    hkUint8 m_axisIndex;
    hkReal m_min;
    hkReal m_max;
};

struct hkpLinSoftConstraintAtom : public hkpConstraintAtom {
    hkpLinSoftConstraintAtom() : hkpConstraintAtom(TYPE_LIN_SOFT) {}
    hkUint8 m_axisIndex;
    hkReal m_tau;
    hkReal m_damping;
};

struct hkpLinConstraintAtom : public hkpConstraintAtom {
    hkpLinConstraintAtom() : hkpConstraintAtom(TYPE_LIN) {}
    hkUint8 m_axisIndex;
};

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalRotationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_ROTATIONS) {}
    hkRotation m_rotationA;
    hkRotation m_rotationB;
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkp2dAngConstraintAtom() : hkpConstraintAtom(TYPE_2D_ANG) {}
    hkUint8 m_freeRotationAxis;
};

class hkpWheelConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms() {}
        hkpSetLocalTransformsConstraintAtom m_suspensionBase;   // +0x10
        hkpLinLimitConstraintAtom m_lin0Limit;                  // +0xA0
        hkpLinSoftConstraintAtom m_lin0Soft;                    // +0xAC
        hkpLinConstraintAtom m_lin1;                            // +0xB8
        hkpLinConstraintAtom m_lin2;                            // +0xBC
        hkpSetLocalRotationsConstraintAtom m_steeringBase;      // +0xC0
        hkp2dAngConstraintAtom m_2dAng;                         // +0x130
    };
    hkpWheelConstraintData();
    Atoms m_atoms;                        // +0x10
    hkVector4 m_initialAxleInB;           // +0x140
    hkVector4 m_initialSteeringAxisInB;   // +0x150
};

hkpWheelConstraintData::hkpWheelConstraintData()
{
    Atoms &atoms = m_atoms;
    HK_CONSTRAINT_FILL_PADDING_WITH_ZERO(atoms.m_lin2, atoms.m_steeringBase);
    m_atoms.m_lin0Limit.m_axisIndex = 0;
    m_atoms.m_lin0Limit.m_min = -0.5f;
    m_atoms.m_lin0Limit.m_max = lbl_82002C5C;
    m_atoms.m_lin0Soft.m_axisIndex = 0;
    m_atoms.m_lin0Soft.m_tau = 0.0f;
    m_atoms.m_lin0Soft.m_damping = 0.0f;
    m_atoms.m_lin1.m_axisIndex = 1;
    m_atoms.m_lin2.m_axisIndex = 2;

    m_atoms.m_steeringBase.m_rotationA.setIdentity();
    m_atoms.m_steeringBase.m_rotationB.setIdentity();
    m_atoms.m_suspensionBase.m_transformA.setIdentity();
    m_atoms.m_suspensionBase.m_transformB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;
}
