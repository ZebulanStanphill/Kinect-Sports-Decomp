// hkpBvShape::~hkpBvShape (Physics/Collide/Shape/Compound/Tree/hkpBvShape.cpp).
#include "havok/hkpShape.h"

class hkpBvShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBvShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag), m_childShape(flag) { m_type = HK_SHAPE_BV; }
    virtual ~hkpBvShape();
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;

    const hkpShape *m_boundingVolumeShape;   // +0x10
    hkpSingleShapeContainer m_childShape;    // +0x14
};

hkpBvShape::~hkpBvShape()
{
    m_boundingVolumeShape->removeReference();
}
