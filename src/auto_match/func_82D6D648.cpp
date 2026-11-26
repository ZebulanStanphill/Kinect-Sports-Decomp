// hkpMultiSphereAgent::createMultiSphereBAgent: the flipped agent's creation function (registered by registerAgent), allocating
// hkpSymmetricAgent<hkpMultiSphereAgent> (0x38 bytes); its inline constructor calls hkpMultiSphereAgent's out-of-line
// constructor with the bodies swapped, then stores its own vtable.
// Havok collision agents (Physics/Collide/Agent/hkpCollisionAgent.h, hkpIterativeLinearCastAgent.h,
// Agent/Util/Symmetric/hkpSymmetricAgent.h, hkpSymmetricAgentLinearCast.h, hkpSymmetricAgentFlip*Collector.h).
// Hierarchy from the RTTI: hkpSymmetricAgent<AGENT> and hkpSymmetricAgentLinearCast<AGENT> derive from AGENT;
// the agents derive from hkpCollisionAgent (some through hkpIterativeLinearCastAgent) -> hkReferencedObject.
// hkpCollisionAgent vtable, from the hkpSymmetricAgent<..> slots that flip the bodies: +0xC getPenetrations
// (hkpSymmetricAgentFlipBodyCollector), +0x10 getClosestPoints (hkpSymmetricAgentFlipCollector), +0x14
// linearCast (hkpSymmetricAgentFlipCastCollector), +0x18 processCollision, +0x1C cleanup.
// The static flipped functions (registered with the collision dispatcher) are hkpSymmetricAgent<AGENT>'s, also for
// the agents whose instances are hkpSymmetricAgentLinearCast<AGENT> (that template only overrides virtuals).
// The creation functions are statics of each agent, defined in its .cpp next to registerAgent (which registers
// them, for example fn_82D6EC40 registers fn_82D6EBD0 with hkpSymmetricAgent<hkpBvAgent>'s statics).
// The collectors are interfaces without base class and with Havok's non-virtual class allocator; their
// constructors call reset(), which sets m_earlyOut = false / m_earlyOutDistance = HK_REAL_MAX. The game's
// HK_REAL_MAX constant is __real@7f7fffee (3.40282e38f).
#include "havok/hkpSymmetricAgent.h"
#include "havok/hkpMultiSphereAgent.h"

hkpCollisionAgent *HK_CALL hkpMultiSphereAgent::createMultiSphereBAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiSphereAgent *agent = new hkpSymmetricAgent<hkpMultiSphereAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
