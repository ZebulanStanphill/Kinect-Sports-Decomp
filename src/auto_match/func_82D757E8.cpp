// hkpGskfAgent::hkpGskfAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *)
// (Physics/Collide/Agent/ConvexAgent/Gjk/hkpGskfAgent.cpp): hkpGskBaseAgent's constructor (out of line,
// fn_82D74A90), then the manifold member is constructed (one word cleared at +0x30). Hierarchy from the RTTI:
// hkpGskfAgent -> hkpGskBaseAgent -> hkpIterativeLinearCastAgent -> hkpCollisionAgent -> hkReferencedObject.
#include "havok/hkBase.h"
#include "havok/hkpGskfAgent.h"

hkpGskfAgent::hkpGskfAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *mgr)
    : hkpGskBaseAgent(bodyA, bodyB, mgr)
{

}
