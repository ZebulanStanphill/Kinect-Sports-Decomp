// getVtablehkxMaterial (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkSceneData.h"
#include "havok/hkMemoryResourceContainer.h"

const void *HK_CALL getVtablehkxMaterial()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkxMaterial)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxMaterial(f);
    return u.ptr;
}
