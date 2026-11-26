// hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/BallAndSocket/hkpBallAndSocketConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types and the ball-socket defaults, then the body zeroes both pivots.
// It keeps its fn_ name (func_82DBEF20, a clone function a C unit can match, calls it), so the constructor is
// inline and run by MSVC's explicit constructor call (placement new would add a null check).
// The 1.0f is a literal in the original (its load is scheduled above the base stores and copied to a temporary
// for hkUFloat8's const hkReal &).
#include "havok/hkBase.h"
#include "havok/hkpBallAndSocketConstraintData.h"

HK_FORCE_INLINE hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData()
{
    m_atoms.m_pivots.m_translationA.setZero4();
    m_atoms.m_pivots.m_translationB.setZero4();
}

extern "C" hkpBallAndSocketConstraintData *fn_82D96728(hkpBallAndSocketConstraintData *self)
{
    self->hkpBallAndSocketConstraintData::hkpBallAndSocketConstraintData();
    return self;
}
