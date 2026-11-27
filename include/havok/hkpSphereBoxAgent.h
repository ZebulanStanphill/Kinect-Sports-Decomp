// hkpSphereBoxAgent (Physics/Collide/Agent/ConvexAgent/SphereBox/hkpSphereBoxAgent.h), 0x10 bytes: an
// hkpIterativeLinearCastAgent (RTTI) with one contact point id.
// The constructor has no symbol: both creation functions (82D64480, 82D64558) inline it (the id is set to
// HK_INVALID_CONTACT_POINT after the base). Its vtable: +0xC getPenetrations (82D64738), +0x10 getClosestPoints
// (82D64AF0), +0x14 hkpIterativeLinearCastAgent's linearCast (82D75CB0), +0x18 processCollision (82D64750), +0x1C
// cleanup (82D644F0), then the empty function and hkpCollisionAgent's defaults. All are out of line (82D652C0 calls
// getClosestPoints; getPenetrations only calls the static function and is inlined where it is defined, 82D65230).
// The member name follows Havok's header.
#ifndef HAVOK_HKPSPHEREBOXAGENT_H
#define HAVOK_HKPSPHEREBOXAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

class hkpSphereBoxAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSphereBoxAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }

    static hkpCollisionAgent *HK_CALL createSphereBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                           const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createBoxSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                           const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D645C8
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D64E28

    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D64AF0
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D64738

    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);

    hkContactPointId m_contactPointId;   // +0xC
};

#endif
