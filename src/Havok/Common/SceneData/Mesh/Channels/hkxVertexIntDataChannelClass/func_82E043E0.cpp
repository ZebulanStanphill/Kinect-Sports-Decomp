// getVtablehkxVertexIntDataChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxVertexIntDataChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxVertexIntDataChannel -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxVertexIntDataChannel : public hkReferencedObject {
public:
    hkxVertexIntDataChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxVertexIntDataChannel()
{
    union {
        void *ptr;
        char buf[sizeof(hkxVertexIntDataChannel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxVertexIntDataChannel(f);
    return u.ptr;
}
