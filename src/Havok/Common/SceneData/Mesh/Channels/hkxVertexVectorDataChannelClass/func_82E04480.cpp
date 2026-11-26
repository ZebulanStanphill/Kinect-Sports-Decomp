// getVtablehkxVertexVectorDataChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxVertexVectorDataChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxVertexVectorDataChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxVertexVectorDataChannel.h"

const void *HK_CALL getVtablehkxVertexVectorDataChannel()
{
    union {
        void *ptr;
        char buf[sizeof(hkxVertexVectorDataChannel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxVertexVectorDataChannel(f);
    return u.ptr;
}
