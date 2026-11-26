// Collision agent factory (keeps its fn_ name), Physics/Collide/Agent/...: with a contact manager, asks the
// convex list filter which case applies and creates a hkpSymmetricAgent<hkpConvexListAgent> (0x90 bytes),
// a hkpShapeCollectionAgent (0x38) or a hkpPredGskfAgent (0x80); without one, a hkpShapeCollectionAgent.
// The agents use Havok's class allocator (blockAlloc + m_memSizeAndFlags, no null check). The base
// constructors are out of line: hkpGskfAgent's, hkpConvexListAgent's (82D5C050) and
// hkpShapeCollectionAgent's.
#include "havok/hkBase.h"
#include "havok/hkpShapeCollectionAgent.h"
#include "havok/hkpConvexListAgent.h"
#include "havok/hkpSymmetricAgent.h"

#define AGENT_ALLOCATOR \
    static HK_FORCE_INLINE void *operator new(unsigned n) \
    { \
        hkReferencedObject *b = (hkReferencedObject *)hkMemoryRouter::getInstance().heap().blockAlloc(n); \
        b->m_memSizeAndFlags = n; \
        return b; \
    }

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
