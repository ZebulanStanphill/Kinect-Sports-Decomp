// finishLoadedObjecthkxAnimatedQuaternion: the finish function in hkxAnimatedQuaternion's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxAnimatedQuaternion -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxAnimatedQuaternion.h"

void HK_CALL finishLoadedObjecthkxAnimatedQuaternion(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxAnimatedQuaternion(f);
}
