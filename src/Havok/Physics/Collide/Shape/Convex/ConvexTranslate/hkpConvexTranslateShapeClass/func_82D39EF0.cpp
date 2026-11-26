// getVtablehkpConvexTranslateShape, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpConvexTranslateShape (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpConvexTranslateShape -> hkpConvexTransformShapeBase -> hkpConvexShape -> hkpSphereRepShape -> hkpShape -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpConvexTranslateShape.h"

const void *HK_CALL getVtablehkpConvexTranslateShape()
{
    union {
        void *ptr;
        char buf[sizeof(hkpConvexTranslateShape)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpConvexTranslateShape(f);
    return u.ptr;
}
