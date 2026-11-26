// hkpPredGskfAgent (Physics/Collide/Agent/ConvexAgent/Gjk/hkpPredGskfAgent.h), 0x80 bytes: an hkpGskfAgent
// (RTTI) with predictive (continuous) processCollision; it adds no members (82D6A0E8 and the convex list agent
// factories allocate 0x80). hkpConvexListAgent derives from it.
// The constructor has no symbol: every unit that creates one (82D6A0E8, 82D5C050, 82D5C608, 82D5CD78, 82D5CF10)
// inlines it, which only calls hkpGskfAgent's (out of line) and stores the vtable.
// Its vtable (??_7hkpPredGskfAgent@@6B@) is hkpGskfAgent's but for +0x18 processCollision (82D6A208).
#ifndef HAVOK_HKPPREDGSKFAGENT_H
#define HAVOK_HKPPREDGSKFAGENT_H

#include "havok/hkpGskfAgent.h"

class hkpPredGskfAgent : public hkpGskfAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpPredGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr)
        : hkpGskfAgent(bodyA, bodyB, mgr) {}
};

#endif
