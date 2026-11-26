// hkpLinearCastInput (Physics/Collide/Query/CastUtil/hkpLinearCastInput.h), 0x20 bytes: the end
// point of a linear cast and its two tolerances, which default to HK_REAL_EPSILON
// (__real@34000000; 82DF0890 and 82E008F8 construct one).
#ifndef HAVOK_HKPLINEARCASTINPUT_H
#define HAVOK_HKPLINEARCASTINPUT_H

#include "havok/hkVector4.h"

struct hkpLinearCastInput {
    HK_FORCE_INLINE hkpLinearCastInput()
        : m_maxExtraPenetration(1.192092896e-07f), m_startPointTolerance(1.192092896e-07f) {}

    hkVector4 m_to;                  // +0x0
    hkReal m_maxExtraPenetration;    // +0x10
    hkReal m_startPointTolerance;    // +0x14
};

#endif
