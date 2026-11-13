// cleanupLoadedObjecthkpVehicleDefaultVelocityDamper: the cleanup function in hkpVehicleDefaultVelocityDamper's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleDefaultVelocityDamper {
public:
    virtual ~hkpVehicleDefaultVelocityDamper();
};

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultVelocityDamper(void *p)
{
    static_cast<hkpVehicleDefaultVelocityDamper *>(p)->~hkpVehicleDefaultVelocityDamper();
}
