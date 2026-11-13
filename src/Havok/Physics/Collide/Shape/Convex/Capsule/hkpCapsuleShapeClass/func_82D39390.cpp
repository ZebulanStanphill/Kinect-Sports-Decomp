// getVtablehkpCapsuleShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCapsuleShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpCapsuleShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpCapsuleShape : public hkpConvexShape {
public:
    hkpCapsuleShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) {}
};

const void *HK_CALL getVtablehkpCapsuleShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpCapsuleShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpCapsuleShape(f);
    return u.ptr;
}
