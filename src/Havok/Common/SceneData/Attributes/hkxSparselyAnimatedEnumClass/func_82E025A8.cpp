// getVtablehkxSparselyAnimatedEnum, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSparselyAnimatedEnum (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSparselyAnimatedEnum -> hkxSparselyAnimatedInt -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxSparselyAnimatedInt : public hkReferencedObject {
public:
    hkxSparselyAnimatedInt(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkxSparselyAnimatedEnum : public hkxSparselyAnimatedInt {
public:
    hkxSparselyAnimatedEnum(hkFinishLoadedObjectFlag flag) : hkxSparselyAnimatedInt(flag) {}
};

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
