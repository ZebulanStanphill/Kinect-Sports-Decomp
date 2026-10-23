// getVtablehkpBoxShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpBoxShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpBoxShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpBoxShape : public hkpConvexShape {
public:
    hkpBoxShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) {}
};

const void *HK_CALL getVtablehkpBoxShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpBoxShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBoxShape(f);
    return u.ptr;
}
