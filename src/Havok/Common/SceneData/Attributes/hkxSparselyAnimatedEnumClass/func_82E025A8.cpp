// getVtablehkxSparselyAnimatedEnum, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSparselyAnimatedEnum (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSparselyAnimatedEnum -> hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxSparselyAnimatedEnum.h"

const void *HK_CALL getVtablehkxSparselyAnimatedEnum()
{
    union {
        void *ptr;
        char buf[sizeof(hkxSparselyAnimatedEnum)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxSparselyAnimatedEnum(f);
    return u.ptr;
}
