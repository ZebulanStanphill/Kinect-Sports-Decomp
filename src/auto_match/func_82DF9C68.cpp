// finishLoadedObjecthkpVehicleInstance: the finish function in hkpVehicleInstance's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
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

void HK_CALL finishLoadedObjecthkpVehicleInstance(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpVehicleInstance(f);
}
