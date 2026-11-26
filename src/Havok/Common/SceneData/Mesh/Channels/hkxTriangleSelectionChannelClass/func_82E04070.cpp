// getVtablehkxTriangleSelectionChannel, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxTriangleSelectionChannel (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxTriangleSelectionChannel -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxTriangleSelectionChannel.h"

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
