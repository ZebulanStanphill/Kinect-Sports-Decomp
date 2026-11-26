// getVtablehkOstream, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkOstream (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkOstream -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkOstream.h"

const void *HK_CALL getVtablehkOstream()
{
    union {
        void *ptr;
        char buf[sizeof(hkOstream)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkOstream(f);
    return u.ptr;
}
