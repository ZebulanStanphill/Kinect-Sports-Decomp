// hkpHingeLimitsData::hkpHingeLimitsData() (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeLimitsData.cpp),
// /O2 /QVMXReserve. -pi and pi are literals; the rename map names the game's copies __real@c0490fdb and
// __real@40490fdb (as for hkpLimitedHingeConstraintData, func_82D93C00).
// The constructor keeps its fn_ name (func_82DBF380, which news and copies the data, is otherwise C-matchable):
// it is forced inline and run on the object by an explicit constructor call, which adds no null check.
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

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

struct hkpConstraintAtom {
    enum AtomType {
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_2D_ANG = 12,
        TYPE_ANG_LIMIT = 14
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;
};

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalRotationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_ROTATIONS) {}
    hkRotation m_rotationA;
    hkRotation m_rotationB;
};

struct hkpAngLimitConstraintAtom : public hkpConstraintAtom {
    hkpAngLimitConstraintAtom() : hkpConstraintAtom(TYPE_ANG_LIMIT) { m_isEnabled = true; }
    hkUint8 m_isEnabled;
    hkUint8 m_limitAxis;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkp2dAngConstraintAtom() : hkpConstraintAtom(TYPE_2D_ANG) {}
    hkUint8 m_freeRotationAxis;
};

class hkpHingeLimitsData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms() {}
        hkpSetLocalRotationsConstraintAtom m_rotations;   // +0x10
        hkpAngLimitConstraintAtom m_angLimit;             // +0x80
        hkp2dAngConstraintAtom m_2dAng;                   // +0x90
    };
    HK_FORCE_INLINE hkpHingeLimitsData();
    Atoms m_atoms;
};

HK_FORCE_INLINE hkpHingeLimitsData::hkpHingeLimitsData()
{
    m_atoms.m_rotations.m_rotationA.setIdentity();
    m_atoms.m_rotations.m_rotationB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;

    m_atoms.m_angLimit.m_limitAxis = 0;
    m_atoms.m_angLimit.m_minAngle = -3.14159265358979f;
    m_atoms.m_angLimit.m_maxAngle = 3.14159265358979f;
    m_atoms.m_angLimit.m_angularLimitsTauFactor = 1.0f;
}

extern "C" hkpHingeLimitsData *fn_82D9EB80(hkpHingeLimitsData *self)
{
    self->hkpHingeLimitsData::hkpHingeLimitsData();
    return self;
}
