// hkpTransformAgent::createTransformAAgent: new hkpTransformAgent(bodyA, bodyB, input, mgr), constructor inlined.
// hkpTransformAgent (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp): its constructor (inlined into
// the creation functions) copies A's motion state (hkMotionState's copy constructor, out of line: fn_82D6B540),
// multiplies its transform by the transform shape's (hkTransform::setMul) and
// creates the child agent through the dispatcher (hkpCollisionDispatcher::getNewCollisionAgent, inlined).
#include "havok/hkBase.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"

// The constructor has no symbol of its own (see hkpTransformAgent.h); it is defined here.
HK_FORCE_INLINE hkpTransformAgent::hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                     const hkpCollisionInput &input, hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    const hkpShape *childShape = tShapeA->getChildShape();
    const hkMotionState *msA = bodyA.getMotionState();
    hkMotionState ms = *msA;
    ms.getTransform().setMul(msA->getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &ms);
    newA.setShape(childShape, 0);
    m_childAgent = input.m_dispatcher->getNewCollisionAgent(newA, bodyB, input, mgr);
}

hkpCollisionAgent *HK_CALL hkpTransformAgent::createTransformAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                    const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpTransformAgent *agent = new hkpTransformAgent(bodyA, bodyB, input, mgr);
    return agent;
}
