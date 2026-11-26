// hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide (hkpVehicleRayCastWheelCollide.cpp). The member
// m_rejectRayChassisListener's implicit destructor is out of line (fn_82DFA1C8).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" {
void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::removePhantomOverlapListener
void fn_82D9A5F8(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::addPhantomOverlapListener
}

// Only what the wheel-collide code touches.
class hkpPhantom : public hkReferencedObject {
public:
    void removePhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A420(this, listener); }
    void addPhantomOverlapListener(hkpPhantomOverlapListener *listener) { fn_82D9A5F8(this, listener); }
};

class hkpAabbPhantom : public hkpPhantom {
};

hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide()
{
    if (m_phantom) {
        // Objects loaded from a packfile (m_memSizeAndFlags == 0) are not unlinked.
        if (m_memSizeAndFlags && m_phantom->m_memSizeAndFlags)
            m_phantom->removePhantomOverlapListener(&m_rejectRayChassisListener);
        m_phantom->removeReference();
    }
}
