// hkpBvAgent::updateShapeCollectionFilter (Physics/Collide/Agent/CompoundAgent/Bv/hkpBvAgent.cpp), its vtable's
// slot +0x20: forwards to the bounding volume agent with body A's bounding volume shape, then to the child agent
// (when there is one) with the child shape.
#include "havok/hkpBvAgent.h"
#include "havok/hkpBvShape.h"

void hkpBvAgent::updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                             const hkpCollisionInput &input,
                                             hkCollisionConstraintOwner &constraintOwner)
{
    const hkpBvShape *bvShape = static_cast<const hkpBvShape *>(bodyA.getShape());
    hkpCdBody newA(&bodyA);
    newA.setShape(bvShape->getBoundingVolumeShape(), HK_INVALID_SHAPE_KEY);
    m_boundingVolumeAgent->updateShapeCollectionFilter(newA, bodyB, input, constraintOwner);
    if (m_childAgent) {
        newA.setShape(bvShape->getChildShape(), 0);
        m_childAgent->updateShapeCollectionFilter(newA, bodyB, input, constraintOwner);
    }
}
