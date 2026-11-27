// hkpVehicleCastBatchingManager::removeVehicle (Havok 2010, Physics/Vehicle/Manager/
// hkpVehicleCastBatchingManager.cpp; slot +0x10 of both batching managers' vtables): unregisters the vehicle
// (hkpVehicleManager::removeVehicle) and uncounts its wheels. It keeps its fn_ name: the one function fills the
// slot of two vtables (the linear cast and the ray cast managers inherit it). The wheel count is subtracted
// unsigned (lbz, no extsb).
#include "havok/hkpVehicleCastBatchingManager.h"
#include "havok/hkpVehicleInstance.h"
#include "havok/hkpVehicleData.h"

extern "C" void fn_82DFF3A0(hkpVehicleCastBatchingManager *self, hkpVehicleInstance *vehicle)
{
    self->hkpVehicleManager::removeVehicle(vehicle);
    self->m_totalNumWheels = self->m_totalNumWheels - (hkUint8)vehicle->m_data->m_numWheels;
}
