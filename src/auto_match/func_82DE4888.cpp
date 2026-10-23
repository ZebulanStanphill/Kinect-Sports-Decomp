// getVtablehkpPhysicsData, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPhysicsData (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPhysicsData -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpPhysicsData : public hkReferencedObject {
public:
    hkpPhysicsData(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpPhysicsData()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPhysicsData)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPhysicsData(f);
    return u.ptr;
}
