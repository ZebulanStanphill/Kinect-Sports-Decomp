// getVtablehkpBoxShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpBoxShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpBoxShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

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
