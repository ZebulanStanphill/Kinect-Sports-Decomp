// hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide() (hkpVehicleLinearCastWheelCollide.cpp).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

extern "C" {
void fn_82D9A420(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::removePhantomOverlapListener
void fn_82D9A5F8(hkpPhantom *phantom, hkpPhantomOverlapListener *listener);   // hkpPhantom::addPhantomOverlapListener
}

// HK_REAL_EPSILON is a literal: the game reads it once from the merged constant __real@34000000, which symbols.txt
// calls lbl_82057518 (Matching C units use that name, so it cannot be renamed yet). With an extern declaration
// instead the compiler reloads it after the first store. Best: 99.7% (only the constant's name differs).

hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide()
    : m_maxExtraPenetration(1.192092896e-07f), m_startPointTolerance(1.192092896e-07f)
{
    m_alreadyUsed = false;
    m_type = LINEAR_CAST_WHEEL_COLLIDE;
}
