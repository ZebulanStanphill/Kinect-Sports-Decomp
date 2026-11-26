// getVtablehkpVehicleInstance (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpVehicleInstance).
#include "havok/hkpVehicleInstance.h"

const void *HK_CALL getVtablehkpVehicleInstance()
{
    union {
        void *ptr;
        char buf[sizeof(hkpVehicleInstance)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpVehicleInstance(f);
    return u.ptr;
}
