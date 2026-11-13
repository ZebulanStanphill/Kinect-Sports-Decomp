// cleanupLoadedObjecthkpVehicleDefaultEngine: the cleanup function in hkpVehicleDefaultEngine's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleDefaultEngine {
public:
    virtual ~hkpVehicleDefaultEngine();
};

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultEngine(void *p)
{
    static_cast<hkpVehicleDefaultEngine *>(p)->~hkpVehicleDefaultEngine();
}
