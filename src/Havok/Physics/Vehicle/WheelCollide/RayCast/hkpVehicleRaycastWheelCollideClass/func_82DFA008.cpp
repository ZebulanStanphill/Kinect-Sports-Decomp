// cleanupLoadedObjecthkpVehicleRayCastWheelCollide: the cleanup function in hkpVehicleRayCastWheelCollide's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleRayCastWheelCollide {
public:
    virtual ~hkpVehicleRayCastWheelCollide();
};

void HK_CALL cleanupLoadedObjecthkpVehicleRayCastWheelCollide(void *p)
{
    static_cast<hkpVehicleRayCastWheelCollide *>(p)->~hkpVehicleRayCastWheelCollide();
}
