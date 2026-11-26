// hkpVehicleDefaultSteering (Physics/Vehicle/Steering/Default/hkpVehicleDefaultSteering.h), 0x1C bytes.
// Its vtable (??_7hkpVehicleDefaultSteering@@6B@, 5 slots): the deleting destructor (82DF9888, which calls the
// implicit destructor emitted out of line, 82DF9818), hkReferencedObject's two, calcSteering (82DFB8F0: calls
// slot +0x10, then gives each wheel in m_doesWheelSteer the main angle) and calcMainSteeringAngle (82DFB860:
// the driver's steering input times m_maxSteeringAngle, reduced above m_maxSpeedFullSteeringAngle). The name
// calcMainSteeringAngle follows Havok's header. The default constructor is out of line
// (??0hkpVehicleDefaultSteering@@QAA@XZ, 82DFB988).
#ifndef HAVOK_HKPVEHICLEDEFAULTSTEERING_H
#define HAVOK_HKPVEHICLEDEFAULTSTEERING_H

#include "havok/hkpVehicleSteering.h"

class hkpVehicleDefaultSteering : public hkpVehicleSteering {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultSteering();
    hkpVehicleDefaultSteering(hkFinishLoadedObjectFlag flag) : hkpVehicleSteering(flag), m_doesWheelSteer(flag) {}
    virtual void calcSteering(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                              const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                              SteeringAnglesOutput &steeringOutput);            // +0xC
    virtual void calcMainSteeringAngle(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                       const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                                       SteeringAnglesOutput &steeringOutput);   // +0x10

    hkReal m_maxSteeringAngle;            // +0x8
    hkReal m_maxSpeedFullSteeringAngle;   // +0xC
    hkArray<hkBool> m_doesWheelSteer;     // +0x10
};

#endif
