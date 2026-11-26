// hkpPositionConstraintMotor::clone (Physics/Dynamics/Constraint/Motor/...): new with the implicit copy constructor.

#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"

// The game's float constants (the linker merged the compiler's __real@ literals into these).
extern "C" const float lbl_8214186C;   // -1e6f
extern "C" const float lbl_82057560;   // 1e6f

// hkpPositionConstraintMotor (Physics/Dynamics/Constraint/Motor/Position/hkpPositionConstraintMotor.h).
class hkpPositionConstraintMotor : public hkpLimitedForceConstraintMotor {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpPositionConstraintMotor(hkReal currentPosition = 0.0f);
    virtual hkpConstraintMotor *clone() const;

    hkReal m_tau;                            // +0x14
    hkReal m_damping;                        // +0x18
    hkReal m_proportionalRecoveryVelocity;   // +0x1C
    hkReal m_constantRecoveryVelocity;       // +0x20
};

hkpConstraintMotor *hkpPositionConstraintMotor::clone() const
{
    hkpPositionConstraintMotor *m = new hkpPositionConstraintMotor(*this);
    return m;
}
