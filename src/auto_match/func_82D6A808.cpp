// hkpPhantomAgent::hkpPhantomAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *)
// (Physics/Collide/Agent/MiscAgent/Phantom/hkpPhantomAgent.cpp): keeps the root collidables and the shape types.
#include "havok/hkBase.h"
#include "havok/hkpCollidable.h"
#include "havok/hkpCollisionAgent.h"

class hkpPhantomCallbackShape;

class hkpPhantomAgent : public hkpCollisionAgent {
public:
    hkpPhantomAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *contactMgr);

    const hkpCollidable *m_collidableA;     // +0xC
    const hkpCollidable *m_collidableB;     // +0x10
    hkpPhantomCallbackShape *m_shapeA;      // +0x14
    hkpPhantomCallbackShape *m_shapeB;      // +0x18
    hkpShapeType m_bodyTypeA;               // +0x1C
    hkpShapeType m_bodyTypeB;               // +0x20
};

hkpPhantomAgent::hkpPhantomAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, hkpContactMgr *contactMgr)
    : hkpCollisionAgent(contactMgr)
{
    m_collidableA = static_cast<const hkpCollidable *>(bodyA.getRootCollidable());
    m_collidableB = static_cast<const hkpCollidable *>(bodyB.getRootCollidable());
    m_bodyTypeA = static_cast<hkpShapeType>(bodyA.getShape()->m_type);
    m_bodyTypeB = static_cast<hkpShapeType>(bodyB.getShape()->m_type);
}
