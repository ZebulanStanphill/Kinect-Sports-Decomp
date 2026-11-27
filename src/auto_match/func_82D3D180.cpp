// hkpConvexTransformShape::hkpConvexTransformShape(const hkpConvexShape *, const hkTransform &,
// hkpShapeContainer::ReferencePolicy) (Physics/Collide/Shape/Convex/ConvexTransform/hkpConvexTransformShape.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConvexTransformShape.h"

hkpConvexTransformShape::hkpConvexTransformShape(const hkpConvexShape *s, const hkTransform &t,
                                                                 hkpShapeContainer::ReferencePolicy policy)
    : hkpConvexTransformShapeBase(HK_SHAPE_CONVEX_TRANSFORM, s->m_radius, s, policy)
{
    m_transform = t;
}
