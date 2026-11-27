// hkpVehicleInstance::clone (Havok 2010, Physics/Vehicle/hkpVehicleInstance.cpp; slot +0x1C of
// ??_7hkpVehicleInstance@@6B@): a new instance on the first new entity, a copy of this one, with its own wheel
// collide (cloned onto the new phantoms) and device status; the shared components gain a reference. Havok's
// size checks on the two arrays are not in the game. The copy is the implicit operator= (82DFEC58, a
// NonMatching C unit), which keeps its fn_ name.
#include "havok/hkpVehicleInstance.h"
#include "havok/hkpVehicleData.h"
#include "havok/hkpVehicleDriverInput.h"
#include "havok/hkpVehicleSteering.h"
#include "havok/hkpVehicleEngine.h"
#include "havok/hkpVehicleTransmission.h"
#include "havok/hkpVehicleBrake.h"
#include "havok/hkpVehicleSuspension.h"
#include "havok/hkpVehicleAerodynamics.h"
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpTyremarksInfo.h"
#include "havok/hkpVehicleVelocityDamper.h"

extern "C" hkpVehicleInstance *fn_82DFEC58(hkpVehicleInstance *self, const hkpVehicleInstance *other);   // operator=

hkpAction *hkpVehicleInstance::clone(const hkArray<hkpEntity *> &newEntities,
                                     const hkArray<hkpPhantom *> &newPhantoms) const
{
    hkpRigidBody *chassis = (hkpRigidBody *)newEntities[0];
    hkpVehicleInstance *newV = new hkpVehicleInstance(chassis);
    fn_82DFEC58(newV, this);

    newV->m_entity = chassis;
    newV->m_world = HK_NULL;
    newV->m_island = HK_NULL;

    newV->m_wheelCollide = m_wheelCollide->clone(*chassis, newPhantoms);
    newV->m_wheelCollide->m_alreadyUsed = true;
    newV->m_deviceStatus = m_deviceStatus->clone();

    newV->m_data->addReference();
    newV->m_driverInput->addReference();
    newV->m_steering->addReference();
    newV->m_engine->addReference();
    newV->m_transmission->addReference();
    newV->m_brake->addReference();
    newV->m_suspension->addReference();
    newV->m_aerodynamics->addReference();
    newV->m_velocityDamper->addReference();
    if (m_tyreMarks)
        newV->m_tyreMarks->addReference();
    return newV;
}
