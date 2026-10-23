// finishLoadedObjecthkpConvexTransformShape: the finish function in hkpConvexTransformShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpShape.h"

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    hkpConvexTransformShapeBase(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag), m_childShape(flag) {}

    hkpSingleShapeContainer m_childShape;   // +0x14
};

class hkpConvexTransformShape : public hkpConvexTransformShapeBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTransformShape(hkFinishLoadedObjectFlag flag) : hkpConvexTransformShapeBase(flag) { m_type = hkpShapeType(0xc); }
};

void HK_CALL finishLoadedObjecthkpConvexTransformShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexTransformShape(f);
}
