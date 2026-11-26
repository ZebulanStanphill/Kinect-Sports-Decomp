// hkpPoweredChainMapper::~hkpPoweredChainMapper (Physics/Utilities/Constraint/Chain/hkpPoweredChainMapper.cpp):
// releases the links' limit constraints and the chains, then the m_chains, m_targets and m_links hkArrays are
// destroyed in reverse order. removeReference is called directly (fn_82CE4118, Havok's out-of-line
// hkReferencedObject::removeReference) rather than through the shared header's inline wrapper, and the links are
// indexed through begin(): the extra inline layers decide the operand order of the loops' add/lwzx (with the
// natural m_links[i] and the wrapper both are swapped).
#include "havok/hkBase.h"
#include "havok/hkpConstraintChainInstance.h"
#include "havok/hkpPoweredChainMapper.h"

hkpPoweredChainMapper::~hkpPoweredChainMapper()
{
    for (int i = 0; i < m_links.getSize(); i++) {
        if (m_links.begin()[i].m_limitConstraint)
            fn_82CE4118(m_links.begin()[i].m_limitConstraint);
    }
    for (int c = 0; c < m_chains.getSize(); c++)
        fn_82CE4118(m_chains[c]);
}
