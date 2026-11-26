// hkpWorldRayCastInput (Physics/Collide/Query/CastUtil/hkpWorldRayCastInput.h), 0x30 bytes: a ray to cast
// against the world. The members are those the units read (the ray casters, 82DF0C68's gravity gun); the
// constructor clears the filter settings.
#ifndef HAVOK_HKPWORLDRAYCASTINPUT_H
#define HAVOK_HKPWORLDRAYCASTINPUT_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

struct hkpWorldRayCastInput {
    HK_FORCE_INLINE hkpWorldRayCastInput() : m_enableShapeCollectionFilter(false), m_filterInfo(0) {}

    hkVector4 m_from;                       // +0x0
    hkVector4 m_to;                         // +0x10
    hkBool m_enableShapeCollectionFilter;   // +0x20
    hkUint32 m_filterInfo;                  // +0x24
};

#endif
