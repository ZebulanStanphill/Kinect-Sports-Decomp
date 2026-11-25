// hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"

// hkpTriangleShape (RTTI: hkpConvexShape -> hkpSphereRepShape -> hkpShape): the vertices start at +0x20.
class hkpTriangleShape : public hkpConvexShape {
public:
    const hkVector4 &getVertex(int i) const { return (&m_vertexA)[i]; }

    hkUint16 m_weldingInfo;   // +0x14
    hkUint8 m_weldingType;    // +0x16
    hkUint8 m_isExtruded;     // +0x17
    hkVector4 m_vertexA;      // +0x20
    hkVector4 m_vertexB;      // +0x30
    hkVector4 m_vertexC;      // +0x40
    hkVector4 m_extrusion;    // +0x50
};

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

class hkpMultiSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    enum { HK_MAX_NUM_SPHERES_IN_MULTISPHERE = 8 };
    HK_FORCE_INLINE hkpMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        for (int i = 0; i < HK_MAX_NUM_SPHERES_IN_MULTISPHERE; i++)
            m_contactPointId[i] = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupClosestPointTriangleCache(&triB->getVertex(0), m_closestPointTriangleCache);
    }
    static hkpCollisionAgent *HK_CALL createTriangleMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollideTriangleUtil::ClosestPointTriangleCache m_closestPointTriangleCache;   // +0xC
    hkContactPointId m_contactPointId[HK_MAX_NUM_SPHERES_IN_MULTISPHERE];             // +0x1C
};

hkpCollisionAgent *HK_CALL hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiSphereTriangleAgent *agent = new hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
