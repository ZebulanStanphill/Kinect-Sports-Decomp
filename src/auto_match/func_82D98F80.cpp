// hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/PointToPlane/hkpPointToPlaneConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types; the body sets both local transforms to identity and the
// constrained axis to 0. It keeps its fn_ name (func_82DBF2A0, a clone function a C unit can match, calls it),
// so the constructor is inline and run by MSVC's explicit constructor call.
// The 1.0f is a literal in the original (loaded once for all six diagonal stores).
#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

struct hkpLinConstraintAtom : public hkpConstraintAtom {
    hkpLinConstraintAtom() : hkpConstraintAtom(TYPE_LIN) {}
    hkUint8 m_axisIndex;   // +0x2
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
