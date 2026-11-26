// hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide (hkpVehicleLinearCastWheelCollide.cpp). The
// member m_rejectChassisListener's destructor is out of line (fn_82DFA1C8); m_wheelStates is destroyed inline.
#include "havok/hkBase.h"
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"

// hkpPhantom::removePhantomOverlapListener (out of line; hkpPhantom.h does not declare it yet)
extern "C" void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);

hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide()
{
    const int numWheels = m_wheelStates.getSize();
    for (int i = 0; i < numWheels; ++i) {
        WheelState &wheelState = *(m_wheelStates.begin() + i);
        wheelState.m_shape->removeReference();
        hkpAabbPhantom *phantom = wheelState.m_phantom;
        // Objects loaded from a packfile (m_memSizeAndFlags == 0) are not unlinked.
        if (m_memSizeAndFlags && phantom->m_memSizeAndFlags)
            fn_82D9A420(phantom, &m_rejectChassisListener);
        phantom->removeReference();
    }
}
