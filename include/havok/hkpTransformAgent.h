// hkpTransformAgent (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.h), 0x10 bytes: the agent for a
// transform shape (body A), which forwards every query to the agent of the child shape at +0xC with body A's
// transform multiplied by the shape's.
// The constructor has no symbol of its own: hkpTransformAgent.cpp defines it and inlines it in both creation
// functions (createTransformAAgent 82D6AC38, createTransformBAgent 82D6B358), which create the child agent
// through the dispatcher. It is declared here; those units define it.
// Its vtable: +0x8 82D6AB98, +0xC getPenetrations (82D6B1B8), +0x10 getClosestPoints (82D6B098), +0x14 linearCast
// (82D6AF68), +0x18 82D6AD40, +0x1C 82D6AB40, then 82D6B2D8, 82D6ABC0, 82D6ABD8, 82D6ABF0, 82D6AC08, 82D6AC20, all
// under fn_ names. linearCast is a wrapper (hkpSymmetricAgent<hkpTransformAgent>'s, 82D6B9B0, calls it out of
// line); getPenetrations and getClosestPoints are inlined where they are defined (82D6B750, 82D6B7E0), so they
// are declared out of line. The static queries keep fn_ names (registerAgent, 82D6B470, stores them).
// The member name follows Havok's header.
#ifndef HAVOK_HKPTRANSFORMAGENT_H
#define HAVOK_HKPTRANSFORMAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpTransformAgent;

extern "C" {
void fn_82D6B238(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpTransformAgent::staticGetPenetrations
void fn_82D6B118(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpTransformAgent::staticGetClosestPoints
void fn_82D6AF68(hkpTransformAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                 hkpCdPointCollector *startCollector);   // hkpTransformAgent::linearCast
}

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
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6B238(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6B118(bodyA, bodyB, input, collector);
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // fn_82D6B1B8
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // fn_82D6B098
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6AF68(this, bodyA, bodyB, input, collector, startCollector);
    }

    hkpCollisionAgent *m_childAgent;   // +0xC
};

#endif
