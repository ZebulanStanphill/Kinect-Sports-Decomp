// Collision agent factory (keeps its fn_ name), Physics/Collide/Agent/...: with a contact manager, asks the
// convex list filter which case applies and creates a hkpSymmetricAgent<hkpConvexListAgent> (0x90 bytes),
// a hkpShapeCollectionAgent (0x38) or a hkpPredGskfAgent (0x80); without one, a hkpShapeCollectionAgent.
// The agents use Havok's class allocator (blockAlloc + m_memSizeAndFlags, no null check). The base
// constructors are out of line: hkpGskfAgent's (renamed), hkpConvexListAgent's (fn_82D5C050, keeps its
// fn_ name) and hkpShapeCollectionAgent's (renamed).
#include "havok/hkBase.h"
#include "havok/hkpCollisionInput.h"

class hkpContactMgr;

extern "C" {
void fn_82D5C050(void *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpContactMgr *mgr);   // hkpConvexListAgent::hkpConvexListAgent
}

#define AGENT_ALLOCATOR \
    static HK_FORCE_INLINE void *operator new(unsigned n) \
    { \
        hkReferencedObject *b = (hkReferencedObject *)hkMemoryRouter::getInstance().heap().blockAlloc(n); \
        b->m_memSizeAndFlags = n; \
        return b; \
    }

class __declspec(novtable) hkpGskfAgent {
public:
    AGENT_ALLOCATOR
    hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);
    virtual ~hkpGskfAgent() {}

    unsigned short m_memSizeAndFlags;
    unsigned short m_referenceCount;
    char m_data[0x78];
};

class hkpPredGskfAgent : public hkpGskfAgent {
public:
    hkpPredGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr) : hkpGskfAgent(bodyA, bodyB, mgr) {}
};

class __declspec(novtable) hkpConvexListAgent {
public:
    AGENT_ALLOCATOR
    hkpConvexListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
    {
        fn_82D5C050(this, bodyA, bodyB, input, mgr);
    }
    virtual ~hkpConvexListAgent() {}

    unsigned short m_memSizeAndFlags;
    unsigned short m_referenceCount;
    char m_data[0x88];
};

template <class AGENT>
class hkpSymmetricAgent : public AGENT {
public:
    hkpSymmetricAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : AGENT(bodyB, bodyA, input, mgr)
    {
    }
};

class hkpShapeCollectionAgent : public hkReferencedObject {
public:
    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    char m_data[0x30];
};

extern "C" void *fn_82D5C608(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    if (mgr) {
        switch (input.m_convexListFilter->getConvexListCollisionType(bodyA, bodyB, input)) {
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_NORMAL:
            return new hkpSymmetricAgent<hkpConvexListAgent>(bodyA, bodyB, input, mgr);
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_LIST:
            return new hkpShapeCollectionAgent(bodyA, bodyB, input, mgr);
        case hkpConvexListFilter::TREAT_CONVEX_LIST_AS_CONVEX:
            return new hkpPredGskfAgent(bodyA, bodyB, mgr);
        default:
            return 0;
        }
    }
    return new hkpShapeCollectionAgent(bodyA, bodyB, input, 0);
}
