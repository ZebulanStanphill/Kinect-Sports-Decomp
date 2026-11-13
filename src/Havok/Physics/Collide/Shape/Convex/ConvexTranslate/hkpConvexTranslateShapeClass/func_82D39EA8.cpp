// finishLoadedObjecthkpConvexTranslateShape: the finish function in hkpConvexTranslateShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpShape.h"

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    hkpConvexTransformShapeBase(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag), m_childShape(flag) {}

    hkpSingleShapeContainer m_childShape;   // +0x14
};

class hkpConvexTranslateShape : public hkpConvexTransformShapeBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTranslateShape(hkFinishLoadedObjectFlag flag) : hkpConvexTransformShapeBase(flag) { m_type = hkpShapeType(0xb); }
};

void HK_CALL finishLoadedObjecthkpConvexTranslateShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexTranslateShape(f);
}
