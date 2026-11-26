// hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereTriangleAgent.h"

hkpCollisionAgent *HK_CALL hkpMultiSphereTriangleAgent::createTriangleMultiSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiSphereTriangleAgent *agent = new hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
