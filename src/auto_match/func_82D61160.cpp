// hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpTriangleShape.h"
#include "havok/hkpCollideTriangleUtil.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

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
