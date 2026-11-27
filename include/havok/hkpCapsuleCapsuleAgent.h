// hkpCapsuleCapsuleAgent (Physics/Collide/Agent/ConvexAgent/CapsuleCapsule/hkpCapsuleCapsuleAgent.h), 0x14
// bytes: an hkpIterativeLinearCastAgent (RTTI) with three contact point ids.
// The constructor has no symbol: createCapsuleCapsuleAgent (82D639D0) inlines it (the ids are set to
// HK_INVALID_CONTACT_POINT after the base). Its vtable: +0xC 82D63C90 (getPenetrations), +0x10 82D63EB0
// (getClosestPoints), +0x14 hkpIterativeLinearCastAgent's linearCast (82D75CB0), +0x18 82D64238 (processCollision),
// +0x1C 82D63A48 (cleanup). registerAgent (82D641D0) stores the static queries.
// The member name follows Havok's header.
#ifndef HAVOK_HKPCAPSULECAPSULEAGENT_H
#define HAVOK_HKPCAPSULECAPSULEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

class hkpCapsuleCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCapsuleCapsuleAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId[0] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[1] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[2] = HK_INVALID_CONTACT_POINT;
    }

    static hkpCollisionAgent *HK_CALL createCapsuleCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D63AC0
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D64040

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC (82D63C90)
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10 (82D63EB0)
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18 (82D64238)
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C (82D63A48)

    hkContactPointId m_contactPointId[3];   // +0xC
};

#endif
