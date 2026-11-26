// hkpBvAgent (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.h), 0x14 bytes: the agent for an hkpBvShape
// (body A), which only creates the child agent when the bounding volume shape collides.
// The layout is the game's: the constructor (82D6DDA8) creates the agent for the bounding volume shape at +0xC
// through the dispatcher and clears the child agent at +0x10; createBvShapeAgent (82D6DE78) allocates 0x14 bytes.
// Its vtable overrides every hkpCollisionAgent slot, all under fn_ names: +0xC 82D6E838 (getPenetrations),
// +0x10 82D6E4A0 (getClosestPoints), +0x14 82D6E0D8 (linearCast), +0x18 82D6DED8, +0x1C 82D6DB08, then
// 82D6DD08, 82D6DB90, 82D6DC00, 82D6DC90, 82D6DCB8, 82D6DCE0; the three queries are declared here as wrappers.
// The static queries keep fn_ names too (registerAgent, 82D6EC40, stores them).
// The member names follow Havok's header.
#ifndef HAVOK_HKPBVAGENT_H
#define HAVOK_HKPBVAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpBvAgent;

extern "C" {
void fn_82D6EA18(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpBvAgent::staticGetPenetrations
void fn_82D6E680(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpBvAgent::staticGetClosestPoints
void fn_82D6E2C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // hkpBvAgent::staticLinearCast
void fn_82D6E838(hkpBvAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpBvAgent::getPenetrations
void fn_82D6E4A0(hkpBvAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpBvAgent::getClosestPoints
void fn_82D6E0D8(hkpBvAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                 hkpCdPointCollector *startCollector);   // hkpBvAgent::linearCast
}

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
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6EA18(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6E680(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D6E2C8(bodyA, bodyB, input, collector, startCollector);
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        fn_82D6E838(this, bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        fn_82D6E4A0(this, bodyA, bodyB, input, collector);
    }
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6E0D8(this, bodyA, bodyB, input, collector, startCollector);
    }

    hkpCollisionAgent *m_boundingVolumeAgent;   // +0xC
    hkpCollisionAgent *m_childAgent;            // +0x10
};

#endif
