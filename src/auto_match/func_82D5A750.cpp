// hkpHeightFieldAgent::createAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D5A850, next to
// hkpSymmetricAgent<hkpHeightFieldAgent>::createAgent), allocating an hkpHeightFieldAgent (0x18 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpHeightFieldAgent.h"

hkpCollisionAgent *HK_CALL hkpHeightFieldAgent::createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpHeightFieldAgent *agent = new hkpHeightFieldAgent(bodyA, bodyB, input, mgr);
    return agent;
}
