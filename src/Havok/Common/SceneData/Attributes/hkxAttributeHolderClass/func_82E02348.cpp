// getVtablehkxAttributeHolder, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAttributeHolder (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAttributeHolder -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkxAttributeHolder : public hkReferencedObject {
public:
    hkxAttributeHolder(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkxAttributeHolder()
{
    union {
        void *ptr;
        char buf[sizeof(hkxAttributeHolder)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxAttributeHolder(f);
    return u.ptr;
}
