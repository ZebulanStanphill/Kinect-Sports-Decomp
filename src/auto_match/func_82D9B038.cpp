// hkpBallSocketChainData::hkpBallSocketChainData(). The original used float literals.
#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
    struct ConstraintInfo { int v[8]; };
    hkpBallSocketChainData();
    hkpBridgeAtoms m_atoms;            // +0xc
    hkArray<ConstraintInfo> m_infos;   // +0x18
    hkReal m_tau;                      // +0x24
    hkReal m_damping;                  // +0x28
    hkReal m_cfm;                      // +0x2c
    hkReal m_maxErrorDistance;         // +0x30
};

hkpBallSocketChainData::hkpBallSocketChainData()
    : m_tau(0.6f), m_damping(1.0f), m_cfm(1.1920929e-08f), m_maxErrorDistance(0.1f)
{
    m_atoms.m_bridgeAtom.init(this);
}
