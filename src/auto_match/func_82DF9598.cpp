// cleanupLoadedObjecthkpVehicleDriverInputAnalogStatus: the cleanup function in hkpVehicleDriverInputAnalogStatus's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleDriverInputAnalogStatus {
public:
    virtual ~hkpVehicleDriverInputAnalogStatus();
};

void HK_CALL cleanupLoadedObjecthkpVehicleDriverInputAnalogStatus(void *p)
{
    static_cast<hkpVehicleDriverInputAnalogStatus *>(p)->~hkpVehicleDriverInputAnalogStatus();
}
