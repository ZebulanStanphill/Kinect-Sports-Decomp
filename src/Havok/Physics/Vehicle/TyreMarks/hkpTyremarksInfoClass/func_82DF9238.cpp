// getVtablehkpTyremarksWheel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpTyremarksWheel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpTyremarksWheel -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpTyremarksWheel : public hkReferencedObject {
public:
    hkpTyremarksWheel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpTyremarksWheel()
{
    union {
        void *ptr;
        char buf[sizeof(hkpTyremarksWheel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpTyremarksWheel(f);
    return u.ptr;
}
