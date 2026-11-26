// finishLoadedObjecthkpShapeInfo: the finish function in hkpShapeInfo's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpShapeInfo -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpShapeInfo.h"

void HK_CALL finishLoadedObjecthkpShapeInfo(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpShapeInfo(f);
}
