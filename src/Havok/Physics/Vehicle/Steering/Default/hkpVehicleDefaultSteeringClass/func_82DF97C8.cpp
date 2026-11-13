// cleanupLoadedObjecthkpVehicleDefaultSteering: the cleanup function in hkpVehicleDefaultSteering's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleDefaultSteering {
public:
    virtual ~hkpVehicleDefaultSteering();
};

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultSteering(void *p)
{
    static_cast<hkpVehicleDefaultSteering *>(p)->~hkpVehicleDefaultSteering();
}
