// hkpBvAgent::createBvShapeAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D6EC40,
// next to createShapeBvAgent), allocating an hkpBvAgent (0x14 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpBvAgent.h"

hkpCollisionAgent *HK_CALL hkpBvAgent::createBvShapeAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                          const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvAgent *agent = new hkpBvAgent(bodyA, bodyB, input, mgr);
    return agent;
}
