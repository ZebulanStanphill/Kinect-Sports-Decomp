// hkpSphereBoxAgent::createSphereBoxAgent, creation function: new hkpSphereBoxAgent with the constructor inlined.
#include "havok/hkpSphereBoxAgent.h"

hkpCollisionAgent *HK_CALL hkpSphereBoxAgent::createSphereBoxAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereBoxAgent *agent = new hkpSphereBoxAgent(mgr);
    return agent;
}
