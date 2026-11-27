// hkpMountedBallGun (Physics/Utilities/Weapons/hkpMountedBallGun.h, the folder of its class unit), 0x70
// bytes: an hkpBallGun fired from a fixed position. The constructor (82DF2138) sets m_type =
// WEAPON_TYPE_MOUNTEDBALLGUN, m_name = "MountedBallGun" and the vector at +0x60; fireGun (82DF21A0) fires from
// it. The member name follows Havok's header.
#ifndef HAVOK_HKPMOUNTEDBALLGUN_H
#define HAVOK_HKPMOUNTEDBALLGUN_H

#include "havok/hkpBallGun.h"

// ??_7hkpMountedBallGun@@6B@ differs from hkpBallGun's only in fireGun (82DF21A0); its slot 0 is
// hkpBallGun's deleting destructor (82DEF9D0), so the class declares no destructor.
class hkpMountedBallGun : public hkpBallGun {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    hkpMountedBallGun();
    // Out of line (82DF20E0).
    hkpMountedBallGun(hkFinishLoadedObjectFlag flag);
    virtual void fireGun(hkpWorld *world, const hkTransform &viewTransform);

    hkVector4 m_position;   // +0x60
};

#endif
