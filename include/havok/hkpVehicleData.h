// hkpVehicleData (Physics/Vehicle/hkpVehicleData.h), 0x1A0 bytes: the vehicle's shared description.
// Its vtable (??_7hkpVehicleData@@6B@, 4 slots): the deleting destructor (82DF94E0, which calls the implicit
// destructor emitted out of line, 82DF9428: m_numWheelsPerAxle, then m_wheelParams), hkReferencedObject's two,
// init (82DFA980; its name and arguments follow Havok's header). The default constructor is out of line
// (??0hkpVehicleData@@QAA@XZ, 82DFAD00) and is the evidence for the offsets of the members it sets; the brake
// (82DFB4A0) reads m_numWheels and the wheels' m_radius and m_mass (0x28-byte elements). The member names
// follow Havok's header.
//
// The RTTI spells it a class (??_R0?AVhkpVehicleData@@@8), but hkpTyremarksInfo's constructor takes it as a
// struct (??0hkpTyremarksInfo@@QAA@ABUhkpVehicleData@@H@Z): MSVC mangles with the key of the definition it
// sees, so that unit (82DFA7A0) keeps a struct of its own.
#ifndef HAVOK_HKPVEHICLEDATA_H
#define HAVOK_HKPVEHICLEDATA_H

#include "havok/hkBase.h"
#include "havok/hkRotation.h"
#include "havok/hkpVehicleFrictionDescription.h"
#include "havok/hkpVehicleSuspension.h"

class hkpRigidBody;

class hkpVehicleData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    // 0x28 bytes
    struct WheelComponentParams {
        hkReal m_radius;                      // +0x0
        hkReal m_mass;                        // +0x4
        hkReal m_width;                       // +0x8
        hkReal m_friction;                    // +0xC
        hkReal m_viscosityFriction;           // +0x10
        hkReal m_maxFriction;                 // +0x14
        hkReal m_slipAngle;                   // +0x18
        hkReal m_forceFeedbackMultiplier;     // +0x1C
        hkReal m_maxContactBodyAcceleration;  // +0x20
        hkInt8 m_axle;                        // +0x24
    };
    hkpVehicleData();
    hkpVehicleData(hkFinishLoadedObjectFlag flag)
        : hkReferencedObject(flag), m_wheelParams(flag), m_numWheelsPerAxle(flag) {}
    virtual void init(const hkArray<hkpVehicleSuspension::SuspensionWheelParameters> &suspensionWheelParams,
                      const hkpRigidBody *chassis);   // +0xC

    hkVector4 m_gravity;                                  // +0x10
    hkInt8 m_numWheels;                                   // +0x20
    hkRotation m_chassisOrientation;                      // +0x30
    hkReal m_torqueRollFactor;                            // +0x60
    hkReal m_torquePitchFactor;                           // +0x64
    hkReal m_torqueYawFactor;                             // +0x68
    hkReal m_extraTorqueFactor;                           // +0x6C
    hkReal m_maxVelocityForPositionalFriction;            // +0x70
    hkReal m_chassisUnitInertiaYaw;                       // +0x74
    hkReal m_chassisUnitInertiaRoll;                      // +0x78
    hkReal m_chassisUnitInertiaPitch;                     // +0x7C
    hkReal m_frictionEqualizer;                           // +0x80
    hkReal m_normalClippingAngleCos;                      // +0x84
    hkReal m_maxFrictionSolverMassRatio;                  // +0x88
    hkArray<WheelComponentParams> m_wheelParams;          // +0x8C
    hkArray<hkInt8> m_numWheelsPerAxle;                   // +0x98
    hkpVehicleFrictionDescription m_frictionDescription;  // +0xA4
    hkVector4 m_chassisFrictionInertiaInvDiag;            // +0x180
    hkBool m_alreadyInitialised;                          // +0x190
};

#endif
