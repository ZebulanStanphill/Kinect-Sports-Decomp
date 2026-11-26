// getVtablehkpTriangleShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpTriangleShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpTriangleShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpTriangleShape.h"

const void *HK_CALL getVtablehkpTriangleShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpTriangleShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpTriangleShape(f);
    return u.ptr;
}
