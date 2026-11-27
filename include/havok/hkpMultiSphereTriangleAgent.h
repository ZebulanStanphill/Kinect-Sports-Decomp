// hkpMultiSphereTriangleAgent (Physics/Collide/Agent/ConvexAgent/MultiSphereTriangle/
// hkpMultiSphereTriangleAgent.h), 0x2C bytes: an hkpIterativeLinearCastAgent (RTTI) with the closest point cache
// of the triangle and one contact point id per sphere. The layout is the constructor's, which both creation
// functions inline (forced; createMultiSphereTriangleAgent 82D61058, createTriangleMultiSphereAgent 82D61160):
// the eight ids at +0x1C set to HK_INVALID_CONTACT_POINT, then
// hkpCollideTriangleUtil::setupClosestPointTriangleCache for body B's triangle into the cache at +0xC.
// Its vtable (??_7hkpMultiSphereTriangleAgent@@6B@): +0xC getPenetrations 82D611F8, +0x10 getClosestPoints
// 82D614F0, +0x14 hkpIterativeLinearCastAgent's linearCast 82D75CB0, +0x18 processCollision 82D61AA0, +0x1C
// cleanup 82D610E8, then the empty function, 82D746F0, 82D746F8 and hkpCollisionAgent's defaults.
// All are out of line (hkpSymmetricAgentLinearCast<..>'s 82D61A10 and 82D61D58 call the virtual queries).
// The member names follow Havok's header.
#ifndef HAVOK_HKPMULTISPHERETRIANGLEAGENT_H
#define HAVOK_HKPMULTISPHERETRIANGLEAGENT_H

#include "havok/hkpIterativeLinearCastAgent.h"
#include "havok/hkpCollideTriangleUtil.h"
#include "havok/hkpTriangleShape.h"

// Havok's hkContactPointId and its invalid value (also declared by the other agent headers that need them).
typedef hkUint16 hkContactPointId;
#ifndef HK_INVALID_CONTACT_POINT
#define HK_INVALID_CONTACT_POINT 0xffff
#endif

class hkpMultiSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum { HK_MAX_NUM_SPHERES_IN_MULTISPHERE = 8 };

    HK_FORCE_INLINE hkpMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        for (int i = 0; i < HK_MAX_NUM_SPHERES_IN_MULTISPHERE; i++)
            m_contactPointId[i] = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupClosestPointTriangleCache(&triB->getVertex(0), m_closestPointTriangleCache);
    }

    static hkpCollisionAgent *HK_CALL createMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createTriangleMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                const hkpCollisionInput &input, hkpContactMgr *mgr);
    static void HK_CALL staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector);   // 82D61370
    static void HK_CALL staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                               const hkpCollisionInput &input, hkpCdPointCollector &collector);   // 82D61718

    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // 82D611F8
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // 82D614F0

    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);

    hkpCollideTriangleUtil::ClosestPointTriangleCache m_closestPointTriangleCache;   // +0xC
    hkContactPointId m_contactPointId[HK_MAX_NUM_SPHERES_IN_MULTISPHERE];             // +0x1C
};

#endif
