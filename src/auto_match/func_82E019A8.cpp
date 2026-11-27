// hkpVehicleRayCastWheelCollide::calcWheelsAABB(const hkpVehicleInstance *vehicle, hkAabb &aabbOut) const
// (Physics/Vehicle/WheelCollide/RayCast/hkpVehicleRayCastWheelCollide.cpp; slot +0x34 of its vtable): the box
// around every wheel's ray, from its hard point to its end point.
#include "havok/hkpVehicleWheelCollide.h"
#include "havok/hkpVehicleData.h"
#include "havok/hkAabb.h"

void hkpVehicleRayCastWheelCollide::calcWheelsAABB(const hkpVehicleInstance *vehicle, hkAabb &aabbOut) const
{
    aabbOut.m_min.setMin4(vehicle->m_wheelsInfo[0].m_hardPointWs, vehicle->m_wheelsInfo[0].m_rayEndPointWs);
    aabbOut.m_max.setMax4(vehicle->m_wheelsInfo[0].m_hardPointWs, vehicle->m_wheelsInfo[0].m_rayEndPointWs);
    for (int i = 1; i < vehicle->m_data->m_numWheels; i++) {
        const hkpVehicleInstance::WheelInfo &wheelInfo = vehicle->m_wheelsInfo[i];
        aabbOut.m_min.setMin4(aabbOut.m_min, wheelInfo.m_rayEndPointWs);
        aabbOut.m_min.setMin4(aabbOut.m_min, wheelInfo.m_hardPointWs);
        aabbOut.m_max.setMax4(aabbOut.m_max, wheelInfo.m_rayEndPointWs);
        aabbOut.m_max.setMax4(aabbOut.m_max, wheelInfo.m_hardPointWs);
    }
}
