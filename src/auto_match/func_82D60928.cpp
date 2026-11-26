// hkpMultiRayConvexAgent::createMultiRayConvexAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D609F8, next to
// createConvexMultiRayAgent), allocating an hkpMultiRayConvexAgent (0x20 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpMultiRayConvexAgent.h"

hkpCollisionAgent *HK_CALL hkpMultiRayConvexAgent::createMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiRayConvexAgent *agent = new hkpMultiRayConvexAgent(bodyA, bodyB, input, mgr);
    return agent;
}
