// getVtablehkpProjectileGun, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpProjectileGun (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpProjectileGun.h"

const void *HK_CALL getVtablehkpProjectileGun()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpProjectileGun)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpProjectileGun(f);
    return u.ptr;
}
