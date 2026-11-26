// hkpSphereCapsuleAgent::createSphereCapsuleAgent, creation function: new hkpSphereCapsuleAgent with the constructor inlined.
#include "havok/hkpSphereCapsuleAgent.h"

hkpCollisionAgent *HK_CALL hkpSphereCapsuleAgent::createSphereCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereCapsuleAgent *agent = new hkpSphereCapsuleAgent(mgr);
    return agent;
}
