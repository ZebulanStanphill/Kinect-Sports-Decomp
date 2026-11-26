// finishLoadedObjecthkpTyremarksWheel: the finish function in hkpTyremarksWheel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpTyremarksWheel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpTyremarksInfo.h"

void HK_CALL finishLoadedObjecthkpTyremarksWheel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpTyremarksWheel(f);
}
