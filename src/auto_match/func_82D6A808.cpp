// hkpPhantomAgent::hkpPhantomAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *)
// (Physics/Collide/Agent/MiscAgent/Phantom/hkpPhantomAgent.cpp): keeps the root collidables and the shape types.
#include "havok/hkBase.h"
#include "havok/hkpPhantomAgent.h"

hkpPhantomAgent::hkpPhantomAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *contactMgr)
    : hkpCollisionAgent(contactMgr)
{
    m_collidableA = bodyA.getRootCollidable();
    m_collidableB = bodyB.getRootCollidable();
    m_bodyTypeA = bodyA.getShape()->getType();
    m_bodyTypeB = bodyB.getShape()->getType();
}
