// hkpSphereCapsuleAgent (Physics/Collide/Agent/ConvexAgent/SphereCapsule/hkpSphereCapsuleAgent.h), 0x10 bytes:
// an hkpIterativeLinearCastAgent (RTTI) with one contact point id.
// The constructor has no symbol: both creation functions (82D663C0, 82D66498) inline it (the id is set to
// HK_INVALID_CONTACT_POINT after the base). Its vtable: +0xC getPenetrations (82D66670), +0x10 getClosestPoints
// (82D668B0), +0x14 hkpIterativeLinearCastAgent's linearCast (82D75CB0), +0x18 processCollision (82D67058), +0x1C
// cleanup (82D66430), then the empty function and hkpCollisionAgent's defaults. All are out of line (82D67378 calls
// getClosestPoints; getPenetrations only calls the static function and is inlined where it is defined, 82D66FC8).
// The member name follows Havok's header.
#ifndef HAVOK_HKPSPHERECAPSULEAGENT_H
#define HAVOK_HKPSPHERECAPSULEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

class hkpSphereCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSphereCapsuleAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }

    static hkpCollisionAgent *HK_CALL createSphereCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                               const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createCapsuleSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                               const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D66508
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D66B70

    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D668B0
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D66670

    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);

    hkContactPointId m_contactPointId;   // +0xC
};

#endif
