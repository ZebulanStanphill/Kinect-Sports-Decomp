// hkFourTransposedPoints (Common/Base/Math/Vector/hkFourTransposedPoints.h), 0x30 bytes: four points stored
// transposed, one hkVector4 per coordinate (x of all four, then y, then z). It is a struct: the game's
// hkpConvexVerticesShape constructor is ??0hkpConvexVerticesShape@@QAA@PAUhkFourTransposedPoints@@...
// (82D3F268). The member name follows Havok's header; 8309BE28 fills m_vertices[i] from the i-th
// coordinate of four rays and 8309C028 transposes them with HK_TRANSPOSE4.
#ifndef HAVOK_HKFOURTRANSPOSEDPOINTS_H
#define HAVOK_HKFOURTRANSPOSEDPOINTS_H

#include "havok/hkVector4.h"

struct hkFourTransposedPoints {
    hkVector4 m_vertices[3];   // +0x0
};

#endif
