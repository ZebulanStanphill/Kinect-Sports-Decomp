// hkpCapsuleTriangleAgent::createCapsuleTriangleAgent, creation function: new hkpCapsuleTriangleAgent with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTriangleShape.h"
#include "havok/hkpCollideTriangleUtil.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

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
