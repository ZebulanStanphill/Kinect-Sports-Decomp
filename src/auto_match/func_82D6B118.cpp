// hkpTransformAgent::staticGetClosestPoints (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp):
// body A's child body on the transform shape's transform, then the dispatcher's closest points function for the
// child shape against body B.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"
#include "havok/hkpCollisionDispatcher.h"

void hkpTransformAgent::staticGetClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                              const hkpCollisionInput &input, hkpCdPointCollector &collector)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    const hkpCollisionDispatcher *dispatcher = input.m_dispatcher;
    int agentType = dispatcher->m_agent2Types[newA.getShape()->m_type][bodyB.getShape()->m_type];
    dispatcher->m_agent2Func[agentType].m_getClosestPointFunc(newA, bodyB, input, collector);
}
