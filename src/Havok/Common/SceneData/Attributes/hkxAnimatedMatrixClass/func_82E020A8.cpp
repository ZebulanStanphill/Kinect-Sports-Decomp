// getVtablehkxAnimatedMatrix, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAnimatedMatrix (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAnimatedMatrix -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxAnimatedMatrix.h"

const void *HK_CALL getVtablehkxAnimatedMatrix()
{
    union {
        void *ptr;
        char buf[sizeof(hkxAnimatedMatrix)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxAnimatedMatrix(f);
    return u.ptr;
}
