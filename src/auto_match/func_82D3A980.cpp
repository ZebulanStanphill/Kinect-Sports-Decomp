// getVtablehkpMultiRayShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpMultiRayShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpMultiRayShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShape : public hkReferencedObject {
public:
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpMultiRayShape : public hkpShape {
public:
    hkpMultiRayShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

const void *HK_CALL getVtablehkpMultiRayShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMultiRayShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMultiRayShape(f);
    return u.ptr;
}
