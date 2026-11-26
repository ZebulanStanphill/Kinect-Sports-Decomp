// hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(hkFinishLoadedObjectFlag), out of line. The finish
// function fn_82DF9E68, a Matching C unit, calls it by its fn_ name, so it keeps that name and runs the constructor
// with MSVC's explicit constructor call (a placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpVehicleWheelCollide.h"

HK_FORCE_INLINE hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(hkFinishLoadedObjectFlag f)
    : hkpVehicleWheelCollide(f), m_wheelStates(f), m_rejectChassisListener(f)
{
    if (f.m_finishing)
        m_type = LINEAR_CAST_WHEEL_COLLIDE;
}

extern "C" hkpVehicleLinearCastWheelCollide *fn_82DF9E98(hkpVehicleLinearCastWheelCollide *self, hkFinishLoadedObjectFlag f)
{
    self->hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(f);
    return self;
}
