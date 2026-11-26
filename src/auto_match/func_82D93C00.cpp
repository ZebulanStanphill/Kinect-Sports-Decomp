// hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/
// LimitedHinge/hkpLimitedHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (82D93FE8)
// is out of line.
// -pi and pi are literals, and the rename map names the game's copies __real@c0490fdb and __real@40490fdb.
#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkUFloat8.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpConstraintMotor;

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

struct hkpAngMotorConstraintAtom : public hkpConstraintAtom {
    hkpAngMotorConstraintAtom()
        : hkpConstraintAtom(TYPE_ANG_MOTOR), m_isEnabled(true), m_initializedOffset(0),
          m_previousTargetAngleOffset(0)
    {
    }
    hkBool m_isEnabled;                                // +0x2
    hkUint8 m_motorAxis;                               // +0x3
    hkInt16 m_initializedOffset;                       // +0x4
    hkInt16 m_previousTargetAngleOffset;               // +0x6
    hkInt16 m_correspondingAngLimitSolverResultOffset; // +0x8
    hkReal m_targetAngle;                              // +0xC
    hkpConstraintMotor *m_motor;                       // +0x10
};

struct hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    hkpAngFrictionConstraintAtom() : hkpConstraintAtom(TYPE_ANG_FRICTION), m_isEnabled(1), m_numFrictionAxes(1) {}
    hkUint8 m_isEnabled;
    hkUint8 m_firstFrictionAxis;
    hkUint8 m_numFrictionAxes;
    hkReal m_maxFrictionTorque;
};

struct hkpAngLimitConstraintAtom : public hkpConstraintAtom {
    hkpAngLimitConstraintAtom() : hkpConstraintAtom(TYPE_ANG_LIMIT), m_isEnabled(1) {}
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

class hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms();
        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkpAngMotorConstraintAtom m_angMotor;               // +0x90
        hkpAngFrictionConstraintAtom m_angFriction;         // +0xA4
        hkpAngLimitConstraintAtom m_angLimit;               // +0xB0
        hkp2dAngConstraintAtom m_2dAng;                     // +0xC0
        hkpBallSocketConstraintAtom m_ballSocket;           // +0xC4
    };
    hkpLimitedHingeConstraintData();
    Atoms m_atoms;   // +0x10
};

hkpLimitedHingeConstraintData::hkpLimitedHingeConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;

    m_atoms.m_angLimit.m_limitAxis = 0;
    m_atoms.m_angLimit.m_minAngle = -3.14159265358979f;
    m_atoms.m_angLimit.m_maxAngle = 3.14159265358979f;
    m_atoms.m_angLimit.m_angularLimitsTauFactor = 1.0f;

    m_atoms.m_angFriction.m_firstFrictionAxis = 0;
    m_atoms.m_angFriction.m_numFrictionAxes = 1;
    m_atoms.m_angFriction.m_maxFrictionTorque = 0.0f;

    m_atoms.m_angMotor.m_initializedOffset = 0x40;
    m_atoms.m_angMotor.m_previousTargetAngleOffset = 0x44;
    m_atoms.m_angMotor.m_correspondingAngLimitSolverResultOffset = 0x10;
    m_atoms.m_angMotor.m_isEnabled = false;
    m_atoms.m_angMotor.m_targetAngle = 0.0f;
    m_atoms.m_angMotor.m_motor = HK_NULL;
    m_atoms.m_angMotor.m_motorAxis = 0;
}
