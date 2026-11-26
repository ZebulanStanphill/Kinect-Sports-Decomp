// hkpPoweredChainData::hkpPoweredChainData()
// (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp), /O2: the bases (hkpConstraintData's
// m_userData, the reference count), the bridge atom's type, the empty m_infos array, then the body sets tau,
// damping, the cfm terms and the maximum error distance and initialises the bridge atom.
//
// The original uses literals, whose loads the compiler schedules above the base stores. 0.6f,
// 0.1f * HK_REAL_EPSILON and 0.1f have only non-Matching references and are renamed to their __real@ names;
// symbols.txt already names 1.0f __real@3f800000.
#include "havok/hkBase.h"
#include "havok/hkpPoweredChainData.h"

#define HK_REAL_EPSILON 1.192092896e-07f

hkpPoweredChainData::hkpPoweredChainData()
{
    m_tau = 0.6f;
    m_damping = 1.0f;

    m_cfmLinAdd = 0.1f * HK_REAL_EPSILON;
    m_cfmLinMul = 1.0f;
    m_cfmAngAdd = 0.1f * HK_REAL_EPSILON;
    m_cfmAngMul = 1.0f;

    m_maxErrorDistance = 0.1f;

    m_atoms.m_bridgeAtom.init(this);
}
