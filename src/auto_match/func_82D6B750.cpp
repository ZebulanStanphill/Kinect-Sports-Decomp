// hkpSymmetricAgent<hkpTransformAgent>::getPenetrations (virtual): flips the bodies and the collector, with
// hkpTransformAgent::getPenetrations inlined (transform A's body by the shape's transform, then ask the child agent).
// hkpTransformAgent.cpp defines getPenetrations next to this function, so the unit defines it too.
#include "havok/hkpSymmetricAgent.h"
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

template void hkpSymmetricAgent<hkpTransformAgent>::getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                         const hkpCollisionInput &input,
                                                         hkpCdBodyPairCollector &collector);
