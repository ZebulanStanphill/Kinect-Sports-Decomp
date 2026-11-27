// hkpTransformAgent::staticLinearCast (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp): body A's
// child body on the transform shape's transform, then the dispatcher's linear cast function for the child shape
// against body B. registerAgent (82D6B470) stores it with the two other static queries for the unflipped pair.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"
#include "havok/hkpCollisionDispatcher.h"

void hkpTransformAgent::staticLinearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                         const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                         hkpCdPointCollector *startCollector)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    const hkpCollisionDispatcher *dispatcher = input.m_dispatcher;
    int agentType = dispatcher->m_agent2Types[newA.getShape()->m_type][bodyB.getShape()->m_type];
    dispatcher->m_agent2Func[agentType].m_linearCastFunc(newA, bodyB, input, collector, startCollector);
}
