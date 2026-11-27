// hkpTransformAgent (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.h), 0x10 bytes: the agent for a
// transform shape (body A), which forwards every query to the agent of the child shape at +0xC with body A's
// transform multiplied by the shape's.
// The constructor has no symbol of its own: hkpTransformAgent.cpp defines it and inlines it in both creation
// functions (createTransformAAgent 82D6AC38, createTransformBAgent 82D6B358), which create the child agent
// through the dispatcher. It is declared here; those units define it.
// Its vtable: +0x8 82D6AB98, +0xC getPenetrations (82D6B1B8), +0x10 getClosestPoints (82D6B098), +0x14 linearCast
// (82D6AF68), +0x18 82D6AD40, +0x1C 82D6AB40, then updateShapeCollectionFilter 82D6B2D8, invalidateTim 82D6ABC0,
// warpTime 82D6ABD8, removePoint 82D6ABF0, commitPotential 82D6AC08 and createZombie 82D6AC20 (each forwards to
// the child agent). +0x8, +0x18 and +0x1C keep fn_ names and are not declared. getPenetrations and
// getClosestPoints are also inlined where they are defined (82D6B750, 82D6B7E0); hkpSymmetricAgent<..>'s
// linearCast (82D6B9B0) calls linearCast out of line. registerAgent (82D6B470) stores the static queries
// (staticLinearCast is the cast function of the unflipped pair, next to the two named ones).
// The member names follow Havok's header.
#ifndef HAVOK_HKPTRANSFORMAGENT_H
#define HAVOK_HKPTRANSFORMAGENT_H

#include "havok/hkpCollisionAgent.h"


class hkpTransformAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                      hkpContactMgr *mgr);

    static hkpCollisionAgent *HK_CALL createTransformAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createTransformBAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input,
                                              hkpCdBodyPairCollector &collector);   // 82D6B238
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input,
                                               hkpCdPointCollector &collector);   // 82D6B118
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector);   // 82D6AFF0

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D6B1B8
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D6B098
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // 82D6AF68
    virtual void updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input,
                                             hkCollisionConstraintOwner &constraintOwner);   // 82D6B2D8
    virtual void invalidateTim(const hkpCollisionInput &input);                              // 82D6ABC0
    virtual void warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput &input);   // 82D6ABD8
    virtual void removePoint(hkContactPointId idToRemove);                                   // 82D6ABF0
    virtual void commitPotential(hkContactPointId newId);                                    // 82D6AC08
    virtual void createZombie(hkContactPointId idTobeZombified);                             // 82D6AC20

    hkpCollisionAgent *m_childAgent;   // +0xC
};

#endif
