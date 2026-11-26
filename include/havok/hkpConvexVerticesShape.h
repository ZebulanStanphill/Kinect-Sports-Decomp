// hkpConvexVerticesShape (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.h), 0x70 bytes: a
// convex hull given by its vertices, stored transposed four at a time, and its plane equations. The members,
// offsets and types are the game's hkClass (initialiser 8312D540): m_rotatedVertices's element is the 0x30-byte
// hkpConvexVerticesShapeFourVectors there (x, y, z), which the constructor's symbol spells hkFourTransposedPoints;
// m_convexPiece points at an hkpCompressedMeshShapeConvexPiece; m_connectivity at an
// hkpConvexVerticesConnectivity.
//
// - Out of line: the constructors from a radius (82D3F218), from caller-owned vertex and plane buffers
//   (82D3F268) and from strided vertices and planes (82D3F900), the destructor (82D3F380: releases the
//   connectivity); the deleting destructor is 82D402B0.
// - The finish constructor exists in the game only as fn_82D3F338 (its unit defines it): hkpConvexShape's stores
//   HK_SHAPE_CONVEX unconditionally, then this class's stores HK_SHAPE_CONVEX_VERTICES when finishing.
// ??_7hkpConvexVerticesShape@@6B@ has hkpConvexShape's 18 slots.
#ifndef HAVOK_HKPCONVEXVERTICESSHAPE_H
#define HAVOK_HKPCONVEXVERTICESSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkFourTransposedPoints.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"
#include "havok/hkpCompressedMeshShape.h"

struct hkStridedVertices;
class hkpConvexVerticesConnectivity;

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkReal radius);   // out of line (82D3F218)
    hkpConvexVerticesShape(hkFourTransposedPoints *rotatedVertices, int numVertices, hkVector4 *planes, int numPlanes,
                           const hkAabb &aabb, hkReal radius);   // out of line (82D3F268)
    hkpConvexVerticesShape(const hkStridedVertices &vertices, const hkArray<hkVector4> &planeEquations,
                           hkReal radius);   // out of line (82D3F900)
    hkpConvexVerticesShape(hkFinishLoadedObjectFlag flag);   // fn_82D3F338
    virtual ~hkpConvexVerticesShape();   // out of line (82D3F380)

    hkVector4 m_aabbHalfExtents;                                 // +0x20
    hkVector4 m_aabbCenter;                                      // +0x30
    hkArray<hkFourTransposedPoints> m_rotatedVertices;           // +0x40
    hkInt32 m_numVertices;                                       // +0x4C
    const hkpCompressedMeshShape::ConvexPiece *m_convexPiece;   // +0x50
    hkArray<hkVector4> m_planeEquations;                         // +0x54
    const hkpConvexVerticesConnectivity *m_connectivity;         // +0x60
};

#endif
