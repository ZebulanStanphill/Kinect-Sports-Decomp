// hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection(const hkpVehicleInstance *)
// (Physics/Vehicle/WheelCollide/LinearCast/hkpVehicleLinearCastWheelCollide.cpp): for each wheel, updates its
// state, computes the box of the wheel's cast and moves the wheel's phantom to it. Havok code, /O2.
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" {
// hkpVehicleLinearCastWheelCollide::updateWheelState
void fn_82E00628(hkpVehicleLinearCastWheelCollide *self, const hkpVehicleInstance *vehicle, hkUint8 wheelNum);
// hkpVehicleLinearCastWheelCollide::calcAabbOfWheel
void fn_82E00530(const hkpVehicleLinearCastWheelCollide *self, const hkpVehicleInstance *vehicle, hkUint8 wheelNum,
                 hkAabb &aabbOut);
}

extern "C" void fn_82E00870(hkpVehicleLinearCastWheelCollide *self, const hkpVehicleInstance *vehicle)
{
    const int numWheels = self->m_wheelStates.getSize();
    for (hkUint8 i = 0; i < numWheels; ++i) {
        fn_82E00628(self, vehicle, i);
        hkAabb aabb;
        fn_82E00530(self, vehicle, i, aabb);
        self->m_wheelStates[i].m_phantom->setAabb(aabb);
    }
}
