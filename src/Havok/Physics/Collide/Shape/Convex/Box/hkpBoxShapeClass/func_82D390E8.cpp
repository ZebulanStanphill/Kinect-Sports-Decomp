// finishLoadedObjecthkpBoxShape: hkpBoxShape's hkTypeInfo finish function (lbl_83180590), from HK_REFLECTION_DEFINE_VIRTUAL in hkpBoxShapeClass.cpp (static in Havok).
#include "havok/hkpShape.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpBoxShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBoxShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_BOX; }

    hkVector4 m_halfExtents;   // +0x20
};

void HK_CALL finishLoadedObjecthkpBoxShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBoxShape(f);
}
