// hkpVehicleDefaultTransmission::calcIsReversing (vtable slot +0x18): reversing when the vehicle is trying to
// reverse and the gear is not a forward one. It keeps its fn_ name.
#include "havok/hkpVehicleDefaultTransmission.h"
#include "havok/hkpVehicleInstance.h"

extern "C" hkBool fn_82DFBB00(const hkpVehicleDefaultTransmission *self, const hkpVehicleInstance *vehicle,
                              const hkpVehicleTransmission::TransmissionOutput *out)
{
    if (!vehicle->m_tryingToReverse) {
        return false;
    }
    if (out->m_currentGear > 0) return false; return true;
}
