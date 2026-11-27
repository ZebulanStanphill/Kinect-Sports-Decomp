// hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/BallAndSocket/hkpBallAndSocketConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types and the ball-socket defaults, then the body zeroes both pivots.
// The 1.0f is a literal in the original (its load is scheduled above the base stores and copied to a temporary
// for hkUFloat8's const hkReal &).
#include "havok/hkBase.h"
#include "havok/hkpBallAndSocketConstraintData.h"

hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData()
{
    m_atoms.m_pivots.m_translationA.setZero4();
    m_atoms.m_pivots.m_translationB.setZero4();
}
