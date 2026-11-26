// hkpSphereCapsuleAgent::createCapsuleSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpSphereCapsuleAgent.h"

hkpCollisionAgent *HK_CALL hkpSphereCapsuleAgent::createCapsuleSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereCapsuleAgent *agent = new hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>(mgr);
    return agent;
}
