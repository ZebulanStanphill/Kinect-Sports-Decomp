// getVtablehkpShapeInfo, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpShapeInfo (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpShapeInfo -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShapeInfo : public hkReferencedObject {
public:
    hkpShapeInfo(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkpShapeInfo()
{
    union {
        void *ptr;
        char buf[sizeof(hkpShapeInfo)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpShapeInfo(f);
    return u.ptr;
}
