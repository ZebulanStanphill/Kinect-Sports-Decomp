// getVtablehkxTriangleSelectionChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxTriangleSelectionChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxTriangleSelectionChannel -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxTriangleSelectionChannel : public hkReferencedObject {
public:
    hkxTriangleSelectionChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxTriangleSelectionChannel()
{
    union {
        void *ptr;
        char buf[sizeof(hkxTriangleSelectionChannel)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxTriangleSelectionChannel(f);
    return u.ptr;
}
