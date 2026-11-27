// hkpMultiRayConvexAgent (Physics/Collide/Agent/MiscAgent/MultirayConvex/hkpMultiRayConvexAgent.h), 0x20 bytes:
// the agent between a multi-ray shape (body A) and a convex shape; an hkpIterativeLinearCastAgent (RTTI).
// The layout is the game's: the constructor (82D60868) sets the in-place array at +0xC to one
// HK_INVALID_CONTACT_POINT per ray of body A's shape; the four ids of storage at +0x18 make the 0x20 bytes that
// createMultiRayConvexAgent (82D60928) allocates. The destructor is the implicit one, out of line in the game
// (??1hkpMultiRayConvexAgent@@UAA@XZ, 82D60E30); the deleting destructor keeps an fn_ name (82D60FF0).
// Its vtable: +0xC getPenetrations (82D60850), +0x10 getClosestPoints (82D60198), +0x14 hkpIterativeLinearCastAgent's
// linearCast (82D75CB0), +0x18 processCollision (82D60B60), +0x1C cleanup (82D60118), then the empty function and
// hkpCollisionAgent's defaults. All are out of line: hkpSymmetricAgent<hkpMultiRayConvexAgent>::getClosestPoints
// (82D60EA0) calls getClosestPoints, and getPenetrations, which only calls the static function, is inlined where
// it is defined (82D60EF0). registerAgent (82D609F8) stores the static queries.
// The member names follow Havok's header.
#ifndef HAVOK_HKPMULTIRAYCONVEXAGENT_H
#define HAVOK_HKPMULTIRAYCONVEXAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);

    // 2 bytes.
    struct ContactPointInfo {
        hkContactPointId m_contactPointId;   // +0x0
    };

    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr);   // out of line (82D60868)

    static hkpCollisionAgent *HK_CALL createMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createConvexMultiRayAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D60698
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D60418

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D60850
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D60198

    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);

    // The storage of four ids is at +0x18. The game's destructor (82D60E30) has the array's inlined.
    hkInplaceArray<ContactPointInfo, 4> m_contactInfo;   // +0xC
};

#endif
