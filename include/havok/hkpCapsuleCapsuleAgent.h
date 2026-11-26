// hkpCapsuleCapsuleAgent (Physics/Collide/Agent/ConvexAgent/CapsuleCapsule/hkpCapsuleCapsuleAgent.h), 0x14
// bytes: an hkpIterativeLinearCastAgent (RTTI) with three contact point ids.
// The constructor has no symbol: createCapsuleCapsuleAgent (82D639D0) inlines it (the ids are set to
// HK_INVALID_CONTACT_POINT after the base). Its vtable: +0xC 82D63C90 (getPenetrations), +0x10 82D63EB0
// (getClosestPoints), +0x14 hkpIterativeLinearCastAgent's linearCast (82D75CB0), +0x18 82D64238, +0x1C 82D63A48;
// none of them is declared here. The static queries keep fn_ names (registerAgent, 82D641D0, stores them).
// The member name follows Havok's header.
#ifndef HAVOK_HKPCAPSULECAPSULEAGENT_H
#define HAVOK_HKPCAPSULECAPSULEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

extern "C" {
void fn_82D63AC0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpCapsuleCapsuleAgent::staticGetPenetrations
void fn_82D64040(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpCapsuleCapsuleAgent::staticGetClosestPoints
}

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
                                             const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D63AC0(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D64040(bodyA, bodyB, input, collector);
    }

    hkContactPointId m_contactPointId[3];   // +0xC
};

#endif
