// finishLoadedObjecthkpTransformShape: the finish function in hkpTransformShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpShape.h"

class hkpTransformShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTransformShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag), m_childShape(flag) { m_type = hkpShapeType(0xf); }

    hkpSingleShapeContainer m_childShape;   // +0x10
};

void HK_CALL finishLoadedObjecthkpTransformShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpTransformShape(f);
}
