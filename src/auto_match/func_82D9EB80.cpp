// hkpHingeLimitsData::hkpHingeLimitsData() (Physics/Dynamics/Constraint/Bilateral/Hinge/hkpHingeLimitsData.cpp),
// /O2 /QVMXReserve. -pi and pi are literals; the rename map names the game's copies __real@c0490fdb and
// __real@40490fdb (as for hkpLimitedHingeConstraintData, func_82D93C00).
// The constructor keeps its fn_ name (func_82DBF380, which news and copies the data, is otherwise C-matchable):
// it is forced inline and run on the object by an explicit constructor call, which adds no null check.
#include "havok/hkBase.h"
#include "havok/hkRotation.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

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
