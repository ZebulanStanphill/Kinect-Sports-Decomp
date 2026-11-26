// hkpBvAgent::createShapeBvAgent: the flipped agent's creation function (registered by registerAgent), allocating
// hkpSymmetricAgent<hkpBvAgent> (0x14 bytes); its inline constructor calls hkpBvAgent's out-of-line
// constructor with the bodies swapped, then stores its own vtable.
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpBvAgent.h"

hkpCollisionAgent *HK_CALL hkpBvAgent::createShapeBvAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpBvAgent *agent = new hkpSymmetricAgent<hkpBvAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
