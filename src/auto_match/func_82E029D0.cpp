// getVtablehkxIndexBuffer, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxIndexBuffer (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxIndexBuffer -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxIndexBuffer : public hkReferencedObject {
public:
    hkxIndexBuffer(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxIndexBuffer()
{
    union {
        void *ptr;
        char buf[sizeof(hkxIndexBuffer)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxIndexBuffer(f);
    return u.ptr;
}
