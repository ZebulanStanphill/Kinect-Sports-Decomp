// hkpHingeConstraintData::hkpHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/Hinge/
// hkpHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (82D96EB0) is out of line.
#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkUFloat8.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkp2dAngConstraintAtom() : hkpConstraintAtom(TYPE_2D_ANG) {}
    hkUint8 m_freeRotationAxis;
};

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkpBallSocketConstraintAtom()
        : hkpConstraintAtom(TYPE_BALL_SOCKET), m_solvingMethod(0), m_velocityStabilizationFactor(1.0f),
          m_maxImpulse(3.40282e+38f)
    {
    }
    hkUint8 m_solvingMethod;                   // +0x2
    hkUFloat8 m_velocityStabilizationFactor;   // +0x3
    hkReal m_maxImpulse;                       // +0x4
};

class hkpHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms();
        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkp2dAngConstraintAtom m_2dAng;                     // +0x90
        hkpBallSocketConstraintAtom m_ballSocket;           // +0x94
    };
    hkpHingeConstraintData();
    Atoms m_atoms;   // +0x10
};

hkpHingeConstraintData::hkpHingeConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();
    m_atoms.m_2dAng.m_freeRotationAxis = 0;
}
