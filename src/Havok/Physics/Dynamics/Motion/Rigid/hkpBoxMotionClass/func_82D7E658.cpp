// getVtablehkpBoxMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpBoxMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpBoxMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

const void *HK_CALL getVtablehkpBoxMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpBoxMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBoxMotion(f);
    return u.ptr;
}
