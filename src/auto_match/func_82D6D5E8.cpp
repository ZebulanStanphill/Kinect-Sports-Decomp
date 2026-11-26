// hkpMultiSphereAgent::createMultiSphereAAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D6D6B8, next to
// createMultiSphereBAgent), allocating an hkpMultiSphereAgent (0x38 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpMultiSphereAgent.h"

hkpCollisionAgent *HK_CALL hkpMultiSphereAgent::createMultiSphereAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiSphereAgent *agent = new hkpMultiSphereAgent(bodyA, bodyB, input, mgr);
    return agent;
}
