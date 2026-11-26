// getVtablehkpCapsuleShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpCapsuleShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpCapsuleShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

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
