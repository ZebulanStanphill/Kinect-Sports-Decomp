// getVtablehkpSerializedDisplayMarkerList, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSerializedDisplayMarkerList (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSerializedDisplayMarkerList -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpSerializedDisplayMarkerList : public hkReferencedObject {
public:
    hkpSerializedDisplayMarkerList(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpSerializedDisplayMarkerList()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSerializedDisplayMarkerList)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSerializedDisplayMarkerList(f);
    return u.ptr;
}
