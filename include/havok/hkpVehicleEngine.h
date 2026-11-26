// hkpVehicleEngine (Physics/Vehicle/Engine/hkpVehicleEngine.h): the engine component's interface.
// 0x8 bytes. No vtable of its own in the game (it is abstract; only its RTTI, ??_R3hkpVehicleEngine@@8); the
// destructor is the implicit one.
#ifndef HAVOK_HKPVEHICLEENGINE_H
#define HAVOK_HKPVEHICLEENGINE_H

#include "havok/hkpVehicleDriverInput.h"
#include "havok/hkpVehicleTransmission.h"

class hkpVehicleInstance;

// One virtual function after hkReferencedObject's: calcEngineInfo (+0xC; hkpVehicleDefaultEngine's is
// 82DFB678: it scales the torque by the filtered input's m_acceleratorPedalInput, starts from the
// transmission's m_transmissionRPM and writes the torque at +0x0 and the RPM at +0x4 of its output).
class hkpVehicleEngine : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // What calcEngineInfo fills (the torque at +0x0, the RPM at +0x4); not declared further here.
    struct EngineOutput;
    hkpVehicleEngine() {}
    hkpVehicleEngine(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void calcEngineInfo(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                const hkpVehicleDriverInput::FilteredDriverInputOutput &filteredInfoOutput,
                                const hkpVehicleTransmission::TransmissionOutput &transmissionInfo,
                                EngineOutput &engineOutput) = 0;   // +0xC
};

#endif
