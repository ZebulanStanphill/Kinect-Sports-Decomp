// getVtablehkxAttributeHolder, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxAttributeHolder (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxAttributeHolder -> hkReferencedObject -> hkBaseObject.
#include "havok/hkSceneData.h"

const void *HK_CALL getVtablehkxAttributeHolder()
{
    union {
        void *ptr;
        char buf[sizeof(hkxAttributeHolder)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxAttributeHolder(f);
    return u.ptr;
}
