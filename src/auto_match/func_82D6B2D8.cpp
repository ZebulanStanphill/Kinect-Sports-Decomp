// hkpTransformAgent::updateShapeCollectionFilter (Physics/Collide/Agent/MiscAgent/Transform/hkpTransformAgent.cpp),
// its vtable's slot +0x20: body A's child body on the transform shape's transform, then the child agent's update.
#include "havok/hkpTransformAgent.h"
#include "havok/hkpTransformShape.h"

void hkpTransformAgent::updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                    const hkpCollisionInput &input,
                                                    hkCollisionConstraintOwner &constraintOwner)
{
    const hkpTransformShape *tShapeA = static_cast<const hkpTransformShape *>(bodyA.getShape());
    hkTransform t;
    t.setMul(bodyA.getTransform(), tShapeA->getTransform());
    hkpCdBody newA(&bodyA, &t);
    newA.setShape(tShapeA->getChildShape(), 0);
    m_childAgent->updateShapeCollectionFilter(newA, bodyB, input, constraintOwner);
}
