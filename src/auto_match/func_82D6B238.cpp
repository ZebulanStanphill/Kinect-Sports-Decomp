// hkpTransformAgent::staticGetPenetrations (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp):
// body A's child body on the transform shape's transform, then the dispatcher's penetration function for the
// child shape against body B.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"
#include "havok/hkpCollisionDispatcher.h"

void hkpTransformAgent::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdBodyPairCollector &collector)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    const hkpCollisionDispatcher *dispatcher = input.m_dispatcher;
    int agentType = dispatcher->m_agent2Types[newA.getShape()->m_type][bodyB.getShape()->m_type];
    dispatcher->m_agent2Func[agentType].m_getPenetrationsFunc(newA, bodyB, input, collector);
}
