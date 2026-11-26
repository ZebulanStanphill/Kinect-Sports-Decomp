// finishLoadedObjecthkxAttributeHolder: the finish function in hkxAttributeHolder's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxAttributeHolder -> hkReferencedObject -> hkBaseObject.
#include "havok/hkBase.h"
#include "havok/hkSceneData.h"

void HK_CALL finishLoadedObjecthkxAttributeHolder(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxAttributeHolder(f);
}
