// getVtablehkxAnimatedVector, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAnimatedVector (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAnimatedVector -> hkReferencedObject -> hkBaseObject.
#include "havok/hkxAnimatedVector.h"

const void *HK_CALL getVtablehkxAnimatedVector()
{
    union {
        void *ptr;
        char buf[sizeof(hkxAnimatedVector)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxAnimatedVector(f);
    return u.ptr;
}
