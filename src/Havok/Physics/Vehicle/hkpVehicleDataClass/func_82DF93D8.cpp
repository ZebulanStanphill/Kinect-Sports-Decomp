// cleanupLoadedObjecthkpVehicleData: the cleanup function in hkpVehicleData's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleData {
public:
    virtual ~hkpVehicleData();
};

void HK_CALL cleanupLoadedObjecthkpVehicleData(void *p)
{
    static_cast<hkpVehicleData *>(p)->~hkpVehicleData();
}
