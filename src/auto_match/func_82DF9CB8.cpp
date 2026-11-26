// getVtablehkpVehicleInstance (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer; the buffer's size (the frame) follows sizeof(hkpVehicleInstance).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpVehicleInstance : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpVehicleInstance(hkFinishLoadedObjectFlag f) : hkpUnaryAction(f) {}

    char m_vehicleState[0xE0 - 0x1C];   // +0x1C: component pointers, wheel arrays and drive state (only the size, 0xE0, matters here)
};

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
