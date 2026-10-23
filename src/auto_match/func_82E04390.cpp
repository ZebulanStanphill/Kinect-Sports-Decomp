// getVtablehkxVertexFloatDataChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxVertexFloatDataChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxVertexFloatDataChannel -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxVertexFloatDataChannel : public hkReferencedObject {
public:
    hkxVertexFloatDataChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxVertexFloatDataChannel()
{
    union {
        void *ptr;
        char buf[sizeof(hkxVertexFloatDataChannel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxVertexFloatDataChannel(f);
    return u.ptr;
}
