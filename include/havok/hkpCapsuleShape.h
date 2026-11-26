// hkpCapsuleShape (Physics/Collide/Shape/Convex/Capsule/hkpCapsuleShape.h), 0x40 bytes: the segment from
// m_vertexA to m_vertexB, swept by a sphere of radius m_radius. The size and the two vertices (+0x20, +0x30)
// are the game's hkClass (initialiser 8312CDA0).
//
// The constructor is out of line (??0hkpCapsuleShape@@QAA@ABVhkVector4@@0M@Z, 82D3BE58); the finish
// constructor stores HK_SHAPE_CAPSULE whether finishing or not (finishLoadedObject 82D39350). The destructor
// is the implicit one: the vtable (??_7hkpCapsuleShape@@6B@, 18 slots) holds hkpShape's deleting destructor.
// getVertices and getVertex follow Havok's header (the two vertices are read as an array, 82D63AC0).
#ifndef HAVOK_HKPCAPSULESHAPE_H
#define HAVOK_HKPCAPSULESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpCapsuleShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCapsuleShape(const hkVector4 &vertexA, const hkVector4 &vertexB, hkReal radius);   // out of line (82D3BE58)
    hkpCapsuleShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_CAPSULE; }

    HK_FORCE_INLINE const hkVector4 *getVertices() const { return &m_vertexA; }
    HK_FORCE_INLINE const hkVector4 &getVertex(int i) const { return (&m_vertexA)[i]; }

    hkVector4 m_vertexA;   // +0x20
    hkVector4 m_vertexB;   // +0x30
};

#endif
