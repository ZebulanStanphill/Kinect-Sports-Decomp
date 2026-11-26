// hkpPlaneShape (Physics/Collide/Shape/HeightField/Plane/hkpPlaneShape.h), 0x40 bytes: a plane, seen as a height
// field, limited to an AABB. The size and members are the game's hkClass (initialiser 8312E248); the RTTI gives
// hkpHeightFieldShape as its base.
//
// The two constructors exist in the game only as fn_82D4CEB8 (from the plane and an AABB) and fn_82D4CF30 (from
// a normal, a point on the plane and the half extents); their units define them. The finish constructor stores
// HK_SHAPE_PLANE whether finishing or not, after hkpHeightFieldShape's (finishLoadedObject 82D3AC88).
// ??_7hkpPlaneShape@@6B@ has 13 slots.
#ifndef HAVOK_HKPPLANESHAPE_H
#define HAVOK_HKPPLANESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpHeightFieldShape.h"

class hkAabb;

class hkpPlaneShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpPlaneShape(const hkVector4 &plane, const hkAabb &aabb);                                     // fn_82D4CEB8
    hkpPlaneShape(const hkVector4 &direction, const hkVector4 &center, const hkVector4 &halfExtents);   // fn_82D4CF30
    hkpPlaneShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag) { m_type = HK_SHAPE_PLANE; }

    hkVector4 m_plane;             // +0x10
    hkVector4 m_aabbCenter;        // +0x20
    hkVector4 m_aabbHalfExtents;   // +0x30
};

#endif
