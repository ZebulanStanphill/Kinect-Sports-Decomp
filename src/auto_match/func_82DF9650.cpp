// cleanupLoadedObjecthkpVehicleDefaultBrake: the cleanup function in hkpVehicleDefaultBrake's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleDefaultBrake {
public:
    virtual ~hkpVehicleDefaultBrake();
};

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultBrake(void *p)
{
    static_cast<hkpVehicleDefaultBrake *>(p)->~hkpVehicleDefaultBrake();
}
