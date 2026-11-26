// getVtablehkpConvexTransformShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConvexTransformShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpConvexTransformShape -> hkpConvexTransformShapeBase -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpConvexTransformShape.h"

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
