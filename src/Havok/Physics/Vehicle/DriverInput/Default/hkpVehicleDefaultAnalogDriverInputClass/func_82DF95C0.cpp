// cleanupLoadedObjecthkpVehicleDefaultAnalogDriverInput: the cleanup function in hkpVehicleDefaultAnalogDriverInput's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpVehicleDefaultAnalogDriverInput.h"

void HK_CALL cleanupLoadedObjecthkpVehicleDefaultAnalogDriverInput(void *p)
{
    static_cast<hkpVehicleDefaultAnalogDriverInput *>(p)->~hkpVehicleDefaultAnalogDriverInput();
}
