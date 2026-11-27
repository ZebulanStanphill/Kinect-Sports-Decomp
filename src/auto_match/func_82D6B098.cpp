// hkpTransformAgent::getClosestPoints (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp), its vtable's
// slot +0x10: body A's child body on the transform shape's transform, then the child agent's query.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"

void hkpTransformAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                         hkpCdPointCollector &collector)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    m_childAgent->getClosestPoints(newA, bodyB, input, collector);
}
