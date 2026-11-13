// getVtablehkpBvShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpBvShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpBvShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShape : public hkReferencedObject {
public:
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpBvShape : public hkpShape {
public:
    hkpBvShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

const void *HK_CALL getVtablehkpBvShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpBvShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBvShape(f);
    return u.ptr;
}
