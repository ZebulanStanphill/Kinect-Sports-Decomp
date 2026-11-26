// hkpSphereSphereAgent (Physics/Collide/Agent/ConvexAgent/SphereSphere/hkpSphereSphereAgent.h), 0x10 bytes:
// an hkpIterativeLinearCastAgent (RTTI) with one contact point id.
// The constructor has no symbol: createSphereSphereAgent (82D674D0) inlines it (the id is set to
// HK_INVALID_CONTACT_POINT after the base). Its vtable: +0xC 82D67C38, +0x10 82D678B8, +0x14
// hkpIterativeLinearCastAgent's linearCast (82D75CB0), +0x18 82D676A8, +0x1C 82D67540; none is declared here.
// The member name follows Havok's header.
#ifndef HAVOK_HKPSPHERESPHEREAGENT_H
#define HAVOK_HKPSPHERESPHEREAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"

class hkpSphereSphereAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSphereSphereAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }

    static hkpCollisionAgent *HK_CALL createSphereSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                              const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId;   // +0xC
};

#endif
