// hkpVehicleRayCastWheelCollide::clone (hkpVehicleRayCastWheelCollide.cpp), vtable slot 7: a new wheel collide for a
// cloned vehicle, using its chassis and its single phantom; the default constructor is inlined.
#include "havok/hkBase.h"
#include "havok/hkpAabbPhantom.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpVehicleWheelCollide.h"

inline hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide()
    : m_wheelCollisionFilterInfo(0), m_phantom(HK_NULL)
{
    m_alreadyUsed = false;
    m_type = RAY_CAST_WHEEL_COLLIDE;
}

hkpVehicleWheelCollide *hkpVehicleRayCastWheelCollide::clone(const hkpRigidBody &newChassis,
                                                             const hkArray<hkpPhantom *> &newPhantoms) const
{
    hkpVehicleRayCastWheelCollide *newC = new hkpVehicleRayCastWheelCollide();
    newC->m_phantom = static_cast<hkpAabbPhantom *>(newPhantoms[0]);
    newC->m_phantom->addReference();
    newC->m_phantom->removePhantomOverlapListener(const_cast<hkpRejectChassisListener *>(&m_rejectRayChassisListener));
    newC->m_phantom->addPhantomOverlapListener(&newC->m_rejectRayChassisListener);
    newC->m_rejectRayChassisListener.m_chassis = newChassis.getCollidable();
    newC->m_wheelCollisionFilterInfo = m_wheelCollisionFilterInfo;
    return newC;
}
