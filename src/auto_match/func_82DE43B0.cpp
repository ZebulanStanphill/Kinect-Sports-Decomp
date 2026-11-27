// getVtablehkpFirstPersonGun, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpFirstPersonGun (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpFirstPersonGun.h"

const void *HK_CALL getVtablehkpFirstPersonGun()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpFirstPersonGun)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpFirstPersonGun(f);
    return u.ptr;
}
