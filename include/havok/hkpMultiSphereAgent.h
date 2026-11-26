// hkpMultiSphereAgent (Physics/Collide/Agent/CompoundAgent/MultiSphere/hkpMultiSphereAgent.h), 0x38 bytes: one
// child agent per sphere of body A's multi-sphere shape.
// No matching unit names the members. The layout is hkpShapeCollectionAgent's: both creation functions
// (82D6D5E8, 82D6D648) allocate 0x38 bytes, and the deleting destructor in its vtable is
// ??_GhkpShapeCollectionAgent@@UAAPAXI@Z, folded with hkpShapeCollectionAgent's, whose destructor (82D55060)
// destroys the array of key/agent pairs at +0xC with its four pairs of in-place storage. The member names
// follow Havok's header. The constructor is out of line (82D6D3F8).
// Its vtable overrides every hkpCollisionAgent slot up to +0x1C, all under fn_ names: +0xC 82D6D1B8
// (getPenetrations), +0x10 82D6CD50 (getClosestPoints), +0x14 82D6CF80 (linearCast), +0x18 82D6CC20,
// +0x1C 82D6CBA0; the three queries are declared here as wrappers. The static queries keep fn_ names too
// (registerAgent, 82D6D6B8, stores them).
#ifndef HAVOK_HKPMULTISPHEREAGENT_H
#define HAVOK_HKPMULTISPHEREAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpMultiSphereAgent;

extern "C" {
void fn_82D6D2C8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpMultiSphereAgent::staticGetPenetrations
void fn_82D6CE58(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpMultiSphereAgent::staticGetClosestPoints
// hkpMultiSphereAgent::staticLinearCast
void fn_82D6D088(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
// hkpMultiSphereAgent::getPenetrations
void fn_82D6D1B8(hkpMultiSphereAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
// hkpMultiSphereAgent::getClosestPoints
void fn_82D6CD50(hkpMultiSphereAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdPointCollector &collector);
void fn_82D6CF80(hkpMultiSphereAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                 hkpCdPointCollector *startCollector);   // hkpMultiSphereAgent::linearCast
}

class hkpMultiSphereAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    // 8 bytes.
    struct KeyAgentPair {
        hkpShapeKey m_key;            // +0x0
        hkpCollisionAgent *m_agent;   // +0x4
    };

    hkpMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                        hkpContactMgr *mgr);   // out of line (82D6D3F8)

    static hkpCollisionAgent *HK_CALL createMultiSphereAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                              const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createMultiSphereBAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                              const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6D2C8(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6CE58(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D6D088(bodyA, bodyB, input, collector, startCollector);
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        fn_82D6D1B8(this, bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        fn_82D6CD50(this, bodyA, bodyB, input, collector);
    }
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6CF80(this, bodyA, bodyB, input, collector, startCollector);
    }

    // The storage of four pairs is at +0x18.
    hkInplaceArray<KeyAgentPair, 4> m_agents;   // +0xC
};

#endif
