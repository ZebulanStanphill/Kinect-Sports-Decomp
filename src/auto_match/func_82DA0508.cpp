// hkpPointToPathConstraintData::hkpPointToPathConstraintData() (Physics/Dynamics/Constraint/Bilateral/
// PointToPath/hkpPointToPathConstraintData.cpp), /O2 /QVMXReserve. hkpBridgeConstraintAtom::init
// (fn_82D9FE70) is out of line and keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkpPointToPathConstraintData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

hkpPointToPathConstraintData::hkpPointToPathConstraintData()
    : m_path(HK_NULL),
      m_maxFrictionForce(0.0f),
      m_angularConstrainedDOF(OrientationConstraintType(CONSTRAIN_ORIENTATION_NONE))
{
    m_transform_OS_KS[0].setIdentity();
    m_transform_OS_KS[1].setIdentity();
    m_atoms.m_bridgeAtom.init(this);
}
