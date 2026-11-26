// hkpMassProperties (Physics/Utilities/Dynamics/Inertia/hkpInertiaTensorComputer.h, the path is Havok's), 0x50
// bytes: the volume, mass, centre of mass and inertia tensor that the inertia tensor computer fills in. The size
// and the members come from the game's hkClass (initialiser 831350A0, members lbl_82145160: volume +0x0, mass
// +0x4, centerOfMass +0x10, inertiaTensor +0x20). The constructor is inline and zeroes every member (823ADFB8).
#ifndef HAVOK_HKPMASSPROPERTIES_H
#define HAVOK_HKPMASSPROPERTIES_H

#include "havok/hkBase.h"
#include "havok/hkMatrix3.h"
#include "havok/hkVector4.h"

struct hkpMassProperties {
    HK_FORCE_INLINE hkpMassProperties() : m_volume(0.0f), m_mass(0.0f)
    {
        m_centerOfMass.setZero4();
        m_inertiaTensor.setZero();
    }

    hkReal m_volume;              // +0x0
    hkReal m_mass;                // +0x4
    hkVector4 m_centerOfMass;     // +0x10
    hkMatrix3 m_inertiaTensor;    // +0x20
};

#endif
