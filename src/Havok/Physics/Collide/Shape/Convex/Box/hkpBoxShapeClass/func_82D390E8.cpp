// finishLoadedObjecthkpBoxShape: hkpBoxShape's hkTypeInfo finish function (lbl_83180590), from HK_REFLECTION_DEFINE_VIRTUAL in hkpBoxShapeClass.cpp (static in Havok).
#include "havok/hkpBoxShape.h"

void HK_CALL finishLoadedObjecthkpBoxShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpBoxShape(f);
}
