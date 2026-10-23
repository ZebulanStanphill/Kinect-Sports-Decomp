// getVtablehkpDefaultWorldMemoryWatchDog, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDefaultWorldMemoryWatchDog (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpDefaultWorldMemoryWatchDog -> hkWorldMemoryAvailableWatchDog -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {
public:
    hkWorldMemoryAvailableWatchDog(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpDefaultWorldMemoryWatchDog : public hkWorldMemoryAvailableWatchDog {
public:
    hkpDefaultWorldMemoryWatchDog(hkFinishLoadedObjectFlag flag) : hkWorldMemoryAvailableWatchDog(flag) {}
};

const void *HK_CALL getVtablehkpDefaultWorldMemoryWatchDog()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDefaultWorldMemoryWatchDog)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDefaultWorldMemoryWatchDog(f);
    return u.ptr;
}
