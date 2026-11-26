// hkpSphereTriangleAgent::createSphereTriangleAgent, creation function: new hkpSphereTriangleAgent with the constructor inlined.
#include "havok/hkpSphereTriangleAgent.h"

hkpCollisionAgent *HK_CALL hkpSphereTriangleAgent::createSphereTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereTriangleAgent *agent = new hkpSphereTriangleAgent(bodyA, bodyB, input, mgr);
    return agent;
}
