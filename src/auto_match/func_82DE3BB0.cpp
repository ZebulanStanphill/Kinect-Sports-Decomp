// getVtablehkpBallGun, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for hkpBallGun (static in Havok): builds a
// finished object in a local buffer and returns its vtable pointer.
#include "havok/hkpBallGun.h"

const void *HK_CALL getVtablehkpBallGun()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkpBallGun)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpBallGun(f);
    return u.ptr;
}
