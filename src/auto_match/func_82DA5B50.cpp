// hkpStiffSpringChainData::~hkpStiffSpringChainData (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.cpp): an empty user-written destructor, then m_infos' destructor.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintData.h"

class hkpStiffSpringChainData : public hkpConstraintChainData {
public:
    virtual ~hkpStiffSpringChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
        hkReal m_springLength;
        hkReal m_pad[3];
    };

    char m_atoms[0xC];               // +0xC  hkpBridgeAtoms
    hkArray<ConstraintInfo> m_infos; // +0x18
    hkReal m_tau;                    // +0x24
    hkReal m_damping;                // +0x28
    hkReal m_cfm;                    // +0x2C
};

hkpStiffSpringChainData::~hkpStiffSpringChainData()
{
}
