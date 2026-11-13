// cleanupLoadedObjecthkpVehicleInstance: the cleanup function in hkpVehicleInstance's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleInstance {
public:
    virtual ~hkpVehicleInstance();
};

void HK_CALL cleanupLoadedObjecthkpVehicleInstance(void *p)
{
    static_cast<hkpVehicleInstance *>(p)->~hkpVehicleInstance();
}
