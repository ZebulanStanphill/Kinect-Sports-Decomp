// getVtablehkxMeshSection, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxMeshSection (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxMeshSection -> hkReferencedObject -> hkBaseObject.
#include "havok/hkSceneData.h"

const void *HK_CALL getVtablehkxMeshSection()
{
    union {
        void *ptr;
        char buf[sizeof(hkxMeshSection)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxMeshSection(f);
    return u.ptr;
}
