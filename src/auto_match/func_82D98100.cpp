// hkpRagdollConstraintData::Atoms::Atoms() (Physics/Dynamics/Constraint/Bilateral/Ragdoll/
// hkpRagdollConstraintData.h), out of line in the game: the atoms' constructors set their types and
// default fields; the ball socket's velocity stabilization factor goes through hkUFloat8::operator= (out of
// line). hkpRagdollConstraintData::hkpRagdollConstraintData() (82D97CB8) calls it.
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

hkpRagdollConstraintData::Atoms::Atoms()
{
}
