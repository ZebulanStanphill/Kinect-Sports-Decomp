// finishLoadedObjecthkMemoryMeshShape: the finish function in hkMemoryMeshShape's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). Only m_name's finish constructor is out of line (fn_82CED308).
#include "havok/hkMemoryMeshShape.h"

void HK_CALL finishLoadedObjecthkMemoryMeshShape(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkMemoryMeshShape(f);
}
