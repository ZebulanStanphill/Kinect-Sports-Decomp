#include "havok/hkBaseTypes.h"

struct hkpVehicleInstance_82DFBB00 { char pad[0xb0]; hkBool m_tryingToReverse; };
struct TransmissionOutput_82DFBB00 { char pad[0xe]; hkInt8 m_currentGear; };

extern "C" hkBool fn_82DFBB00(void *self, const hkpVehicleInstance_82DFBB00 *vehicle,
                               const TransmissionOutput_82DFBB00 *out)
{
    if (!vehicle->m_tryingToReverse) {
        return false;
    }
    if (out->m_currentGear > 0) return false; return true;
}
