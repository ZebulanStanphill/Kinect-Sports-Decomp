// hkpBallSocketChainData::hkpBallSocketChainData(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Constraint/Chain/BallSocket/hkpBallSocketChainData.cpp). The bridge atom's finish constructor
// re-inits it with its stored pointer, then the class points it at itself.
#include "havok/hkBase.h"
#include "havok/hkpBallSocketChainData.h"

hkpBallSocketChainData::hkpBallSocketChainData(hkFinishLoadedObjectFlag f) : hkpConstraintChainData(f), m_atoms(f), m_infos(f)
{
    if (f.m_finishing)
        m_atoms.m_bridgeAtom.init(this);
}
