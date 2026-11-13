// getVtablehkpConvexTransformShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConvexTransformShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpConvexTransformShape -> hkpConvexTransformShapeBase -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
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

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    hkpConvexTransformShapeBase(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) {}
};

class hkpConvexTransformShape : public hkpConvexTransformShapeBase {
public:
    hkpConvexTransformShape(hkFinishLoadedObjectFlag flag) : hkpConvexTransformShapeBase(flag) {}
};

const void *HK_CALL getVtablehkpConvexTransformShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpConvexTransformShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConvexTransformShape(f);
    return u.ptr;
}
