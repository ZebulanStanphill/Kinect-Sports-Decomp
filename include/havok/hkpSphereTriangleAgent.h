// hkpSphereTriangleAgent (Physics/Collide/Agent/ConvexAgent/SphereTriangle/hkpSphereTriangleAgent.h), 0x20 bytes:
// an hkpIterativeLinearCastAgent (RTTI) with one contact point id and the closest point cache of the triangle.
// The layout is the inline constructor's, which both creation functions inline (createSphereTriangleAgent
// 82D65418, the flipped 82D654F8): the id at +0xC set to HK_INVALID_CONTACT_POINT, then
// hkpCollideTriangleUtil::setupClosestPointTriangleCache for body B's triangle into the cache at +0x10.
// Its vtable (??_7hkpSphereTriangleAgent@@6B@): +0xC getPenetrations 82D65580, +0x10 getClosestPoints 82D65920,
// +0x14 hkpIterativeLinearCastAgent's linearCast 82D75CB0, +0x18 processCollision 82D65FA8, +0x1C cleanup
// 82D65490, then the empty function, 82D746F0, 82D746F8 and hkpCollisionAgent's defaults.
// All are out of line (hkpSymmetricAgentLinearCast<..>'s 82D65F18 and
// 82D66268 call the virtual queries). The member names follow Havok's header.
#ifndef HAVOK_HKPSPHERETRIANGLEAGENT_H
#define HAVOK_HKPSPHERETRIANGLEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"
#include "havok/hkpCollideTriangleUtil.h"
#include "havok/hkpTriangleShape.h"

// Havok's hkContactPointId and its invalid value (also declared by the other agent headers that need them).
typedef hkUint16 hkContactPointId;
#ifndef HK_INVALID_CONTACT_POINT
#define HK_INVALID_CONTACT_POINT 0xffff
#endif

class hkpSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                           hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupClosestPointTriangleCache(&triB->getVertex(0), m_closestPointTriangleCache);
    }

    static hkpCollisionAgent *HK_CALL createSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    // fn_82D654F8 in the game.
    static hkpCollisionAgent *HK_CALL createTriangleSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D656C0
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D65AB8

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D65580
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D65920

    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);

    hkContactPointId m_contactPointId;                                               // +0xC
    hkpCollideTriangleUtil::ClosestPointTriangleCache m_closestPointTriangleCache;   // +0x10
};

#endif
