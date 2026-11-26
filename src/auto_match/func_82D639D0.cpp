// hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent, creation function: new hkpCapsuleCapsuleAgent with the constructor inlined.
#include "havok/hkpCapsuleCapsuleAgent.h"

hkpCollisionAgent *HK_CALL hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpCapsuleCapsuleAgent *agent = new hkpCapsuleCapsuleAgent(mgr);
    return agent;
}
