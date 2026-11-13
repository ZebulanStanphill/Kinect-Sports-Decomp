// finishLoadedObjecthkpMultiSphereShape: the finish function in hkpMultiSphereShape's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). The finish constructors set
// m_type (hkpShape's clears it first when finishing).
#include "havok/hkpShape.h"

class hkpMultiSphereShape : public hkpSphereRepShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpMultiSphereShape(hkFinishLoadedObjectFlag flag) : hkpSphereRepShape(flag) { m_type = hkpShapeType(0x16); }
};

void HK_CALL finishLoadedObjecthkpMultiSphereShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpMultiSphereShape(f);
}
