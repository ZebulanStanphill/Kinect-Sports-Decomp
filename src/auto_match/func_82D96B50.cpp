// hkpHingeConstraintData::hkpHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/Hinge/
// hkpHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (fn_82D96EB0) is out of line
// and keeps its fn_ name.
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

struct hkpConstraintAtom {
    hkUint16 m_type;
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_freeRotationAxis;
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkUint8 m_solvingMethod;
    hkUint8 m_velocityStabilizationFactor;
    hkReal m_maxImpulse;
};

struct hkpHingeConstraintDataAtoms;
extern "C" void fn_82D96EB0(hkpHingeConstraintDataAtoms *self);   // hkpHingeConstraintData::Atoms::Atoms()

struct hkpHingeConstraintDataAtoms {
    HK_FORCE_INLINE hkpHingeConstraintDataAtoms() { fn_82D96EB0(this); }
    hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x10
    hkp2dAngConstraintAtom m_2dAng;                     // +0xA0
    hkpBallSocketConstraintAtom m_ballSocket;           // +0xA4
};

class hkpHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpHingeConstraintData();
    hkpHingeConstraintDataAtoms m_atoms;
};

hkpHingeConstraintData::hkpHingeConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();
    m_atoms.m_2dAng.m_freeRotationAxis = 0;
}
