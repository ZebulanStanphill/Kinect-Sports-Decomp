// getVtablehkpPoweredChainMapper, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPoweredChainMapper (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPoweredChainMapper -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpPoweredChainMapper : public hkReferencedObject {
public:
    hkpPoweredChainMapper(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpPoweredChainMapper()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPoweredChainMapper)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPoweredChainMapper(f);
    return u.ptr;
}
