// hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/PointToPlane/hkpPointToPlaneConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types; the body sets both local transforms to identity and the
// constrained axis to 0. It keeps its fn_ name (func_82DBF2A0, a clone function a C unit can match, calls it),
// so the constructor is inline and run by MSVC's explicit constructor call.
// The 1.0f is a literal in the original (loaded once for all six diagonal stores); the game's copy is
// lbl_82002AE0, which Matching units reference, so it is a static constant with that name.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);

static const float lbl_82002AE0 = 1.0f;   // the game's 1.0f (Matching units reference it)

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE void setZero()
    {
        hkVector4 zero;
        zero.setZero4();
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
    hkRotation m_rotation;     // +0x0
    hkVector4 m_translation;   // +0x30
};

// hkpConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h).
struct hkpConstraintAtom {
    enum AtomType {
        TYPE_INVALID = 0,
        TYPE_BRIDGE = 1,
        TYPE_SET_LOCAL_TRANSFORMS = 2,
        TYPE_SET_LOCAL_TRANSLATIONS = 3,
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_BALL_SOCKET = 5,
        TYPE_STIFF_SPRING = 6,
        TYPE_LIN = 7
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;   // +0x0  hkEnum<AtomType, hkUint16>
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

struct hkpLinConstraintAtom : public hkpConstraintAtom {
    hkpLinConstraintAtom() : hkpConstraintAtom(TYPE_LIN) {}
    hkUint8 m_axisIndex;   // +0x2
};

// hkpConstraintData (Physics/Dynamics/Constraint/hkpConstraintData.h): hkReferencedObject + m_userData.
class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    virtual void setMaxLinearImpulse(hkReal maxImpulse);   // +0xC
    hkUlong m_userData;   // +0x8
};

class hkpPointToPlaneConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    HK_FORCE_INLINE hkpPointToPlaneConstraintData()
    {
        m_atoms.m_transforms.m_transformA.setIdentity();
        m_atoms.m_transforms.m_transformB.setIdentity();
        m_atoms.m_lin.m_axisIndex = 0;
    }
    virtual void setMaxLinearImpulse(hkReal maxImpulse);

    struct Atoms {
        Atoms() {}
        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x10
        hkpLinConstraintAtom m_lin;                         // +0xA0
    };
    Atoms m_atoms;   // +0x10
};

extern "C" hkpPointToPlaneConstraintData *fn_82D98F80(hkpPointToPlaneConstraintData *self)
{
    self->hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData();
    return self;
}
