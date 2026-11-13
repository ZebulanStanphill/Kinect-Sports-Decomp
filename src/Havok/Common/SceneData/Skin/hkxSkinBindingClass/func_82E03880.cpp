// getVtablehkxSkinBinding, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSkinBinding (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSkinBinding -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxSkinBinding : public hkReferencedObject {
public:
    hkxSkinBinding(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxSkinBinding()
{
    union {
        void *ptr;
        char buf[sizeof(hkxSkinBinding)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxSkinBinding(f);
    return u.ptr;
}
