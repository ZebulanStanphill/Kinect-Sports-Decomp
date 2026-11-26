// hkpStiffSpringChainData::hkpStiffSpringChainData()
// (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.cpp): the bases
// (hkpConstraintData's m_userData, the reference count), the bridge atom's type, the empty
// m_infos array, then the body sets tau, damping and cfm and initialises the bridge atom.
//
// The original uses literals, whose loads the compiler schedules above the base stores.
// 0.6f and 0.1f * HK_REAL_EPSILON have only non-Matching references and are renamed to their
// __real@ names; symbols.txt already names 1.0f __real@3f800000.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpConstraintData.h"

#define HK_REAL_EPSILON 1.192092896e-07f

class hkpStiffSpringChainData : public hkpConstraintChainData {
public:
    hkpStiffSpringChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
        hkReal m_springLength;
        hkReal m_pad[3];
    };

    hkpBridgeAtoms m_atoms;          // +0xC
    hkArray<ConstraintInfo> m_infos; // +0x18
    hkReal m_tau;                    // +0x24
    hkReal m_damping;                // +0x28
    hkReal m_cfm;                    // +0x2C
};

hkpStiffSpringChainData::hkpStiffSpringChainData()
{
    m_tau = 0.6f;
    m_damping = 1.0f;
    m_cfm = 0.1f * HK_REAL_EPSILON;
    m_atoms.m_bridgeAtom.init(this);
}
