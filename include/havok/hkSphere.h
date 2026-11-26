// hkSphere (Common/Base/Types/Geometry/Sphere/hkSphere.h), 0x10 bytes: a centre and a radius in one vector (the
// radius in w). Reflected (initialiser 8312BFC0: size 0x10, one member "pos", lbl_82131E1C). The inline functions
// are the ones the convex hull units (82D09618, 82D09808) use; their names follow Havok's header.
#ifndef HAVOK_HKSPHERE_H
#define HAVOK_HKSPHERE_H

#include "havok/hkVector4.h"

class hkSphere {
public:
    __forceinline hkSphere() {}
    __forceinline hkSphere(const hkVector4 &pos, hkReal radius)
    {
        m_pos = pos;
        m_pos(3) = radius;
    }
    __forceinline hkSphere(const hkSphere &s) { m_pos = s.m_pos; }
    __forceinline void operator=(const hkSphere &s) { m_pos = s.m_pos; }
    __forceinline const hkVector4 &getPosition() const { return m_pos; }
    __forceinline hkReal getRadius() const { return m_pos(3); }

    hkVector4 m_pos;   // +0x0
};

#endif
