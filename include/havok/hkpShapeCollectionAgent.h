// hkpShapeCollectionAgent (Physics/Collide/Agent/CompoundAgent/ShapeCollection/hkpShapeCollectionAgent.h),
// 0x38 bytes: one child agent per child shape of body A's shape collection.
// The layout is the game's: the constructor (82D6C808) reserves one KeyAgentPair per child in the in-place
// array at +0xC (four pairs of storage at +0x18, which make the 0x38 bytes that createListAAgent allocates) and appends
// a pair for every child the collision filter accepts. The destructor is the implicit one, out of line in the
// game (??1hkpShapeCollectionAgent@@UAA@XZ, 82D55060; the deleting destructor 82D55498 calls it).
// Its vtable overrides every hkpCollisionAgent slot, all under fn_ names: +0xC 82D6C2B0 (getPenetrations),
// +0x10 82D6BD10 (getClosestPoints), +0x14 82D6BFD8 (linearCast), +0x18 82D6BBF0, +0x1C 82D6BA80 ...; the
// three queries are declared here as wrappers. The static queries also keep fn_ names; registerAgent
// (82D6CAD0) stores them for the unflipped pair and hkpSymmetricAgent<hkpShapeCollectionAgent>'s
// (82D5D288, 82D5D2D0, 82D5D320) for the flipped one.
// The member names follow Havok's header.
#ifndef HAVOK_HKPSHAPECOLLECTIONAGENT_H
#define HAVOK_HKPSHAPECOLLECTIONAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpShapeCollectionAgent;

extern "C" {
void fn_82D6C3E0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpShapeCollectionAgent::staticGetPenetrations
void fn_82D6BE30(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpShapeCollectionAgent::staticGetClosestPoints
// hkpShapeCollectionAgent::staticLinearCast
void fn_82D6C100(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                 hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);
// hkpShapeCollectionAgent::getPenetrations
void fn_82D6C2B0(hkpShapeCollectionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
// hkpShapeCollectionAgent::getClosestPoints
void fn_82D6BD10(hkpShapeCollectionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdPointCollector &collector);
void fn_82D6BFD8(hkpShapeCollectionAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                 hkpCdPointCollector *startCollector);   // hkpShapeCollectionAgent::linearCast
}

class hkpShapeCollectionAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    // 8 bytes.
    struct KeyAgentPair {
        hkpShapeKey m_key;            // +0x0
        hkpCollisionAgent *m_agent;   // +0x4
    };

    hkpShapeCollectionAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                            hkpContactMgr *mgr);   // out of line (82D6C808)

    static hkpCollisionAgent *HK_CALL createListAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                       const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createListBAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                       const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D6C3E0(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D6BE30(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
    {
        fn_82D6C100(bodyA, bodyB, input, collector, startCollector);
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        fn_82D6C2B0(this, bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        fn_82D6BD10(this, bodyA, bodyB, input, collector);
    }
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector)
    {
        fn_82D6BFD8(this, bodyA, bodyB, input, collector, startCollector);
    }

    // Havok's hkInplaceArray<KeyAgentPair, 4>, written as the array and its storage: hkInplaceArray's implicit
    // destructor is a call of its own, where the game's destructor (82D55060) has the array's inlined.
    hkArray<KeyAgentPair> m_agents;         // +0xC
    KeyAgentPair m_agentsStorage[4];        // +0x18
};

#endif
