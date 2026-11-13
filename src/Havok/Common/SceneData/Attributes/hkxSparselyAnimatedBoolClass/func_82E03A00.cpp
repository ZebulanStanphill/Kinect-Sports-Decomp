// getVtablehkxSparselyAnimatedBool, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSparselyAnimatedBool (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSparselyAnimatedBool -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxSparselyAnimatedBool : public hkReferencedObject {
public:
    hkxSparselyAnimatedBool(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxSparselyAnimatedBool()
{
    union {
        void *ptr;
        char buf[sizeof(hkxSparselyAnimatedBool)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxSparselyAnimatedBool(f);
    return u.ptr;
}
