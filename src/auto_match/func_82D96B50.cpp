// hkpHingeConstraintData::hkpHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/Hinge/
// hkpHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (fn_82D96EB0) is out of line
// and keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkpConstraintData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

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
