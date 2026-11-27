// hkpTransformAgent::getPenetrations (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp), its vtable's
// slot +0xC: body A's child body on the transform shape's transform, then the child agent's query.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"

void hkpTransformAgent::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                        hkpCdBodyPairCollector &collector)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    m_childAgent->getPenetrations(newA, bodyB, input, collector);
}
