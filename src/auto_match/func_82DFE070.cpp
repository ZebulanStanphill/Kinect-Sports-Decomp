// hkpVehicleInstance::hkpVehicleInstance(hkpRigidBody *chassis) (Havok 2010,
// Physics/Vehicle/hkpVehicleInstance.cpp). Keeps its fn_ name: the Matching C
// unit func_82DFE938 calls it. Havok code, /O2 (flag file).
#include "havok/hkBase.h"

class hkpWorld;
class hkpSimulationIsland;
class hkpEntity;
class hkpRigidBody;

class hkpAction : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_ACTION);
    hkpWorld *m_world;               // +0x8
    hkpSimulationIsland *m_island;   // +0xC
    hkUlong m_userData;              // +0x10
    hkStringPtr m_name;              // +0x14
};

class hkpUnaryAction : public hkpAction {
public:
    hkpUnaryAction(hkpEntity *entity = HK_NULL, hkUlong userData = 0);   // ??0hkpUnaryAction@@QAA@PAVhkpEntity@@K@Z
    hkpEntity *m_entity;   // +0x18
};

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

// The two axles' status: the constructor initialises each axle explicitly
// (a loop, or AxisStatus constructors, leave no dead `addi r10, r31, 0x54`).
struct hkpVehicleFrictionStatus {
    struct AxisStatus {
        hkReal m_forward_slip_velocity;
        hkReal m_side_slip_velocity;
        hkReal m_skid_energy_density;
        hkReal m_side_force;
        hkReal m_delayed_forward_impulse;
        hkReal m_sideRhs;
        hkReal m_forwardRhs;
        hkReal m_relativeSideForce;
        hkReal m_relativeForwardForce;
        HK_FORCE_INLINE void init()
        {
            m_forward_slip_velocity = 0.0f;
            m_side_slip_velocity = 0.0f;
            m_skid_energy_density = 0.0f;
            m_side_force = 0.0f;
            m_delayed_forward_impulse = 0.0f;
            m_sideRhs = 0.0f;
            m_forwardRhs = 0.0f;
            m_relativeSideForce = 0.0f;
            m_relativeForwardForce = 0.0f;
        }
    };
    hkpVehicleFrictionStatus() { m_axis[0].init(); m_axis[1].init(); }
    AxisStatus m_axis[2];
};

struct hkpVehicleWheelInfo { char m_data[0xE0]; };   // hkpVehicleInstance::WheelInfo (0xE0 bytes)

class hkpVehicleInstance : public hkpUnaryAction {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    hkpVehicleInstance(hkpRigidBody *chassis);
    virtual ~hkpVehicleInstance();

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
    hkArray<hkpVehicleWheelInfo> m_wheelsInfo;       // +0x48
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
    char m_pad[0xE0 - 0xD4];
};

// The pointers are assigned in the body (stored after the members are built).
HK_FORCE_INLINE hkpVehicleInstance::hkpVehicleInstance(hkpRigidBody *chassis)
    : hkpUnaryAction((hkpEntity *)chassis)
{
    m_data = HK_NULL;
    m_driverInput = HK_NULL;
    m_steering = HK_NULL;
    m_engine = HK_NULL;
    m_transmission = HK_NULL;
    m_brake = HK_NULL;
    m_suspension = HK_NULL;
    m_aerodynamics = HK_NULL;
    m_wheelCollide = HK_NULL;
    m_tyreMarks = HK_NULL;
    m_velocityDamper = HK_NULL;
    m_deviceStatus = HK_NULL;
}

extern "C" hkpVehicleInstance *fn_82DFE070(hkpVehicleInstance *self, hkpRigidBody *chassis)
{
    self->hkpVehicleInstance::hkpVehicleInstance(chassis);
    return self;
}
