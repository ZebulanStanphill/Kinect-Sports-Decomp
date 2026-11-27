// getVtablehkpMountedBallGun, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpMountedBallGun (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpMountedBallGun.h"

const void *HK_CALL getVtablehkpMountedBallGun()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpMountedBallGun)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpMountedBallGun(f);
    return u.ptr;
}
