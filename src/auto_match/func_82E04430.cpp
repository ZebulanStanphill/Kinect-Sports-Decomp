// getVtablehkxVertexSelectionChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxVertexSelectionChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxVertexSelectionChannel -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxVertexSelectionChannel : public hkReferencedObject {
public:
    hkxVertexSelectionChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxVertexSelectionChannel()
{
    union {
        void *ptr;
        char buf[sizeof(hkxVertexSelectionChannel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxVertexSelectionChannel(f);
    return u.ptr;
}
