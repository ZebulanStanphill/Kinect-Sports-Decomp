// getVtablehkxEdgeSelectionChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxEdgeSelectionChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxEdgeSelectionChannel -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxEdgeSelectionChannel : public hkReferencedObject {
public:
    hkxEdgeSelectionChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxEdgeSelectionChannel()
{
    union {
        void *ptr;
        char buf[sizeof(hkxEdgeSelectionChannel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxEdgeSelectionChannel(f);
    return u.ptr;
}
