// finishLoadedObjecthkpPlaneShape: the finish function in hkpPlaneShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpShape.h"

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

class hkpPlaneShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpPlaneShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag) { m_type = hkpShapeType(0x1d); }
};

void HK_CALL finishLoadedObjecthkpPlaneShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPlaneShape(f);
}
