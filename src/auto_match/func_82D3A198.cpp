// getVtablehkpDefaultConvexListFilter, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpDefaultConvexListFilter (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpDefaultConvexListFilter -> hkpConvexListFilter -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpConvexListFilter : public hkReferencedObject {
public:
    hkpConvexListFilter(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpDefaultConvexListFilter : public hkpConvexListFilter {
public:
    hkpDefaultConvexListFilter(hkFinishLoadedObjectFlag flag) : hkpConvexListFilter(flag) {}
};

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
