// hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(hkFinishLoadedObjectFlag), out of line. The finish
// function fn_82DFA040, a Matching C unit, calls it by its fn_ name, so it keeps that name and runs the constructor
// with MSVC's explicit constructor call (a placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

HK_FORCE_INLINE hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(hkFinishLoadedObjectFlag f)
    : hkpVehicleWheelCollide(f), m_rejectRayChassisListener(f)
{
    if (f.m_finishing)
        m_type = RAY_CAST_WHEEL_COLLIDE;
}

extern "C" hkpVehicleRayCastWheelCollide *fn_82DFA070(hkpVehicleRayCastWheelCollide *self, hkFinishLoadedObjectFlag f)
{
    self->hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(f);
    return self;
}
