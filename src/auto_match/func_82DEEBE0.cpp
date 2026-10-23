// hkpPoweredChainMapper::~hkpPoweredChainMapper (Physics/Utilities/Constraint/Chain/hkpPoweredChainMapper.cpp):
// releases the links' limit constraints and the chains, then the m_chains, m_targets and m_links hkArrays are
// destroyed in reverse order. removeReference is called directly (fn_82CE4118, Havok's out-of-line
// hkReferencedObject::removeReference) rather than through the shared header's inline wrapper, and the links are
// indexed through begin(): the extra inline layers decide the operand order of the loops' add/lwzx (with the
// natural m_links[i] and the wrapper both are swapped).
#include "havok/hkBase.h"

class hkpConstraintInstance : public hkReferencedObject {};
class hkpConstraintChainInstance : public hkpConstraintInstance {};
class hkpPoweredChainData;

class hkpPoweredChainMapper : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    virtual ~hkpPoweredChainMapper();

    struct LinkInfo {
        int m_firstTargetIdx;
        int m_numTargets;
        hkpConstraintInstance *m_limitConstraint;
    };
    struct Target {
        hkpPoweredChainData *m_chain;
        int m_infoIndex;
    };

    hkArray<LinkInfo> m_links;                       // +0x8
    hkArray<Target> m_targets;                       // +0x14
    hkArray<hkpConstraintChainInstance *> m_chains;  // +0x20
};

hkpPoweredChainMapper::~hkpPoweredChainMapper()
{
    for (int i = 0; i < m_links.getSize(); i++) {
        if (m_links.begin()[i].m_limitConstraint)
            fn_82CE4118(m_links.begin()[i].m_limitConstraint);
    }
    for (int c = 0; c < m_chains.getSize(); c++)
        fn_82CE4118(m_chains[c]);
}
