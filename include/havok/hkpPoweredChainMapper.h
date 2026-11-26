// hkpPoweredChainMapper (Physics/Utilities/Constraint/Chain/hkpPoweredChainMapper.h), 0x2C bytes: maps the
// constraints (links) of a ragdoll-like system to entries of the powered chains built from them, so that a link's
// motors can be set on every chain that holds it.
//
// Layout from the destructor (??1hkpPoweredChainMapper@@UAA@XZ, 82DEEBE0: it releases each link's limit constraint
// and each chain, then destroys m_chains, m_targets and m_links) and from buildChainMapper (fn_82DEDF08, a static
// member that creates the mapper with the inline default constructor and fills the three arrays). The reflection
// names the nested classes hkpPoweredChainMapperLinkInfo and hkpPoweredChainMapperTarget; the member names are
// Havok's. The vtable (??_7hkpPoweredChainMapper@@6B@, 3 slots) is hkReferencedObject's with the deleting
// destructor (82DE4AA0). The finish constructor is inline (its hkTypeInfo functions, 82DE4A78 and 82DE4A90).
//
// hkpPoweredChainMapperTmpTarget (buildChainMapper's local struct, Havok's .cpp) is not declared here.
#ifndef HAVOK_HKPPOWEREDCHAINMAPPER_H
#define HAVOK_HKPPOWEREDCHAINMAPPER_H

#include "havok/hkBase.h"

class hkpEntity;
class hkpConstraintInstance;
class hkpConstraintChainInstance;
class hkpPoweredChainData;

class hkpPoweredChainMapper : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    HK_FORCE_INLINE hkpPoweredChainMapper() {}
    HK_FORCE_INLINE hkpPoweredChainMapper(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_links(flag), m_targets(flag), m_chains(flag)
    {
    }
    virtual ~hkpPoweredChainMapper();   // 82DEEBE0

    // buildChainMapper's settings, passed by value.
    struct Config {
        hkBool m_createLimitConstraints;   // +0x0
        hkBool m_cloneMotors;              // +0x1
    };

    // A pair of entities between which buildChainMapper builds one chain.
    struct ChainEndpoints {
        hkpEntity *m_start;   // +0x0
        hkpEntity *m_end;     // +0x4
    };

    // One per constraint: where its targets start in m_targets, how many there are, and the limit constraint
    // made for it (buildChainMapper constructs them with these defaults).
    struct LinkInfo {
        HK_FORCE_INLINE LinkInfo() : m_firstTargetIdx(-1), m_numTargets(0), m_limitConstraint(HK_NULL) {}
        int m_firstTargetIdx;                       // +0x0
        int m_numTargets;                           // +0x4
        hkpConstraintInstance *m_limitConstraint;   // +0x8
    };

    // A chain and the index of the link's entry in it.
    struct Target {
        hkpPoweredChainData *m_chain;   // +0x0
        int m_infoIndex;                // +0x4
    };

    hkArray<LinkInfo> m_links;                        // +0x8
    hkArray<Target> m_targets;                        // +0x14
    hkArray<hkpConstraintChainInstance *> m_chains;   // +0x20
};

#endif
