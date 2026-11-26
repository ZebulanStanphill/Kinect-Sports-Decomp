// hkAabbUint32 (Common/Base/Types/Geometry/Aabb/hkAabb.h), 0x20 bytes: an
// AABB in the broad phase's integer space. hkpCollidable's BoundingVolumeData
// keeps one for each child shape (82DEB238 walks them in 0x20-byte steps), and
// begins with the same eight members itself.
#ifndef HAVOK_HKAABBUINT32_H
#define HAVOK_HKAABBUINT32_H

#include "havok/hkBaseTypes.h"

struct hkAabbUint32 {
    // The word after the minimum (the expansion bytes) is cleared as minP[3] in Havok.
    HK_FORCE_INLINE void setInvalidY()
    {
        hkUint32 *minP = m_min;
        hkUint32 *maxP = m_max;
        minP[1] = 0x7fff0000;
        minP[2] = 0x7fff0000;
        *(hkUint32 *)m_expansionMin = 0;
        maxP[1] = 0;
        maxP[2] = 0;
    }

    hkUint32 m_min[3];          // +0x0
    hkUint8 m_expansionMin[3];  // +0xC
    hkUint8 m_expansionShift;   // +0xF
    hkUint32 m_max[3];          // +0x10
    hkUint8 m_expansionMax[3];  // +0x1C
    hkUint8 m_shapeKeyByte;     // +0x1F
};

#endif
