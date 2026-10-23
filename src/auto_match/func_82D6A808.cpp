// hkpPhantomAgent::hkpPhantomAgent(const hkpCdBody &, const hkpCdBody &, hkpContactMgr *)
// (Physics/Collide/Agent/MiscAgent/Phantom/hkpPhantomAgent.cpp): keeps the root collidables and the shape types.
#include "havok/hkBase.h"

class hkpContactMgr;
class hkpCollidable;
class hkpPhantomCallbackShape;
typedef int hkpShapeType;

class hkpShape : public hkReferencedObject {
public:
    hkpShapeType getType() const { return m_type; }

    hkUlong m_userData;    // +0x8
    hkpShapeType m_type;   // +0xC
};

class hkpCdBody {
public:
    const hkpShape *getShape() const { return m_shape; }
    const hkpCdBody *getRootCollidable() const
    {
        const hkpCdBody *body = this;
        while (body->m_parent)
            body = body->m_parent;
        return body;
    }

    const hkpShape *m_shape;     // +0x0
    hkUint32 m_shapeKey;         // +0x4
    const void *m_motion;        // +0x8
    const hkpCdBody *m_parent;   // +0xC
};

class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}

    hkpContactMgr *m_contactMgr;   // +0x8
};

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
    m_collidableA = reinterpret_cast<const hkpCollidable *>(bodyA.getRootCollidable());
    m_collidableB = reinterpret_cast<const hkpCollidable *>(bodyB.getRootCollidable());
    m_bodyTypeA = bodyA.getShape()->getType();
    m_bodyTypeB = bodyB.getShape()->getType();
}
