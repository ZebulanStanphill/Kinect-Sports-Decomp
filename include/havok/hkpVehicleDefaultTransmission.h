// hkpVehicleDefaultTransmission (Physics/Vehicle/Transmission/Default/hkpVehicleDefaultTransmission.h),
// 0x34 bytes. Its vtable (??_7hkpVehicleDefaultTransmission@@6B@, 9 slots): the deleting destructor (82DF9B70,
// which calls the implicit destructor emitted out of line, 82DF9AB8), hkReferencedObject's two, then:
//   +0xC  calcTransmission           82DFBB78 (calls +0x18, +0x10, +0x14, scales the torque per wheel, calls +0x1C)
//   +0x10 calcMainTransmittedTorque  82DFBC68
//   +0x14 calcTransmissionRPM        82DFBCD0
//   +0x18 calcIsReversing            82DFBB00 (the vehicle is trying to reverse and the gear is not positive)
//   +0x1C updateCurrentGear          82DFBDC8 (shifts at m_downshiftRPM / m_upshiftRPM, m_clutchDelayTime)
//   +0x20 getCurrentRatio            82DFBB38 (m_primaryTransmissionRatio times the gear's or the reverse ratio)
// The names follow Havok's header. The default constructor is out of line
// (??0hkpVehicleDefaultTransmission@@QAA@XZ, 82DFBE78).
#ifndef HAVOK_HKPVEHICLEDEFAULTTRANSMISSION_H
#define HAVOK_HKPVEHICLEDEFAULTTRANSMISSION_H

#include "havok/hkpVehicleTransmission.h"

class hkpVehicleDefaultTransmission : public hkpVehicleTransmission {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleDefaultTransmission();
    hkpVehicleDefaultTransmission(hkFinishLoadedObjectFlag flag)
        : hkpVehicleTransmission(flag), m_gearsRatio(flag), m_wheelsTorqueRatio(flag) {}
    virtual void calcTransmission(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                  TransmissionOutput &transmissionOut);                                      // +0xC
    virtual hkReal calcMainTransmittedTorque(const hkpVehicleInstance *vehicle,
                                             const TransmissionOutput &transmissionOut) const;               // +0x10
    virtual hkReal calcTransmissionRPM(const hkpVehicleInstance *vehicle,
                                       const TransmissionOutput &transmissionOut) const;                     // +0x14
    virtual hkBool calcIsReversing(const hkpVehicleInstance *vehicle,
                                   const TransmissionOutput &transmissionOut) const;                         // +0x18
    virtual void updateCurrentGear(hkReal deltaTime, const hkpVehicleInstance *vehicle,
                                   TransmissionOutput &transmissionOut);                                     // +0x1C
    virtual hkReal getCurrentRatio(const hkpVehicleInstance *vehicle,
                                   const TransmissionOutput &transmissionOut) const;                         // +0x20

    hkReal m_downshiftRPM;                 // +0x8
    hkReal m_upshiftRPM;                   // +0xC
    hkReal m_primaryTransmissionRatio;     // +0x10
    hkReal m_clutchDelayTime;              // +0x14
    hkReal m_reverseGearRatio;             // +0x18
    hkArray<hkReal> m_gearsRatio;          // +0x1C
    hkArray<hkReal> m_wheelsTorqueRatio;   // +0x28
};

#endif
