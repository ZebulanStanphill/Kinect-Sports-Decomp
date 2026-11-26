// hkpCapsuleTriangleAgent (Physics/Collide/Agent/ConvexAgent/CapsuleTriangle/hkpCapsuleTriangleAgent.h), 0x28
// bytes: an hkpIterativeLinearCastAgent (RTTI) with three contact point ids and the point-triangle distance cache
// of the triangle. The layout is the constructor's, which both creation functions inline (forced; the
// createCapsuleTriangleAgent 82D625B0, the flipped 82D626B0): the ids at +0xC set to HK_INVALID_CONTACT_POINT,
// then hkpCollideTriangleUtil::setupPointTriangleDistanceCache for body B's triangle into the cache at +0x14.
// Its vtable (??_7hkpCapsuleTriangleAgent@@6B@): +0xC getPenetrations 82D62F78, +0x10 getClosestPoints 82D62A48,
// +0x14 hkpIterativeLinearCastAgent's linearCast 82D75CB0, +0x18 processCollision 82D63520, +0x1C cleanup
// 82D62638, then the empty function, 82D746F0, 82D746F8 and hkpCollisionAgent's defaults.
// The queries keep fn_ names and are called through wrappers (hkpSymmetricAgentLinearCast<..>'s 82D637E8 and
// 82D63878 call the virtuals out of line). The member names follow Havok's header.
#ifndef HAVOK_HKPCAPSULETRIANGLEAGENT_H
#define HAVOK_HKPCAPSULETRIANGLEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"
#include "havok/hkpCollideTriangleUtil.h"
#include "havok/hkpTriangleShape.h"

// Havok's hkContactPointId and its invalid value (also declared by the other agent headers that need them).
typedef hkUint16 hkContactPointId;
#ifndef HK_INVALID_CONTACT_POINT
#define HK_INVALID_CONTACT_POINT 0xffff
#endif

class hkpCapsuleTriangleAgent;

extern "C" {
void fn_82D63130(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdBodyPairCollector &collector);   // hkpCapsuleTriangleAgent::staticGetPenetrations
void fn_82D62CD8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                 hkpCdPointCollector &collector);   // hkpCapsuleTriangleAgent::staticGetClosestPoints
// hkpCapsuleTriangleAgent::getPenetrations
void fn_82D62F78(hkpCapsuleTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);
// hkpCapsuleTriangleAgent::getClosestPoints
void fn_82D62A48(hkpCapsuleTriangleAgent *self, const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                 const hkpCollisionInput &input, hkpCdPointCollector &collector);
}

class hkpCapsuleTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    HK_FORCE_INLINE hkpCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                            const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId[0] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[1] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[2] = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupPointTriangleDistanceCache(&triB->getVertex(0), m_triangleCache);
    }

    static hkpCollisionAgent *HK_CALL createCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    // fn_82D626B0 in the game.
    static hkpCollisionAgent *HK_CALL createTriangleCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
    {
        fn_82D63130(bodyA, bodyB, input, collector);
    }
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector)
    {
        fn_82D62CD8(bodyA, bodyB, input, collector);
    }

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector)
    {
        fn_82D62F78(this, bodyA, bodyB, input, collector);
    }
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector)
    {
        fn_82D62A48(this, bodyA, bodyB, input, collector);
    }

    hkContactPointId m_contactPointId[3];                                 // +0xC
    hkpCollideTriangleUtil::PointTriangleDistanceCache m_triangleCache;   // +0x14
};

#endif
