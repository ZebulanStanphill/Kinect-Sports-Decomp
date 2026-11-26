// finishLoadedObjecthkpConvexListShape: the finish function in hkpConvexListShape's hkTypeInfo
// (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkpConvexShape at +0, hkpShapeContainer at
// +0x14. hkpShape's finish constructor clears m_type when finishing; this class's then sets it.
#include "havok/hkpConvexListShape.h"

void HK_CALL finishLoadedObjecthkpConvexListShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexListShape(f);
}
