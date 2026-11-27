// hkpGskBaseAgent (Physics/Collide/Agent/ConvexAgent/Gjk/hkpGskBaseAgent.h), 0x30 bytes: the GSK agent for two
// convex shapes without a manifold, an hkpIterativeLinearCastAgent (RTTI; hkpGskfAgent derives from it).
// The layout is the constructor's (82D74A90): the GSK cache at +0xC (hkpGskCache::initTriangle or init, by the
// type of shape B), the separating normal at +0x20 with -1.0f in w and in its time at +0x18, and the smaller
// allowed penetration depth of the two root collidables at +0x1C. invalidateTim (82D74A38) and warpTime
// (82D74A58) write the normal and its time. The member names follow Havok's header.
// The constructor is out of line (??0hkpGskBaseAgent, 82D74A90); the creation functions of hkpGskfAgent
// (82D75830) and hkpPredGskfAgent (82D6A0E8) call it for an agent without a contact manager (allocated 0x30).
// Its vtable (??_7hkpGskBaseAgent@@6B@): +0x0 the trivial deleting destructor (folded with hkpShape's), +0xC
// getPenetrations 82D74C28, +0x10 getClosestPoints 82D75598, +0x14 hkpIterativeLinearCastAgent's linearCast
// 82D75CB0, +0x18 processCollision 82D74A10 (empty), +0x1C cleanup 82D74A18 (deletes the agent), then the empty
// function (+0x20), invalidateTim 82D74A38 (+0x24), warpTime 82D74A58 (+0x28) and hkpCollisionAgent's defaults.
// All six overrides are out of line; their names are the slots' (Havok's).
#ifndef HAVOK_HKPGSKBASEAGENT_H
#define HAVOK_HKPGSKBASEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"
#include "havok/hkpGskCache.h"

class hkpGskBaseAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpGskBaseAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr);

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC (82D74C28)
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10 (82D75598)
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18 (82D74A10, empty)
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C (82D74A18)
    virtual void invalidateTim(const hkpCollisionInput &input);                         // +0x24 (82D74A38)
    virtual void warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input);   // +0x28 (82D74A58)

    hkpGskCache m_cache;               // +0xC
    hkReal m_timeOfSeparatingNormal;   // +0x18
    hkReal m_allowedPenetration;       // +0x1C
    hkVector4 m_separatingNormal;      // +0x20
};

#endif
