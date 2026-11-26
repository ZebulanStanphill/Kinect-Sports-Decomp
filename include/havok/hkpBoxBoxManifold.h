// hkpBoxBoxManifold (Physics/Internal/Collide/BoxBox/hkpBoxBoxManifold.h, Havok's path), 0x40 bytes, 16-byte
// aligned: the contact points the box-box agent keeps between frames. hkpBoxBoxAgent holds one at +0x10 (after
// the 0xC of hkpCollisionAgent, so the manifold is aligned); the box-box agent3 (82D67EF8) keeps one as its
// agent data and steps over sizeof(hkpBoxBoxManifold).
// The constructor is out of line and keeps its fn_ name (fn_82D781D0, a C unit): it clears the second half-word
// of the eight 4-byte points and the three bytes at +0x20..+0x22. The agent3 reads m_numPoints (+0x21) after
// the collision detection (fn_82D7A510) has filled the manifold. What the rest of the manifold holds is not
// known. The names m_contactPoints and m_numPoints follow Havok's header.
#ifndef HAVOK_HKPBOXBOXMANIFOLD_H
#define HAVOK_HKPBOXBOXMANIFOLD_H

#include "havok/hkBase.h"

struct hkpBoxBoxManifold;
extern "C" void fn_82D781D0(hkpBoxBoxManifold *self);   // hkpBoxBoxManifold::hkpBoxBoxManifold

struct __declspec(align(16)) hkpBoxBoxManifold {
    struct ContactPoint {
        hkUint16 m_data0;   // +0x0, not known
        hkUint16 m_data2;   // +0x2, cleared by the constructor
    };

    HK_FORCE_INLINE hkpBoxBoxManifold() { fn_82D781D0(this); }

    ContactPoint m_contactPoints[8];   // +0x0
    hkUint8 m_data20;                  // +0x20, cleared by the constructor
    hkUint8 m_numPoints;               // +0x21
    hkUint8 m_data22;                  // +0x22, cleared by the constructor
    hkUint8 m_data23[0x1D];            // +0x23, not known
};

#endif
