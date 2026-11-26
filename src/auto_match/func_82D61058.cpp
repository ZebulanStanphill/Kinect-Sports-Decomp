// hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent, creation function: new hkpMultiSphereTriangleAgent with the constructor inlined.
#include "havok/hkpMultiSphereTriangleAgent.h"

hkpCollisionAgent *HK_CALL hkpMultiSphereTriangleAgent::createMultiSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiSphereTriangleAgent *agent = new hkpMultiSphereTriangleAgent(bodyA, bodyB, input, mgr);
    return agent;
}
