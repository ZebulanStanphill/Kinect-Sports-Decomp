// getVtablehkxSkinBinding, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkxSkinBinding (static in Havok):
// builds a finished object in a local buffer and returns its vtable pointer.
// Hierarchy from the RTTI: hkxSkinBinding -> hkReferencedObject -> hkBaseObject.
#include "havok/hkBase.h"
#include "havok/hkSceneData.h"

const void *HK_CALL getVtablehkxSkinBinding()
{
    union {
        void *ptr;
        char buf[sizeof(hkxSkinBinding)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxSkinBinding(f);
    return u.ptr;
}
