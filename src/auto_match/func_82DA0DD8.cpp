// hkpPositionConstraintMotor::hkpPositionConstraintMotor(hkReal) (hkpPositionConstraintMotor.cpp), /O2.
// The constants are literals: 1e6f/-1e6f are configured as __real@49742400/__real@c9742400, and the rename map
// names the game's copies of 0.8f and 2.0f (lbl_820579A8, lbl_82005344) __real@3f4ccccd/__real@40000000.
// symbols.txt already names 1.0f __real@3f800000.

#include "havok/hkBase.h"
#include "havok/hkpPositionConstraintMotor.h"

// The game's 1.0f (see above).

hkpPositionConstraintMotor::hkpPositionConstraintMotor(hkReal currentPosition)
{
    m_type = TYPE_POSITION;
    setMaxForce(1e6f);
    m_tau = 0.8f;
    m_damping = 1.0f;
    m_constantRecoveryVelocity = 1.0f;
    m_proportionalRecoveryVelocity = 2.0f;
}
