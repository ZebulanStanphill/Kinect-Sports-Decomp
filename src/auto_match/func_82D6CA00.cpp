// hkpShapeCollectionAgent::createListAAgent: the unflipped agent's creation function (registered by registerAgent, fn_82D6CAD0, next to
// createListBAgent), allocating an hkpShapeCollectionAgent (0x38 bytes) through the class allocator and calling its
// out-of-line constructor.
#include "havok/hkpShapeCollectionAgent.h"

hkpCollisionAgent *HK_CALL hkpShapeCollectionAgent::createListAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpShapeCollectionAgent *agent = new hkpShapeCollectionAgent(bodyA, bodyB, input, mgr);
    return agent;
}
