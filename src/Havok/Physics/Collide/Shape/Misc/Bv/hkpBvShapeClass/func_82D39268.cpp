// finishLoadedObjecthkpBvShape: hkpBvShape's hkTypeInfo finish function (lbl_83180604), from HK_REFLECTION_DEFINE_VIRTUAL in hkpBvShapeClass.cpp (static in Havok).
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

void HK_CALL finishLoadedObjecthkpBvShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBvShape(f);
}
