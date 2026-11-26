// hkAabb (Common/Base/Types/Geometry/Aabb/hkAabb.h): an axis-aligned
// bounding box, 0x20 bytes.
#ifndef HAVOK_HKAABB_H
#define HAVOK_HKAABB_H

#include "havok/hkVector4.h"

class hkAabb {
public:
    hkVector4 m_min;   // +0x0
    hkVector4 m_max;   // +0x10
};

#endif
