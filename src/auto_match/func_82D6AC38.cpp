// hkpTransformAgent::createTransformAAgent: new hkpTransformAgent(bodyA, bodyB, input, mgr), constructor inlined.
// hkpTransformAgent (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp): its constructor (inlined into
// the creation functions) copies A's motion state (hkMotionState's copy constructor, out of line: fn_82D6B540),
// multiplies its transform by the transform shape's (hkTransform::setMul) and
// creates the child agent through the dispatcher (hkpCollisionDispatcher::getNewCollisionAgent, inlined).
#include "havok/hkBase.h"
#include "havok/hkpCollisionAgent.h"
#include "havok/hkpCollisionDispatcher.h"
#include "havok/hkpTransformShape.h"

class hkpTransformAgent : public hkpCollisionAgent {
public:
    HK_FORCE_INLINE hkpTransformAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                      hkpContactMgr *mgr)
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
    static hkpCollisionAgent *HK_CALL createTransformAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createTransformBAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                            const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkpCollisionAgent *m_childAgent;   // +0xC
};

hkpCollisionAgent *HK_CALL hkpTransformAgent::createTransformAAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                                    const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpTransformAgent *agent = new hkpTransformAgent(bodyA, bodyB, input, mgr);
    return agent;
}
