// finishLoadedObjecthkpPhysicsData: the finish function in hkpPhysicsData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpPhysicsData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsData.h"

void HK_CALL finishLoadedObjecthkpPhysicsData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPhysicsData(f);
}
