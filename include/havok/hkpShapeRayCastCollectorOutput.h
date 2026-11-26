// hkpShapeRayCastCollectorOutput (Physics/Collide/Shape/Query/hkpShapeRayCastCollectorOutput.h), 0x20 bytes:
// what a ray cast reports to an hkpRayHitCollector (hkpRayHitCollector::addRayHit takes it). The layout is the
// one the units agree on (82DF0C68, 8309C028, 82DB0A00): the hit normal, the hit fraction at +0x10, the extra
// info at +0x14, then eight bytes of padding. The member names follow Havok's header.
//
// reset() stores 1.0f to the fraction and -1 to the extra info (82DF0C68, 8309C028). 82DB0A00 has the other
// form of the inline constructor, which takes the 1.0f as an hkReal parameter; it keeps a local copy.
#ifndef HAVOK_HKPSHAPERAYCASTCOLLECTOROUTPUT_H
#define HAVOK_HKPSHAPERAYCASTCOLLECTOROUTPUT_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

struct hkpShapeRayCastCollectorOutput {
    HK_FORCE_INLINE hkpShapeRayCastCollectorOutput() { reset(); }
    HK_FORCE_INLINE void reset()
    {
        m_hitFraction = 1.0f;
        m_extraInfo = -1;
    }

    hkVector4 m_normal;     // +0x0
    hkReal m_hitFraction;   // +0x10
    int m_extraInfo;        // +0x14
    int m_pad[2];           // +0x18
};

#endif
