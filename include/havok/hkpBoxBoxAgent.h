// hkpBoxBoxAgent (Physics/Collide/Agent/ConvexAgent/BoxBox/hkpBoxBoxAgent.h), 0x50 bytes: an
// hkpIterativeLinearCastAgent (RTTI) with an hkpBoxBoxManifold at +0x10. createBoxBoxAgent (82D68230) inlines
// the constructor, which constructs the manifold (82D781D0) after the base.
// Its vtable (??_7hkpBoxBoxAgent@@6B@): +0xC getPenetrations 82D688D0, +0x10 getClosestPoints 82D686C0 (each only
// calls the static function), +0x14 hkpIterativeLinearCastAgent's linearCast 82D75CB0, +0x18 processCollision
// 82D682F0, +0x1C cleanup 82D681B8, then the empty function, 82D746F0, 82D746F8 and hkpCollisionAgent's defaults.
// The member name follows Havok's header.
#ifndef HAVOK_HKPBOXBOXAGENT_H
#define HAVOK_HKPBOXBOXAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"
#include "havok/hkpBoxBoxManifold.h"

class hkpBoxBoxAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpBoxBoxAgent(hkpContactMgr *contactMgr) : hkpIterativeLinearCastAgent(contactMgr) {}

    static hkpCollisionAgent *HK_CALL createBoxBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                        const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D686D8
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D684C0

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC (82D688D0)
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10 (82D686C0)
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18 (82D682F0)
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C (82D681B8)

    hkpBoxBoxManifold m_manifold;   // +0x10
};

#endif
