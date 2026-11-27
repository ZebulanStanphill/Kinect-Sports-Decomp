// hkpBvTreeAgent (Physics/Collide/Agent/CompoundAgent/BvTree/hkpBvTreeAgent.h), 0x40 bytes, and
// hkpBvAgentEntryInfo (0xC bytes), the entry of its m_collisionPartners array, which Havok declares with it.
// The layout is the game's: the constructor (82D56088) clears the hkArray at +0xC and sets both corners of the
// cached AABB at +0x20 to HK_REAL_MAX; the destructor (82D558B0) destroys the array of 12-byte entries.
// Its vtable (??_7hkpBvTreeAgent@@6B@) overrides every hkpCollisionAgent slot: +0x8 82D55FA8
// (calcContentStatistics), +0xC getPenetrations 82D583D0, +0x10 getClosestPoints 82D583B8, +0x14 linearCast
// 82D583A0 (each only calls the static function), +0x18 82D56D48 (processCollision), +0x1C 82D55BE8 (cleanup),
// then 82D55DC8 (updateShapeCollectionFilter), 82D55C78 (invalidateTim), 82D55CE8 (warpTime) and
// hkpCollisionAgent's last three. The slots that keep fn_ names are not declared.
// The three virtual queries are defined in hkpBvTreeAgent.cpp, where hkpSymmetricAgent<hkpBvTreeAgent> inlines
// getPenetrations and getClosestPoints (82D55158 and 82D584B0 call the static functions directly, and define
// the two queries themselves); the other files call them out of line (hkpSymmetricAgent<hkpMoppAgent>,
// 82D55940, 82D55988).
// The creation functions that keep fn_ names are 82D560E8 (new hkpBvTreeAgent) and 82D56190 (the flipped
// agent); hkpBvTreeAgent.cpp inlines the constructor in them and in createBvBvAgent.
// The member names follow Havok's header.
#ifndef HAVOK_HKPBVTREEAGENT_H
#define HAVOK_HKPBVTREEAGENT_H

#include "havok/hkAabb.h"
#include "havok/hkpCollisionAgent.h"


struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;                     // +0x0
    hkInt32 m_userInfo;                    // +0x4
    hkpCollisionAgent *m_collisionAgent;   // +0x8
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr);   // out of line (82D56088)
    virtual ~hkpBvTreeAgent();            // out of line (82D558B0), empty

    static hkpCollisionAgent *HK_CALL createBvBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                      const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D58028
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D57DB8
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector);   // 82D57B60

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D583D0
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D583B8
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // 82D583A0

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
    hkAabb m_cachedAabb;                                // +0x20
};

#endif
