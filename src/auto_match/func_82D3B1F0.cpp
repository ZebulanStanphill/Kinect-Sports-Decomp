// finishLoadedObjecthkpSingleShapeContainer: hkpSingleShapeContainer's hkTypeInfo finish function (lbl_83181458), from HK_REFLECTION_DEFINE_VIRTUAL in hkpSingleShapeContainerClass.cpp (static in Havok).
#include "havok/hkpShape.h"

void HK_CALL finishLoadedObjecthkpSingleShapeContainer(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSingleShapeContainer(f);
}
