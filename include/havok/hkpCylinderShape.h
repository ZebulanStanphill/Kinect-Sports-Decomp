// hkpCylinderShape (Physics/Collide/Shape/Convex/Cylinder/hkpCylinderShape.h), 0x60 bytes: the cylinder
// between m_vertexA and m_vertexB with radius m_cylRadius, its edges rounded by m_radius. The members, their
// types and offsets are the game's hkClass (initialiser 8312D620).
// The destructor is the implicit one: the vtable (??_7hkpCylinderShape@@6B@, 18 slots) holds hkpShape's
// deleting destructor. The finish constructor follows the other convex shapes' (it stores the type whether
// finishing or not); no unit of the game checks it yet.
#ifndef HAVOK_HKPCYLINDERSHAPE_H
#define HAVOK_HKPCYLINDERSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpCylinderShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCylinderShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_CYLINDER; }

    hkReal m_cylRadius;                                     // +0x14
    hkReal m_cylBaseRadiusFactorForHeightFieldCollisions;   // +0x18
    hkVector4 m_vertexA;                                    // +0x20
    hkVector4 m_vertexB;                                    // +0x30
    hkVector4 m_perpendicular1;                             // +0x40
    hkVector4 m_perpendicular2;                             // +0x50
};

#endif
