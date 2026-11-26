// hkpShapeRayCastOutput (Physics/Collide/Shape/Query/hkpShapeRayCastOutput.h), 0x50 bytes: the result of
// hkpShape::castRay, an hkpShapeRayCastCollectorOutput followed by the shape key path of the hit (8 keys at +0x20,
// the depth at +0x40). It is a struct (hkpShape::castRay's parameter mangles as UhkpShapeRayCastOutput@@). The
// layout is the units' (82DF0C68, 8309C028, 82D4CFB8); the names follow Havok's header.
//
// The constructor and _reset() set the depth to 0 and the first key to HK_INVALID_SHAPE_KEY (8309C028); reset()
// also resets the collector output (82DF0C68). setKey (82D4CFB8) stores a key at the current depth.
#ifndef HAVOK_HKPSHAPERAYCASTOUTPUT_H
#define HAVOK_HKPSHAPERAYCASTOUTPUT_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"
#include "havok/hkpShapeRayCastCollectorOutput.h"

struct hkpShapeRayCastOutput : public hkpShapeRayCastCollectorOutput {
    enum { MAX_HIERARCHY_DEPTH = 8 };
    HK_FORCE_INLINE hkpShapeRayCastOutput() { _reset(); }
    HK_FORCE_INLINE void reset()
    {
        hkpShapeRayCastCollectorOutput::reset();
        _reset();
    }
    HK_FORCE_INLINE void _reset()
    {
        m_shapeKeyIndex = 0;
        m_shapeKeys[0] = HK_INVALID_SHAPE_KEY;
    }
    HK_FORCE_INLINE void setKey(hkpShapeKey key) { m_shapeKeys[m_shapeKeyIndex] = key; }

    hkpShapeKey m_shapeKeys[MAX_HIERARCHY_DEPTH];   // +0x20
    int m_shapeKeyIndex;                            // +0x40
};

#endif
