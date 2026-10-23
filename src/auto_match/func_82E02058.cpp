// getVtablehkxAnimatedFloat, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAnimatedFloat (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAnimatedFloat -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxAnimatedFloat : public hkReferencedObject {
public:
    hkxAnimatedFloat(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxAnimatedFloat()
{
    union {
        void *ptr;
        char buf[sizeof(hkxAnimatedFloat)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxAnimatedFloat(f);
    return u.ptr;
}
