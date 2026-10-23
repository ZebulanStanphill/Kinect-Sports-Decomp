// getVtablehkpSphereShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSphereShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSphereShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpConvexShape : public hkpSphereRepShape {
public:
    hkpConvexShape(hkFinishLoadedObjectFlag flag) : hkpSphereRepShape(flag) {}
};

class hkpSphereShape : public hkpConvexShape {
public:
    hkpSphereShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) {}
};

const void *HK_CALL getVtablehkpSphereShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSphereShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSphereShape(f);
    return u.ptr;
}
