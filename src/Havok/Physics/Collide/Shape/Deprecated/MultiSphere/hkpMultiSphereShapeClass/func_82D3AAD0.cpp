// getVtablehkpMultiSphereShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpMultiSphereShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpMultiSphereShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShape : public hkReferencedObject {
public:
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpSphereRepShape : public hkpShape {
public:
    hkpSphereRepShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

class hkpMultiSphereShape : public hkpSphereRepShape {
public:
    hkpMultiSphereShape(hkFinishLoadedObjectFlag flag) : hkpSphereRepShape(flag) {}
};

const void *HK_CALL getVtablehkpMultiSphereShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpMultiSphereShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMultiSphereShape(f);
    return u.ptr;
}
