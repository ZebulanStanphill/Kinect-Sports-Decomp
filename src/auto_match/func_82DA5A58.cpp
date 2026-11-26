// hkpStiffSpringChainData::hkpStiffSpringChainData()
// (Physics/Dynamics/Constraint/Chain/StiffSpring/hkpStiffSpringChainData.cpp): the bases
// (hkpConstraintData's m_userData, the reference count), the bridge atom's type, the empty
// m_infos array, then the body sets tau, damping and cfm and initialises the bridge atom.
//
// The original uses literals, whose loads the compiler schedules above the base stores.
// 0.6f and 0.1f * HK_REAL_EPSILON have only non-Matching references and are renamed to their
// __real@ names; symbols.txt already names 1.0f __real@3f800000.
#include "havok/hkBase.h"
#include "havok/hkpStiffSpringChainData.h"

#define HK_REAL_EPSILON 1.192092896e-07f

hkpStiffSpringChainData::hkpStiffSpringChainData()
{
    m_tau = 0.6f;
    m_damping = 1.0f;
    m_cfm = 0.1f * HK_REAL_EPSILON;
    m_atoms.m_bridgeAtom.init(this);
}
