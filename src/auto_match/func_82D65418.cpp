// hkpSphereTriangleAgent::createSphereTriangleAgent, creation function: new hkpSphereTriangleAgent with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTriangleShape.h"
#include "havok/hkpCollideTriangleUtil.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

class hkpSphereTriangleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
        : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId = HK_INVALID_CONTACT_POINT;
        const hkpTriangleShape *triB = static_cast<const hkpTriangleShape *>(bodyB.getShape());
        hkpCollideTriangleUtil::setupClosestPointTriangleCache(&triB->getVertex(0), m_closestPointTriangleCache);
    }
    static hkpCollisionAgent *HK_CALL createSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId;                                              // +0xC
    hkpCollideTriangleUtil::ClosestPointTriangleCache m_closestPointTriangleCache;  // +0x10
};

hkpCollisionAgent *HK_CALL hkpSphereTriangleAgent::createSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereTriangleAgent *agent = new hkpSphereTriangleAgent(bodyA, bodyB, input, mgr);
    return agent;
}
