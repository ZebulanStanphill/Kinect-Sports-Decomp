// hkpBallSocketChainData::hkpBallSocketChainData(). The original used float literals.
#include "havok/hkBase.h"
#include "havok/hkpBallSocketChainData.h"

hkpBallSocketChainData::hkpBallSocketChainData()
    : m_tau(0.6f), m_damping(1.0f), m_cfm(1.1920929e-08f), m_maxErrorDistance(0.1f)
{
    m_atoms.m_bridgeAtom.init(this);
}
