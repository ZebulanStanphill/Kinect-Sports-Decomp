// hkpBvShape::hkpBvShape(const hkpShape *boundingVolumeShape, const hkpShape *childShape)
// (Physics/Collide/Shape/Compound/Tree/hkpBvShape.cpp): references both shapes (the child container's
// constructor first).
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpBvShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBvShape(const hkpShape *boundingVolumeShape, const hkpShape *childShape);
    virtual ~hkpBvShape();

    const hkpShape *m_boundingVolumeShape;   // +0x10
    hkpSingleShapeContainer m_childShape;    // +0x14
};

hkpBvShape::hkpBvShape(const hkpShape *boundingVolumeShape, const hkpShape *childShape)
    : hkpShape(HK_SHAPE_BV), m_boundingVolumeShape(boundingVolumeShape), m_childShape(childShape)
{
    m_boundingVolumeShape->addReference();
}
