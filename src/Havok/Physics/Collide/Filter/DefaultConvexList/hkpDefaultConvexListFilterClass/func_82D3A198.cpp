// getVtablehkpDefaultConvexListFilter, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDefaultConvexListFilter (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpDefaultConvexListFilter -> hkpConvexListFilter -> hkReferencedObject -> hkBaseObject.
#include "havok/hkpDefaultConvexListFilter.h"

const void *HK_CALL getVtablehkpDefaultConvexListFilter()
{
    union {
        void *ptr;
        char buf[sizeof(hkpDefaultConvexListFilter)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpDefaultConvexListFilter(f);
    return u.ptr;
}
