// hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide (hkpVehicleRayCastWheelCollide.cpp). The member
// m_rejectRayChassisListener's implicit destructor is out of line (fn_82DFA1C8).
#include "havok/hkBase.h"
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpVehicleWheelCollide.h"

// hkpPhantom::removePhantomOverlapListener; called directly because hkpPhantom.h does not declare the member.
extern "C" void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);

hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide()
{
    if (m_phantom) {
        // Objects loaded from a packfile (m_memSizeAndFlags == 0) are not unlinked.
        if (m_memSizeAndFlags && m_phantom->m_memSizeAndFlags)
            fn_82D9A420(m_phantom, &m_rejectRayChassisListener);
        m_phantom->removeReference();
    }
}
