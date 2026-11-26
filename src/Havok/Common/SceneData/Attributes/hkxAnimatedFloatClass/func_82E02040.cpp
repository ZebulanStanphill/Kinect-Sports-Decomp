// finishLoadedObjecthkxAnimatedFloat: the finish function in hkxAnimatedFloat's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxAnimatedFloat -> hkReferencedObject -> hkBaseObject.
#include "havok/hkSceneData.h"

void HK_CALL finishLoadedObjecthkxAnimatedFloat(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxAnimatedFloat(f);
}
