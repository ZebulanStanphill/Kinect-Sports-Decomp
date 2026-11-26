// hkpVehicleDefaultEngine (Physics/Vehicle/Engine/Default/hkpVehicleDefaultEngine.h), 0x30 bytes.
// Its vtable (??_7hkpVehicleDefaultEngine@@6B@, 4 slots): the folded trivial deleting destructor,
// hkReferencedObject's two, calcEngineInfo (82DFB678). The members are the ten reals calcEngineInfo reads
// (+0x8 to +0x2C); their names and order follow Havok's header, and 82DFB678's arithmetic agrees with them
// (the RPMs at +0x8/+0xC/+0x10, m_maxTorque scaling every factor, m_clutchSlipRPM times the pedal input).
#ifndef HAVOK_HKPVEHICLEDEFAULTENGINE_H
#define HAVOK_HKPVEHICLEDEFAULTENGINE_H

#include "havok/hkpVehicleEngine.h"

class hkpVehicleDefaultEngine : public hkpVehicleEngine {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultEngine();
    hkpVehicleDefaultEngine(hkFinishLoadedObjectFlag flag) : hkpVehicleEngine(flag) {}
    virtual void calcEngineInfo(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                                const hkpVehicleTransmission::TransmissionOutput &transmissionInfo,
                                EngineOutput &engineOutput);   // +0xC

    hkReal m_minRPM;                      // +0x8
    hkReal m_optRPM;                      // +0xC
    hkReal m_maxRPM;                      // +0x10
    hkReal m_maxTorque;                   // +0x14
    hkReal m_torqueFactorAtMinRPM;        // +0x18
    hkReal m_torqueFactorAtMaxRPM;        // +0x1C
    hkReal m_resistanceFactorAtMinRPM;    // +0x20
    hkReal m_resistanceFactorAtOptRPM;    // +0x24
    hkReal m_resistanceFactorAtMaxRPM;    // +0x28
    hkReal m_clutchSlipRPM;               // +0x2C
};

#endif
