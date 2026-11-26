// getVtablehkpSimulation, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpSimulation (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkpSimulation -> hkReferencedObject -> hkBaseObject; only the finish
// constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpSimulation.h"

const void *HK_CALL getVtablehkpSimulation()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSimulation)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSimulation(f);
    return u.ptr;
}
