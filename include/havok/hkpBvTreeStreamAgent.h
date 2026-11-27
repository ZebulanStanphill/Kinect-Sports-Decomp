// hkpBvTreeStreamAgent (Physics/Collide/Agent/CompoundAgent/BvTreeStream/hkpBvTreeStreamAgent.h), 0x40 bytes.
// The layout is the game's: the constructor (82D54230) keeps the input's dispatcher at +0xC, clears both
// corners of the cached AABB at +0x10 and initialises the agent track at +0x30; the deleting destructor
// (82D54FD8) runs the inline destructor, which destroys the track. The destructor is user-written and empty:
// it stores the class vtable before the track is destroyed (an implicit one does not). The constructor is out
// of line in every unit that creates the agent (82D542B8, 82D54A38, 82D54900, 82D54C48).
// Its vtable (??_7hkpBvTreeStreamAgent@@6B@) overrides every hkpCollisionAgent slot: +0xC getPenetrations
// 82D54068, +0x10 getClosestPoints 82D54080 and +0x14 linearCast 82D54098 (each calls hkpBvTreeAgent's static
// function), +0x18 82D54318, +0x1C 82D540B0 (both keep fn_ names and are not declared), +0x20
// updateShapeCollectionFilter 82D54118, +0x24 invalidateTim 82D54108, +0x28 warpTime 82D54110 (the last three work
// on the agent track), then hkpCollisionAgent's last three.
// The registerAgent functions store hkpBvTreeAgent's static queries for it.
// The member names follow Havok's header.
#ifndef HAVOK_HKPBVTREESTREAMAGENT_H
#define HAVOK_HKPBVTREESTREAMAGENT_H

#include "havok/hkAabb.h"
#include "havok/hkpAgent1nTrack.h"
#include "havok/hkpCollisionAgent.h"

class hkpCollisionDispatcher;

class hkpBvTreeStreamAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeStreamAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                         hkpContactMgr *mgr);   // out of line (82D54230)
    ~hkpBvTreeStreamAgent() {}

    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr);

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D54068
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D54080
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // 82D54098
    virtual void updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input,
                                             hkCollisionConstraintOwner &constraintOwner);   // 82D54118
    virtual void invalidateTim(const hkpCollisionInput &input);                              // 82D54108
    virtual void warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input);   // 82D54110

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkAabb m_cachedAabb;                    // +0x10
    hkpAgent1nTrack m_agentTrack;           // +0x30
};

#endif
