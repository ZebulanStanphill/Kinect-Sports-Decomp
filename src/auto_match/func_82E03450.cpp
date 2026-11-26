// finishLoadedObjecthkxNode: the finish function in hkxNode's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok); it runs the finish constructor on an object loaded in place. The hkStringPtr members' finish constructors are out of line (fn_82CED308).
#include "havok/hkSceneData.h"

void HK_CALL finishLoadedObjecthkxNode(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxNode(f);
}
