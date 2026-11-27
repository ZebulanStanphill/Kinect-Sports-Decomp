// hkpHeightFieldAgent (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.h), 0x18 bytes: the
// agent between a sphere-rep shape (body A) and a height field.
// The layout is the game's: with a contact manager, the constructor (82D5A670) sets m_contactPointId to one
// HK_INVALID_CONTACT_POINT per collision sphere of body A's shape; the destructor (82D5AB78) is user-written and
// empty (it stores the class vtable, then the array of 2-byte ids is destroyed).
// Its vtable: +0xC getPenetrations (82D5A7B0), +0x10 getClosestPoints (82D5A7C8), +0x14 linearCast (82D5A658),
// +0x18 processCollision (82D5ABF8), +0x1C cleanup (82D59CB0), then the empty function and hkpCollisionAgent's
// defaults. The virtual queries only call the static ones; they are declared out of line, because
// hkpHeightFieldAgent.cpp, which defines them, inlines them (hkpSymmetricAgent<hkpHeightFieldAgent>'s, 82D5AFC0
// and 82D5B008). registerAgent (82D5A850) stores the static queries.
// The member names follow Havok's header.
#ifndef HAVOK_HKPHEIGHTFIELDAGENT_H
#define HAVOK_HKPHEIGHTFIELDAGENT_H

#include "havok/hkpCollisionAgent.h"

class hkpHeightFieldAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpHeightFieldAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                        hkpContactMgr *mgr);   // out of line (82D5A670)
    virtual ~hkpHeightFieldAgent();            // out of line (82D5AB78), empty

    static hkpCollisionAgent *HK_CALL createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                  const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D59D40
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D59FB0
    static void HK_CALL staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector);   // 82D5A348

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC (82D5A7B0)
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10 (82D5A7C8)
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14 (82D5A658)
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18 (82D5ABF8)
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C (82D59CB0)

    hkArray<hkContactPointId> m_contactPointId;   // +0xC
};

#endif
