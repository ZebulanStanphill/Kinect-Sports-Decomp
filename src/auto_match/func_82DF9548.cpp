// cleanupLoadedObjecthkpVehicleDefaultAerodynamics: the cleanup function in hkpVehicleDefaultAerodynamics's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpVehicleDefaultAerodynamics {
public:
    virtual ~hkpVehicleDefaultAerodynamics();
};

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultAerodynamics(void *p)
{
    static_cast<hkpVehicleDefaultAerodynamics *>(p)->~hkpVehicleDefaultAerodynamics();
}
