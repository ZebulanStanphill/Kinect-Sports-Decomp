// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// hkpSphereTriangleAgent::createTriangleSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTriangleShape.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

extern "C" void fn_82D76758(const hkVector4 *vertices, void *cache);   // hkpCollideTriangleUtil::setupClosestPointTriangleCache

struct hkpCollideTriangleUtil {
    struct ClosestPointTriangleCache {
        hkReal m_data[4];
    };
    static void HK_CALL setupClosestPointTriangleCache(const hkVector4 *triangle, ClosestPointTriangleCache &cache)
    {
        fn_82D76758(triangle, &cache);
    }
};

class hkpSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupClosestPointTriangleCache(&triB->getVertex(0), m_closestPointTriangleCache);
    }
    static hkpCollisionAgent *HK_CALL createTriangleSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId;                                              // +0xC
    hkpCollideTriangleUtil::ClosestPointTriangleCache m_closestPointTriangleCache;  // +0x10
};

extern "C" hkpCollisionAgent *fn_82D654F8(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereTriangleAgent *agent = new hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
