// hkpVehicleData::~hkpVehicleData, the implicit destructor (Physics/Vehicle/hkpVehicleData.h), emitted out of
// line and called by the deleting destructor (fn_82DF94E0): m_numWheelsPerAxle, then m_wheelParams. The
// constructor below only makes the compiler emit the vtable, and with it this destructor.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkRotation {
public:
    hkVector4 m_col[3];
};

class hkpVehicleData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_VEHICLE);
    struct WheelComponentParams {
        hkReal m_radius;
        hkReal m_mass;
        hkReal m_width;
        hkReal m_friction;
        hkReal m_viscosityFriction;
        hkReal m_maxFriction;
        hkReal m_slipAngle;
        hkReal m_forceFeedbackMultiplier;
        hkReal m_maxContactBodyAcceleration;
        hkInt8 m_axle;
    };
    hkpVehicleData() {}

    hkVector4 m_gravity;                              // +0x10
    hkInt8 m_numWheels;                               // +0x20
    hkRotation m_chassisOrientation;                  // +0x30
    hkReal m_torqueRollFactor;                        // +0x60
    hkReal m_torquePitchFactor;                       // +0x64
    hkReal m_torqueYawFactor;                         // +0x68
    hkReal m_extraTorqueFactor;                       // +0x6C
    hkReal m_maxVelocityForPositionalFriction;        // +0x70
    hkReal m_chassisUnitInertiaYaw;                   // +0x74
    hkReal m_chassisUnitInertiaRoll;                  // +0x78
    hkReal m_chassisUnitInertiaPitch;                 // +0x7C
    hkReal m_frictionEqualizer;                       // +0x80
    hkReal m_normalClippingAngleCos;                  // +0x84
    hkReal m_maxFrictionSolverMassRatio;              // +0x88
    hkArray<WheelComponentParams> m_wheelParams;      // +0x8C
    hkArray<hkInt8> m_numWheelsPerAxle;               // +0x98
};

void emitVtable_82DF9428(void *p) { new (p) hkpVehicleData; }
