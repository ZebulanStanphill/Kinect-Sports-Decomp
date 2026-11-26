// getVtablehkpSphereShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSphereShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSphereShape -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpSphereShape.h"

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
