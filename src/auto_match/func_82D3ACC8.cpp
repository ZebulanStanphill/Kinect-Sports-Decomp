// getVtablehkpPlaneShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpPlaneShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpPlaneShape -> hkpHeightFieldShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"

class hkpShape : public hkReferencedObject {
public:
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

class hkpPlaneShape : public hkpHeightFieldShape {
public:
    hkpPlaneShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag) {}
};

const void *HK_CALL getVtablehkpPlaneShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpPlaneShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpPlaneShape(f);
    return u.ptr;
}
