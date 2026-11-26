// finishLoadedObjecthkxEnum: the finish function in hkxEnum's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxEnum -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxEnum.h"

void HK_CALL finishLoadedObjecthkxEnum(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxEnum(f);
}
