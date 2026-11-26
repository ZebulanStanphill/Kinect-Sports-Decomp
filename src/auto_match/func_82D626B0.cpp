// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// hkpCapsuleTriangleAgent::createTriangleCapsuleAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTriangleShape.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

extern "C" void fn_82D76368(const hkVector4 *vertices, void *cache);   // hkpCollideTriangleUtil::setupPointTriangleDistanceCache

struct hkpCollideTriangleUtil {
    struct PointTriangleDistanceCache {
        hkReal m_data[5];
    };
    static void HK_CALL setupPointTriangleDistanceCache(const hkVector4 *triangle, PointTriangleDistanceCache &cache)
    {
        fn_82D76368(triangle, &cache);
    }
};

class hkpCapsuleTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    HK_FORCE_INLINE hkpCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId[0] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[1] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[2] = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupPointTriangleDistanceCache(&triB->getVertex(0), m_triangleCache);
    }
    static hkpCollisionAgent *HK_CALL createTriangleCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId[3];                             // +0xC
    hkpCollideTriangleUtil::PointTriangleDistanceCache m_triangleCache;   // +0x14
};

extern "C" hkpCollisionAgent *fn_82D626B0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpCapsuleTriangleAgent *agent = new hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
