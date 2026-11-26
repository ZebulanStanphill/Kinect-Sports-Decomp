// hkpVehicleInstance (Physics/Vehicle/hkpVehicleInstance.h), 0xE0 bytes: a vehicle, the action that steps a
// chassis rigid body (hkpUnaryAction's m_entity) with its components.
//
// The layout to +0xD4 is the one the constructor (82DFE070) and the destructor (82DFE168) give: the eleven
// component pointers, then the arrays and the drive state. The destructor releases the components in the order
// +0x1C..+0x3C, +0x44, +0x9C, +0x40 and destroys the arrays at +0xC0, +0xA0, +0x48; the analog driver input
// (82DFB0E8) reads m_isReversing, the transmission (82DFBB00) m_tryingToReverse, the brake (82DFB4A0) m_data
// and m_wheelsInfo, the components the chassis at +0x18. The names follow Havok's header. The twelve bytes from
// +0xD4 are not identified.
//
// Its vtable (??_7hkpVehicleInstance@@6B@, 16 slots) starts with the deleting destructor (82DF9CF8) and
// continues with hkpAction's functions: applyAction 82DFEA48, getPhantoms 82DFBFC8 and clone 82DFE938 (which
// calls the constructor) are its own, getEntities and entityRemovedCallback are hkpUnaryAction's. The eight
// slots after them (+0x20..+0x3C: 82DFDC18, 82DFC848, 82DFC8A8, 82DFD6D0, 82DFC178, 82DFD840, 82DFD8B0,
// 82DFC270) are the class's own virtual functions; they are not identified and not declared.
//
// The constructor and the destructor exist only under fn_ names (fn_82DFE070, called by the Matching C unit
// 82DFE938; fn_82DFE168, called by the deleting destructor): they are declared here and need the symbols
// renamed before units can call them through the header.
#ifndef HAVOK_HKPVEHICLEINSTANCE_H
#define HAVOK_HKPVEHICLEINSTANCE_H

#include "havok/hkpAction.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpVehicleFrictionStatus.h"

class hkpVehicleData;
class hkpVehicleDriverInput;
class hkpVehicleSteering;
class hkpVehicleEngine;
class hkpVehicleTransmission;
class hkpVehicleBrake;
class hkpVehicleSuspension;
class hkpVehicleAerodynamics;
class hkpVehicleWheelCollide;
class hkpTyremarksInfo;
class hkpVehicleVelocityDamper;
class hkpVehicleDriverInputStatus;

class hkpVehicleInstance : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // 0xE0 bytes (the reflection string hkpVehicleInstanceWheelInfo names it). Its members are not identified.
    struct WheelInfo {
        char m_data[0xE0];
    };
    hkpVehicleInstance(hkpRigidBody *chassis);
    hkpVehicleInstance(hkFinishLoadedObjectFlag flag)
        : hkpUnaryAction(flag), m_wheelsInfo(flag), m_frictionStatus(flag), m_isFixed(flag),
          m_wheelsSteeringAngle(flag) {}
    virtual ~hkpVehicleInstance();
    virtual void applyAction(const hkStepInfo &stepInfo);                             // +0xC  82DFEA48
    virtual void getPhantoms(hkArray<hkpPhantom *> &phantomsOut);                     // +0x14 82DFBFC8
    virtual hkpAction *clone(const hkArray<hkpEntity *> &newEntities,
                             const hkArray<hkpPhantom *> &newPhantoms) const;         // +0x1C 82DFE938
    hkpRigidBody *getChassis() const { return static_cast<hkpRigidBody *>(m_entity); }

    hkpVehicleData *m_data;                          // +0x1C
    hkpVehicleDriverInput *m_driverInput;            // +0x20
    hkpVehicleSteering *m_steering;                  // +0x24
    hkpVehicleEngine *m_engine;                      // +0x28
    hkpVehicleTransmission *m_transmission;          // +0x2C
    hkpVehicleBrake *m_brake;                        // +0x30
    hkpVehicleSuspension *m_suspension;              // +0x34
    hkpVehicleAerodynamics *m_aerodynamics;          // +0x38
    hkpVehicleWheelCollide *m_wheelCollide;          // +0x3C
    hkpTyremarksInfo *m_tyreMarks;                   // +0x40
    hkpVehicleVelocityDamper *m_velocityDamper;      // +0x44
    hkArray<WheelInfo> m_wheelsInfo;                 // +0x48
    hkpVehicleFrictionStatus m_frictionStatus;       // +0x54
    hkpVehicleDriverInputStatus *m_deviceStatus;     // +0x9C
    hkArray<hkBool> m_isFixed;                       // +0xA0
    hkReal m_wheelsTimeSinceMaxPedalInput;           // +0xAC
    hkBool m_tryingToReverse;                        // +0xB0
    hkReal m_torque;                                 // +0xB4
    hkReal m_rpm;                                    // +0xB8
    hkReal m_mainSteeringAngle;                      // +0xBC
    hkArray<hkReal> m_wheelsSteeringAngle;           // +0xC0
    hkBool m_isReversing;                            // +0xCC
    hkInt8 m_currentGear;                            // +0xCD
    hkBool m_delayed;                                // +0xCE
    hkReal m_clutchDelayCountdown;                   // +0xD0
    char m_unknownD4[0xE0 - 0xD4];                   // +0xD4 (not identified)
};

#endif
