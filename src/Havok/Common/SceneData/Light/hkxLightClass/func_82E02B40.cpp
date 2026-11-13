// getVtablehkxLight, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxLight (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxLight -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxLight : public hkReferencedObject {
public:
    hkxLight(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxLight()
{
    union {
        void *ptr;
        char buf[sizeof(hkxLight)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxLight(f);
    return u.ptr;
}
