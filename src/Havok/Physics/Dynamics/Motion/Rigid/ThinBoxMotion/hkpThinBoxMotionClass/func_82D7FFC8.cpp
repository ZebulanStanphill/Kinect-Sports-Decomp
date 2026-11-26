// getVtablehkpThinBoxMotion, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpThinBoxMotion (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpThinBoxMotion -> hkpBoxMotion -> hkpMotion -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpMotion.h"

const void *HK_CALL getVtablehkpThinBoxMotion()
{
    union {
        void *ptr;
        char buf[sizeof(hkpThinBoxMotion)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpThinBoxMotion(f);
    return u.ptr;
}
