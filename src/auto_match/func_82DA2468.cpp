// hkpRotationalConstraintData::hkpRotationalConstraintData() (Physics/Dynamics/Constraint/Bilateral/Rotational);
// keeps its fn_ name.
//
// Layout: hkpConstraintData (hkReferencedObject + hkUlong m_userData at +0x8), then the 16-byte aligned
// Atoms at +0x10: hkpSetLocalRotationsConstraintAtom (type 4; m_rotationA at +0x20, m_rotationB at
// +0x50) and hkpAngConstraintAtom at +0x80 (type 13, first constrained axis +0x82, count +0x83).
// hkMatrix3::setIdentity() zeroes the columns through an uninitialised local (lvx + vxor) and then
// writes 1.0f to the diagonal through hkVector4::operator().
//
// The original uses the literal 1.0f, whose load (one lfs for all six stores) the scheduler places
// freely; the game's copy of that constant is lbl_82002AE0, which Matching C units reference, so it
// cannot be renamed to __real@3f800000. A static const definition schedules like the literal; an
// extern or __declspec(selectany) one does not. Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" __vector4 __vxor(__vector4, __vector4);

static const hkReal lbl_82002AE0 = 1.0f;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE hkReal &operator()(int i) { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkMatrix3 {
public:
    HK_FORCE_INLINE void setIdentity()
    {
        hkVector4 zero;
        zero.setZero4();
        m_col0 = zero;
        m_col1 = zero;
        m_col2 = zero;
        m_col0(0) = lbl_82002AE0;
        m_col1(1) = lbl_82002AE0;
        m_col2(2) = lbl_82002AE0;
    }

    hkVector4 m_col0, m_col1, m_col2;
};

class hkRotation : public hkMatrix3 {
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_FORCE_INLINE hkpConstraintData() : m_userData(0) {}

    hkUlong m_userData;   // +0x8
};

class hkpConstraintAtom {
public:
    enum AtomType { TYPE_SET_LOCAL_ROTATIONS = 4, TYPE_ANG = 13 };
    HK_FORCE_INLINE hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}

    hkUint16 m_type;
};

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpSetLocalRotationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_ROTATIONS) {}

    hkRotation m_rotationA;   // +0x10
    hkRotation m_rotationB;   // +0x40
};

struct hkpAngConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpAngConstraintAtom() : hkpConstraintAtom(TYPE_ANG) {}

    hkUint8 m_firstConstrainedAxis;   // +0x2
    hkUint8 m_numConstrainedAxes;     // +0x3
};

class hkpRotationalConstraintData : public hkpConstraintData {
public:
    struct Atoms {
        hkpSetLocalRotationsConstraintAtom m_rotations;   // +0x0
        hkpAngConstraintAtom m_ang;                       // +0x70
    };

    HK_FORCE_INLINE hkpRotationalConstraintData()
    {
        m_atoms.m_rotations.m_rotationA.setIdentity();
        m_atoms.m_rotations.m_rotationB.setIdentity();
        m_atoms.m_ang.m_firstConstrainedAxis = 0;
        m_atoms.m_ang.m_numConstrainedAxes = 3;
    }

    Atoms m_atoms;   // +0x10
};

extern "C" hkpRotationalConstraintData *fn_82DA2468(hkpRotationalConstraintData *self)
{
    self->hkpRotationalConstraintData::hkpRotationalConstraintData();
    return self;
}
