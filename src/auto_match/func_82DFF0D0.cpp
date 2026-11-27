// hkpVehicleManager::addVehicle(hkpVehicleInstance *vehicle) (Havok 2010, Physics/Vehicle/Manager/
// hkpVehicleManager.cpp; slot +0xC of ??_7hkpVehicleManager@@6B@): keeps a reference and registers the vehicle.
#include "havok/hkpVehicleManager.h"
#include "havok/hkpVehicleInstance.h"

void hkpVehicleManager::addVehicle(hkpVehicleInstance *vehicle)
{
    vehicle->addReference();
    m_registeredVehicles.pushBack(vehicle);
}
