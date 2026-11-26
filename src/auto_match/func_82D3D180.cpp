// hkpConvexTransformShape::hkpConvexTransformShape(const hkpConvexShape *, const hkTransform &,
// hkpShapeContainer::ReferencePolicy) (Physics/Collide/Shape/Convex/ConvexTransform/hkpConvexTransformShape.cpp):
// known in the game only as fn_82D3D180. The header declares the constructor; it is defined here, HK_FORCE_INLINE.
#include "havok/hkBase.h"
#include "havok/hkpConvexTransformShape.h"

HK_FORCE_INLINE hkpConvexTransformShape::hkpConvexTransformShape(const hkpConvexShape *s, const hkTransform &t,
                                                                 hkpShapeContainer::ReferencePolicy policy)
    : hkpConvexTransformShapeBase(HK_SHAPE_CONVEX_TRANSFORM, s->m_radius, s, policy)
{
    m_transform = t;
}

extern "C" hkpConvexTransformShape *fn_82D3D180(hkpConvexTransformShape *self, const hkpConvexShape *s,
                                                const hkTransform &t, hkpShapeContainer::ReferencePolicy p)
{
    self->hkpConvexTransformShape::hkpConvexTransformShape(s, t, p);
    return self;
}
