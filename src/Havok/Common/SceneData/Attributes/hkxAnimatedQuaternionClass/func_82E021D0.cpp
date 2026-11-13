// getVtablehkxAnimatedQuaternion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAnimatedQuaternion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAnimatedQuaternion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxAnimatedQuaternion : public hkReferencedObject {
public:
    hkxAnimatedQuaternion(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxAnimatedQuaternion()
{
    union {
        void *ptr;
        char buf[sizeof(hkxAnimatedQuaternion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxAnimatedQuaternion(f);
    return u.ptr;
}
