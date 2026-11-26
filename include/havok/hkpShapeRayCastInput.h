// hkpShapeRayCastInput (Physics/Collide/Shape/Query/hkpShapeRayCastInput.h), 0x30 bytes: the ray of
// hkpShape::castRay, from m_from to m_to, with the collision filter info and the shape collection filter that
// the shape collections test their children with. It is a struct (castRay's parameter mangles as
// UhkpShapeRayCastInput@@). The layout is the units' (830961F0, 830982F0, 82D4B450 reads m_filterInfo at +0x20);
// the names follow Havok's header. Nothing in the game shows members after +0x28.
//
// The constructor clears the filter info and the filter (830961F0, 830982F0).
#ifndef HAVOK_HKPSHAPERAYCASTINPUT_H
#define HAVOK_HKPSHAPERAYCASTINPUT_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"

class hkpRayShapeCollectionFilter;

struct hkpShapeRayCastInput {
    HK_FORCE_INLINE hkpShapeRayCastInput() : m_filterInfo(0), m_rayShapeCollectionFilter(HK_NULL) {}

    hkVector4 m_from;                                                // +0x0
    hkVector4 m_to;                                                  // +0x10
    hkUint32 m_filterInfo;                                           // +0x20
    const hkpRayShapeCollectionFilter *m_rayShapeCollectionFilter;   // +0x24
};

#endif
