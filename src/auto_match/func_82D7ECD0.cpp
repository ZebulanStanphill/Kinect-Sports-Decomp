// finishLoadedObjecthkpDefaultWorldMemoryWatchDog: the finish function in hkpDefaultWorldMemoryWatchDog's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpDefaultWorldMemoryWatchDog -> hkWorldMemoryAvailableWatchDog -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {
public:
    hkWorldMemoryAvailableWatchDog(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpDefaultWorldMemoryWatchDog : public hkWorldMemoryAvailableWatchDog {
public:
    hkpDefaultWorldMemoryWatchDog(hkFinishLoadedObjectFlag flag) : hkWorldMemoryAvailableWatchDog(flag) {}
};

void HK_CALL finishLoadedObjecthkpDefaultWorldMemoryWatchDog(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDefaultWorldMemoryWatchDog(f);
}
