// getVtablehkxSparselyAnimatedString, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSparselyAnimatedString (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSparselyAnimatedString -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxSparselyAnimatedString : public hkReferencedObject {
public:
    hkxSparselyAnimatedString(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxSparselyAnimatedString()
{
    union {
        void *ptr;
        char buf[sizeof(hkxSparselyAnimatedString)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxSparselyAnimatedString(f);
    return u.ptr;
}
