// hkpPhantomAgent::createPhantomAgent (Physics/Collide/Agent/MiscAgent/Phantom/hkpPhantomAgent.cpp).
// The constructor is defined out of line in this unit, as in the original file: the compiler then knows
// it leaves r4/r5 alone and reuses bodyB in r5 after the call (an inline/COMDAT definition does not).
#include "havok/hkBase.h"
#include "havok/hkpPhantomAgent.h"

class hkpPhantomCallbackShape : public hkpShape {
public:
    virtual void phantomEnterEvent(const hkpCollidable *collidableA, const hkpCollidable *collidableB, const hkpCollisionInput &env);
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

    if (agent->m_bodyTypeA == HK_SHAPE_PHANTOM_CALLBACK) {
        hkpPhantomCallbackShape *shape = const_cast<hkpPhantomCallbackShape *>(static_cast<const hkpPhantomCallbackShape *>(bodyA.getShape()));
        shape->phantomEnterEvent(bodyA.getRootCollidable(),
                                 bodyB.getRootCollidable(), input);
        agent->m_shapeA = shape;
    }
    if (agent->m_bodyTypeB == HK_SHAPE_PHANTOM_CALLBACK) {
        hkpPhantomCallbackShape *shape = const_cast<hkpPhantomCallbackShape *>(static_cast<const hkpPhantomCallbackShape *>(bodyB.getShape()));
        shape->phantomEnterEvent(bodyB.getRootCollidable(),
                                 bodyA.getRootCollidable(), input);
        agent->m_shapeB = shape;
    }
    return agent;
}
