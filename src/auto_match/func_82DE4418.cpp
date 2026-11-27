// getVtablehkpGravityGun, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpGravityGun (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpGravityGun.h"

const void *HK_CALL getVtablehkpGravityGun()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpGravityGun)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpGravityGun(f);
    return u.ptr;
}
