// hkpBvTreeStreamAgent::createAgent: the unflipped agent's creation function (registered by fn_82D53F68, fn_82D54AA8 and fn_82D54B78, next to
// hkpSymmetricAgent<hkpBvTreeStreamAgent>::createAgent), allocating an hkpBvTreeStreamAgent (0x40 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpBvTreeStreamAgent.h"

hkpCollisionAgent *HK_CALL hkpBvTreeStreamAgent::createAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvTreeStreamAgent *agent = new hkpBvTreeStreamAgent(bodyA, bodyB, input, mgr);
    return agent;
}
