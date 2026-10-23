// getVtablehkpSerializedDisplayMarker, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSerializedDisplayMarker (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSerializedDisplayMarker -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpSerializedDisplayMarker : public hkReferencedObject {
public:
    hkpSerializedDisplayMarker(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpSerializedDisplayMarker()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSerializedDisplayMarker)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSerializedDisplayMarker(f);
    return u.ptr;
}
