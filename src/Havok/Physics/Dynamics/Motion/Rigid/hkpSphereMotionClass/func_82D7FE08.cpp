// getVtablehkpSphereMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSphereMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSphereMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

const void *HK_CALL getVtablehkpSphereMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSphereMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSphereMotion(f);
    return u.ptr;
}
