// hkpTransformAgent::linearCast (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp), its vtable's
// slot +0x14: body A's child body on the transform shape's transform, then the child agent's cast.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"

void hkpTransformAgent::linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                   const hkpLinearCastCollisionInput &input, hkpCdPointCollector &collector,
                                   hkpCdPointCollector *startCollector)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    m_childAgent->linearCast(newA, bodyB, input, collector, startCollector);
}
