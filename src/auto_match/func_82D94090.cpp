// hkpVelocityConstraintMotor::clone (Physics/Dynamics/Constraint/Motor/...): new with the implicit copy constructor.

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

// hkpVelocityConstraintMotor (Physics/Dynamics/Constraint/Motor/Velocity/hkpVelocityConstraintMotor.h).
class hkpVelocityConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpVelocityConstraintMotor();
    hkpVelocityConstraintMotor(hkReal velocityTarget, hkReal maxForce);
    virtual hkpConstraintMotor *clone() const;

    hkReal m_tau;                                     // +0x14
    hkReal m_velocityTarget;                          // +0x18
    hkBool m_useVelocityTargetFromConstraintTargets;  // +0x1C
};

hkpConstraintMotor *hkpVelocityConstraintMotor::clone() const
{
    hkpVelocityConstraintMotor *m = new hkpVelocityConstraintMotor(*this);
    return m;
}
