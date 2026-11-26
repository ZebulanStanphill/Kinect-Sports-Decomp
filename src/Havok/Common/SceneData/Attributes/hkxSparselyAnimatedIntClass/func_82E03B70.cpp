// getVtablehkxSparselyAnimatedInt, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSparselyAnimatedInt (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxSparselyAnimatedInt.h"

const void *HK_CALL getVtablehkxSparselyAnimatedInt()
{
    union {
        void *ptr;
        char buf[sizeof(hkxSparselyAnimatedInt)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxSparselyAnimatedInt(f);
    return u.ptr;
}
