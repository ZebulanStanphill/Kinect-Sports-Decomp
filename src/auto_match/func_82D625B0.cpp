// hkpCapsuleTriangleAgent::createCapsuleTriangleAgent, creation function: new hkpCapsuleTriangleAgent with the constructor inlined.
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
    static hkpCollisionAgent *HK_CALL createCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId[3];                             // +0xC
    hkpCollideTriangleUtil::PointTriangleDistanceCache m_triangleCache;   // +0x14
};

hkpCollisionAgent *HK_CALL hkpCapsuleTriangleAgent::createCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpCapsuleTriangleAgent *agent = new hkpCapsuleTriangleAgent(bodyA, bodyB, input, mgr);
    return agent;
}
