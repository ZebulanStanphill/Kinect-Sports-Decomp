// hkpBallSocketChainData::~hkpBallSocketChainData (Physics/Dynamics/Constraint/Chain/BallSocket/hkpBallSocketChainData.cpp): an empty user-written destructor, then m_infos' destructor.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintData.h"

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
    virtual ~hkpBallSocketChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
    };

    char m_atoms[0xC];               // +0xC  hkpBridgeAtoms
    hkArray<ConstraintInfo> m_infos; // +0x18
    hkReal m_tau;                    // +0x24
    hkReal m_damping;                // +0x28
    hkReal m_cfm;                    // +0x2C
    hkReal m_maxErrorDistance;       // +0x30
};

hkpBallSocketChainData::~hkpBallSocketChainData()
{
}
