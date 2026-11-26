// finishLoadedObjecthkpBvShape: hkpBvShape's hkTypeInfo finish function (lbl_83180604), from HK_REFLECTION_DEFINE_VIRTUAL in hkpBvShapeClass.cpp (static in Havok).
#include "havok/hkpBvShape.h"

void HK_CALL finishLoadedObjecthkpBvShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBvShape(f);
}
