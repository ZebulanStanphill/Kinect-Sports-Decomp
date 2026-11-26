// finishLoadedObjecthkpDefaultWorldMemoryWatchDog: the finish function in hkpDefaultWorldMemoryWatchDog's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpDefaultWorldMemoryWatchDog -> hkWorldMemoryAvailableWatchDog -> hkReferencedObject -> hkBaseObject; only the finish constructors and the overrides are declared.
#include "havok/hkBase.h"
#include "havok/hkpDefaultWorldMemoryWatchDog.h"

void HK_CALL finishLoadedObjecthkpDefaultWorldMemoryWatchDog(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDefaultWorldMemoryWatchDog(f);
}
