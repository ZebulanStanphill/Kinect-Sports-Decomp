// hkpPhantomAgent::createPhantomAgent (Physics/Collide/Agent/MiscAgent/Phantom/hkpPhantomAgent.cpp).
// The constructor is defined out of line in this unit, as in the original file: the compiler then knows
// it leaves r4/r5 alone and reuses bodyB in r5 after the call (an inline/COMDAT definition does not).
#include "havok/hkBase.h"

class hkpContactMgr;
class hkpCollidable;
class hkpCollisionInput;
class hkpCdBody;
typedef int hkpShapeType;

class hkpShape : public hkReferencedObject {
public:
    hkpShapeType getType() const { return m_type; }
    hkUlong m_userData;    // +0x8
    hkpShapeType m_type;   // +0xC
};

class hkpPhantomCallbackShape : public hkpShape {
public:
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9();
    virtual void phantomEnterEvent(const hkpCollidable *collidableA, const hkpCollidable *collidableB, const hkpCollisionInput &env);
};

class hkpCdBody {
public:
    const hkpShape *getShape() const { return m_shape; }
    const hkpCollidable *getRootCollidable() const
    {
        const hkpCdBody *body = this;
        while (body->m_parent)
            body = body->m_parent;
        return reinterpret_cast<const hkpCollidable *>(body);
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
    m_collidableA = bodyA.getRootCollidable();
    m_collidableB = bodyB.getRootCollidable();
    m_bodyTypeA = bodyA.getShape()->getType();
    m_bodyTypeB = bodyB.getShape()->getType();
}

extern "C" hkpPhantomAgent *fn_82D6A888(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *contactMgr)
{
    hkpPhantomAgent *agent = new hkpPhantomAgent(bodyA, bodyB, contactMgr);

    if (agent->m_bodyTypeA == 30) {
        hkpPhantomCallbackShape *shape = const_cast<hkpPhantomCallbackShape *>(static_cast<const hkpPhantomCallbackShape *>(bodyA.getShape()));
        shape->phantomEnterEvent(bodyA.getRootCollidable(), bodyB.getRootCollidable(), input);
        agent->m_shapeA = shape;
    }
    if (agent->m_bodyTypeB == 30) {
        hkpPhantomCallbackShape *shape = const_cast<hkpPhantomCallbackShape *>(static_cast<const hkpPhantomCallbackShape *>(bodyB.getShape()));
        shape->phantomEnterEvent(bodyB.getRootCollidable(), bodyA.getRootCollidable(), input);
        agent->m_shapeB = shape;
    }
    return agent;
}
