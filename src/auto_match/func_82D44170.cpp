// hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkpShapeType, hkReal, const hkpConvexShape *,
// hkpShapeContainer::ReferencePolicy) (Physics/Collide/Shape/Convex/hkpConvexTransformShapeBase.h): the child
// container adds a reference only for REFERENCE_POLICY_INCREMENT.
#include "havok/hkBase.h"
#include "havok/hkpConvexTransformShapeBase.h"

hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkpShapeType type, hkReal radius,
                                                         const hkpConvexShape *childShape,
                                                         hkpShapeContainer::ReferencePolicy ref)
    : hkpConvexShape(type, radius), m_childShape(childShape, ref)
{
}
