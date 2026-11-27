// getVtablehkpVehicleInstance (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a
// local buffer and returns its vtable pointer. Havok's union aligns its pointer to 16, so the buffer (and the
// frame) is sizeof(hkpVehicleInstance) = 0xD4 rounded up to 0xE0.
#include "havok/hkpVehicleInstance.h"

const void *HK_CALL getVtablehkpVehicleInstance()
{
    union {
        __declspec(align(16)) void *ptr;
        char buf[sizeof(hkpVehicleInstance)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleInstance(f);
    return u.ptr;
}
