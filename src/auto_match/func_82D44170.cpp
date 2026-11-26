// hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkpShapeType, hkReal, const hkpConvexShape *,
// hkpShapeContainer::ReferencePolicy) (Physics/Collide/Shape/Convex/hkpConvexTransformShapeBase.h): the child
// container adds a reference only for REFERENCE_POLICY_INCREMENT.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTransformShapeBase(hkpShapeType type, hkReal radius, const hkpConvexShape *childShape,
                                hkpShapeContainer::ReferencePolicy ref);

    hkpSingleShapeContainer m_childShape;   // +0x14
    int m_childShapeSize;                   // +0x1C
};

hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkpShapeType type, hkReal radius,
                                                         const hkpConvexShape *childShape,
                                                         hkpShapeContainer::ReferencePolicy ref)
    : hkpConvexShape(type, radius), m_childShape(childShape, ref)
{
}
