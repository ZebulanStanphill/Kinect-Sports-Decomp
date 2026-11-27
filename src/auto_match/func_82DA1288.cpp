// hkpPoweredChainData::hkpPoweredChainData(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp). The bridge atom's finish constructor
// re-inits it with its stored pointer, then the class points it at itself.
#include "havok/hkBase.h"
#include "havok/hkpPoweredChainData.h"

hkpPoweredChainData::hkpPoweredChainData(hkFinishLoadedObjectFlag f) : hkpConstraintChainData(f), m_atoms(f), m_infos(f)
{
    if (f.m_finishing)
        m_atoms.m_bridgeAtom.init(this);
}
