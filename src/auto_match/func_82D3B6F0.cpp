// getVtablehkpTransformShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpTransformShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpTransformShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShape : public hkReferencedObject {
public:
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpTransformShape : public hkpShape {
public:
    hkpTransformShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

const void *HK_CALL getVtablehkpTransformShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpTransformShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpTransformShape(f);
    return u.ptr;
}
