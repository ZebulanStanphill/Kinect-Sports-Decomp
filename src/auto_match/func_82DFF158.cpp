// hkpVehicleManager::~hkpVehicleManager (Physics/Vehicle/Manager/hkpVehicleManager.cpp): removes the references
// to the registered vehicles, then the array is destroyed.
#include "havok/hkpVehicleManager.h"
#include "havok/hkpVehicleInstance.h"

hkpVehicleManager::~hkpVehicleManager()
{
    const int numVehicles = m_registeredVehicles.getSize();
    for (int i = 0; i < numVehicles; i++)
        fn_82CE4118(m_registeredVehicles[i]);   // removeReference(); the direct call keeps the original lwzx operand order
}
