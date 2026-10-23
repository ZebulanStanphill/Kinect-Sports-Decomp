// getVtablehkpMoppCode, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpMoppCode (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpMoppCode -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpMoppCode : public hkReferencedObject {
public:
    hkpMoppCode(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpMoppCode()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMoppCode)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMoppCode(f);
    return u.ptr;
}
