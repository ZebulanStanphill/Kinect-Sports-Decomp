// hkpBvAgent (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.h), 0x14 bytes: the agent for an hkpBvShape
// (body A), which only creates the child agent when the bounding volume shape collides.
// The layout is the game's: the constructor (82D6DDA8) creates the agent for the bounding volume shape at +0xC
// through the dispatcher and clears the child agent at +0x10; createBvShapeAgent (82D6DE78) allocates 0x14 bytes.
// Its vtable overrides every hkpCollisionAgent slot: +0xC 82D6E838 (getPenetrations), +0x10 82D6E4A0
// (getClosestPoints), +0x14 82D6E0D8 (linearCast), +0x18 82D6DED8, +0x1C 82D6DB08, then updateShapeCollectionFilter
// 82D6DD08, invalidateTim 82D6DB90 and warpTime 82D6DC00 (both agents), removePoint 82D6DC90, commitPotential
// 82D6DCB8 and createZombie 82D6DCE0 (the child agent, when there is one). +0x18 and +0x1C keep fn_ names and are
// not declared. registerAgent (82D6EC40) stores the static queries.
// The member names follow Havok's header.
#ifndef HAVOK_HKPBVAGENT_H
#define HAVOK_HKPBVAGENT_H

#include "havok/hkpCollisionAgent.h"


class hkpBvAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
               hkpContactMgr *mgr);   // out of line (82D6DDA8)

    static hkpCollisionAgent *HK_CALL createBvShapeAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                         const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createShapeBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                         const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D6EA18
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D6E680
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector);   // 82D6E2C8

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D6E838
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D6E4A0
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // 82D6E0D8
    virtual void updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input,
                                             hkCollisionConstraintOwner &constraintOwner);   // 82D6DD08
    virtual void invalidateTim(const hkpCollisionInput &input);                              // 82D6DB90
    virtual void warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input);   // 82D6DC00
    virtual void removePoint(hkContactPointId idToRemove);                                   // 82D6DC90
    virtual void commitPotential(hkContactPointId newId);                                    // 82D6DCB8
    virtual void createZombie(hkContactPointId idTobeZombified);                             // 82D6DCE0

    hkpCollisionAgent *m_boundingVolumeAgent;   // +0xC
    hkpCollisionAgent *m_childAgent;            // +0x10
};

#endif
