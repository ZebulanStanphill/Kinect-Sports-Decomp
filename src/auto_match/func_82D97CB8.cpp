// hkpRagdollConstraintData::hkpRagdollConstraintData() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/
// hkpRagdollConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (82D98100) is out of line.
// The float constants are literals; the rename map names the game's copies __real@... (symbols.txt already
// names 1.0f __real@3f800000).
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

struct hkpRagdollMotorConstraintAtom : public hkpConstraintAtom {
    hkpRagdollMotorConstraintAtom()
        : hkpConstraintAtom(TYPE_RAGDOLL_MOTOR), m_isEnabled(true), m_initializedOffset(0),
          m_previousTargetAnglesOffset(0)
    {
    }
    hkBool m_isEnabled;                   // +0x2
    hkInt16 m_initializedOffset;          // +0x4
    hkInt16 m_previousTargetAnglesOffset; // +0x6
    hkMatrix3 m_target_bRca;              // +0x10
    hkpConstraintMotor *m_motors[3];      // +0x40
};

struct hkpAngFrictionConstraintAtom : public hkpConstraintAtom {
    hkpAngFrictionConstraintAtom() : hkpConstraintAtom(TYPE_ANG_FRICTION), m_isEnabled(1), m_numFrictionAxes(1) {}
    hkUint8 m_isEnabled;
    hkUint8 m_firstFrictionAxis;
    hkUint8 m_numFrictionAxes;
    hkReal m_maxFrictionTorque;
};

struct hkpTwistLimitConstraintAtom : public hkpConstraintAtom {
    hkpTwistLimitConstraintAtom() : hkpConstraintAtom(TYPE_TWIST_LIMIT), m_isEnabled(1) {}
    hkUint8 m_isEnabled;
    hkUint8 m_twistAxis;
    hkUint8 m_refAxis;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
};

struct hkpConeLimitConstraintAtom : public hkpConstraintAtom {
    enum MeasurementMode {
        ZERO_WHEN_VECTORS_ALIGNED = 0,
        ZERO_WHEN_VECTORS_PERPENDICULAR = 1
    };
    hkpConeLimitConstraintAtom() : hkpConstraintAtom(TYPE_CONE_LIMIT), m_isEnabled(1), m_memOffsetToAngleOffset(0) {}
    hkUint8 m_isEnabled;
    hkUint8 m_twistAxisInA;
    hkUint8 m_refAxisInB;
    hkUint8 m_angleMeasurementMode;
    hkUint8 m_memOffsetToAngleOffset;
    hkReal m_minAngle;
    hkReal m_maxAngle;
    hkReal m_angularLimitsTauFactor;
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

class hkpRagdollConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms();
        hkpSetLocalTransformsConstraintAtom m_transforms;   // +0x0
        hkpRagdollMotorConstraintAtom m_ragdollMotors;      // +0x90
        hkpAngFrictionConstraintAtom m_angFriction;         // +0xE0
        hkpTwistLimitConstraintAtom m_twistLimit;           // +0xEC
        hkpConeLimitConstraintAtom m_coneLimit;             // +0x100
        hkpConeLimitConstraintAtom m_planesLimit;           // +0x114
        hkpBallSocketConstraintAtom m_ballSocket;           // +0x128
    };
    hkpRagdollConstraintData();
    Atoms m_atoms;   // +0x10
};

hkpRagdollConstraintData::hkpRagdollConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_angFriction.m_firstFrictionAxis = 0;
    m_atoms.m_angFriction.m_numFrictionAxes = 3;
    m_atoms.m_angFriction.m_maxFrictionTorque = 0.0f;

    m_atoms.m_ragdollMotors.m_isEnabled = false;
    m_atoms.m_ragdollMotors.m_initializedOffset = 0x60;
    m_atoms.m_ragdollMotors.m_previousTargetAnglesOffset = 0x64;
    m_atoms.m_ragdollMotors.m_target_bRca.setIdentity();
    m_atoms.m_ragdollMotors.m_motors[0] = HK_NULL;
    m_atoms.m_ragdollMotors.m_motors[1] = HK_NULL;
    m_atoms.m_ragdollMotors.m_motors[2] = HK_NULL;

    m_atoms.m_twistLimit.m_twistAxis = 0;
    m_atoms.m_twistLimit.m_refAxis = 1;
    m_atoms.m_twistLimit.m_minAngle = -0.5236f;
    m_atoms.m_twistLimit.m_maxAngle = 0.5236f;
    m_atoms.m_twistLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_coneLimit.m_twistAxisInA = 0;
    m_atoms.m_coneLimit.m_refAxisInB = 0;
    m_atoms.m_coneLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_ALIGNED;
    m_atoms.m_coneLimit.m_memOffsetToAngleOffset = 0x38;
    m_atoms.m_coneLimit.m_minAngle = -100.0f;
    m_atoms.m_coneLimit.m_maxAngle = 1.0f;
    m_atoms.m_coneLimit.m_angularLimitsTauFactor = 0.8f;

    m_atoms.m_planesLimit.m_twistAxisInA = 0;
    m_atoms.m_planesLimit.m_refAxisInB = 1;
    m_atoms.m_planesLimit.m_angleMeasurementMode = hkpConeLimitConstraintAtom::ZERO_WHEN_VECTORS_PERPENDICULAR;
    m_atoms.m_planesLimit.m_minAngle = -0.025f;
    m_atoms.m_planesLimit.m_maxAngle = 0.025f;
    m_atoms.m_planesLimit.m_angularLimitsTauFactor = 0.8f;
}
