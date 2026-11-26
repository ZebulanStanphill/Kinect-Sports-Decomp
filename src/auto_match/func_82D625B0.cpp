// hkpCapsuleTriangleAgent::createCapsuleTriangleAgent, creation function: new hkpCapsuleTriangleAgent with the constructor inlined.
#include "havok/hkpCapsuleTriangleAgent.h"

hkpCollisionAgent *HK_CALL hkpCapsuleTriangleAgent::createCapsuleTriangleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpCapsuleTriangleAgent *agent = new hkpCapsuleTriangleAgent(bodyA, bodyB, input, mgr);
    return agent;
}
