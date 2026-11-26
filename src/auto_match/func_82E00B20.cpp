// hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide (hkpVehicleLinearCastWheelCollide.cpp). The
// member m_rejectChassisListener's destructor is out of line (fn_82DFA1C8); m_wheelStates is destroyed inline.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"
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

hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide()
{
    const int numWheels = m_wheelStates.getSize();
    for (int i = 0; i < numWheels; ++i) {
        WheelState &wheelState = *(m_wheelStates.begin() + i);
        wheelState.m_shape->removeReference();
        hkpAabbPhantom *phantom = wheelState.m_phantom;
        // Objects loaded from a packfile (m_memSizeAndFlags == 0) are not unlinked.
        if (m_memSizeAndFlags && phantom->m_memSizeAndFlags)
            phantom->removePhantomOverlapListener(&m_rejectChassisListener);
        phantom->removeReference();
    }
}
