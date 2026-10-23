// getVtablehkxAnimatedMatrix, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAnimatedMatrix (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAnimatedMatrix -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxAnimatedMatrix : public hkReferencedObject {
public:
    hkxAnimatedMatrix(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

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
