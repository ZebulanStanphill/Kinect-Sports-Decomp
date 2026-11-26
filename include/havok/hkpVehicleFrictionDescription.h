// hkpVehicleFrictionDescription (Physics/Vehicle/Friction/hkpVehicleFriction.h, where Havok declares it with
// hkpVehicleFrictionStatus), 0xD0 bytes: the friction solver's description of the two axles, kept in
// hkpVehicleData (+0xA4). The layout is the one hkpVehicleData's constructor (82DFAD00) needs to place the
// members after it; the member names follow Havok's header (the game has the reflection strings
// hkpVehicleFrictionDescription and hkpVehicleFrictionDescriptionAxisDescription).
#ifndef HAVOK_HKPVEHICLEFRICTIONDESCRIPTION_H
#define HAVOK_HKPVEHICLEFRICTIONDESCRIPTION_H

#include "havok/hkBaseTypes.h"

struct hkpVehicleFrictionDescription {
    // 0x64 bytes
    struct AxisDescription {
        hkReal m_frictionCircleYtab[16];   // +0x0
        hkReal m_xStep;                    // +0x40
        hkReal m_xStart;                   // +0x44
        hkReal m_wheelSurfaceInertia;      // +0x48
        hkReal m_wheelSurfaceInertiaInv;   // +0x4C
        hkReal m_wheelChassisMassRatio;    // +0x50
        hkReal m_wheelRadius;              // +0x54
        hkReal m_wheelRadiusInv;           // +0x58
        hkReal m_wheelDownForceFactor;     // +0x5C
        hkReal m_wheelDownForceSumFactor;  // +0x60
    };
    hkReal m_wheelDistance;            // +0x0
    hkReal m_chassisMassInv;           // +0x4
    AxisDescription m_axleDescr[2];    // +0x8
};

#endif
