// hkpVehicleFrictionStatus (Physics/Vehicle/Friction/hkpVehicleFriction.h, where Havok declares it with
// hkpVehicleFrictionDescription), 0x48 bytes: the friction solver's state of the two axles, kept in
// hkpVehicleInstance (+0x54). The member names follow Havok's header (the game has the reflection strings
// hkpVehicleFrictionStatus and hkpVehicleFrictionStatusAxisStatus).
//
// hkpVehicleInstance's constructor (82DFE070) zeroes the nine reals of each axle in order, axle 0 first,
// through r31 + 0x54 + offset: AxisStatus::init does that. (A loop, or AxisStatus constructors, leave a dead
// `addi r10, r31, 0x54` in it.) The finish constructor leaves the members alone, as the finish constructors of
// hkpVehicleInstance's other members do.
#ifndef HAVOK_HKPVEHICLEFRICTIONSTATUS_H
#define HAVOK_HKPVEHICLEFRICTIONSTATUS_H

#include "havok/hkBaseTypes.h"

struct hkpVehicleFrictionStatus {
    // 0x24 bytes
    struct AxisStatus {
        hkReal m_forward_slip_velocity;     // +0x0
        hkReal m_side_slip_velocity;        // +0x4
        hkReal m_skid_energy_density;       // +0x8
        hkReal m_side_force;                // +0xC
        hkReal m_delayed_forward_impulse;   // +0x10
        hkReal m_sideRhs;                   // +0x14
        hkReal m_forwardRhs;                // +0x18
        hkReal m_relativeSideForce;         // +0x1C
        hkReal m_relativeForwardForce;      // +0x20
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
    hkpVehicleFrictionStatus(hkFinishLoadedObjectFlag) {}

    AxisStatus m_axis[2];   // +0x0
};

#endif
