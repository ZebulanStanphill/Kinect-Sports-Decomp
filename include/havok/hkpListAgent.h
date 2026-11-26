// hkpListAgent (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.h), 0x1C bytes: the agent for a list
// shape, an 1-n agent over its children.
// The layout is the game's: the constructor (82D5FAC8) keeps the input's dispatcher at +0xC and initialises
// the agent track at +0x10. The destructor is the implicit one (the deleting destructor 82D5FDA0 inlines it).
// Its vtable: +0xC getPenetrations (82D5FA80) and +0x10 getClosestPoints (82D5F858) have their mangled names,
// +0x14 linearCast keeps an fn_ name (82D5F8A0), +0x18 82D5F900, +0x1C 82D5F720, then 82D5F798, 82D5F778,
// 82D5F780 and hkpCollisionAgent's last three.
// Everything declared here is defined in hkpListAgent.cpp, out of line, and that file inlines it where it calls
// it: the constructor in the creation functions (82D5FB30 and hkpSymmetricAgent<hkpListAgent>::createAgent,
// 82D5FC00), the static queries in the virtual ones and in hkpSymmetricAgent<hkpListAgent>'s. So the units of
// that file define what they inline themselves. The static queries are hkpSymmetricAgent<hkpShapeCollectionAgent>'s
// (the list shape's children are the shape collection agent's, with the bodies the other way round).
// staticLinearCast has no symbol (it is only inlined); linearCast is declared out of line although its symbol is
// fn_82D5F8A0, because nothing outside hkpListAgent.cpp calls it.
// The member names follow Havok's header.
#ifndef HAVOK_HKPLISTAGENT_H
#define HAVOK_HKPLISTAGENT_H

#include "havok/hkpAgent1nTrack.h"
#include "havok/hkpCollisionAgent.h"

class hkpCollisionDispatcher;

class hkpListAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpListAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpContactMgr *mgr);   // 82D5FAC8

    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input,
                                              hkpCdBodyPairCollector &collector);   // 82D5F8B8
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input,
                                               hkpCdPointCollector &collector);   // 82D5F800
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector);

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D5FA80
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D5F858
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // fn_82D5F8A0

    hkpCollisionDispatcher *m_dispatcher;   // +0xC
    hkpAgent1nTrack m_agentTrack;           // +0x10
};

#endif
