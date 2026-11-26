// hkpSphereBoxAgent::createBoxSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereBoxAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereBoxAgent.h"

hkpCollisionAgent *HK_CALL hkpSphereBoxAgent::createBoxSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereBoxAgent *agent = new hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>(mgr);
    return agent;
}
