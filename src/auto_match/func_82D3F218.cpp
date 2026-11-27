// hkpConvexVerticesShape::hkpConvexVerticesShape(hkReal radius) (Physics/Collide/Shape/Convex/ConvexVertices/
// hkpConvexVerticesShape.cpp): the empty shape used before the vertices are set; both hkArrays start empty
// and the connectivity is null.
#include "havok/hkBase.h"
#include "havok/hkpConvexVerticesShape.h"

hkpConvexVerticesShape::hkpConvexVerticesShape(hkReal radius)
    : hkpConvexShape(HK_SHAPE_CONVEX_VERTICES, radius), m_convexPiece(HK_NULL), m_connectivity(HK_NULL)
{
}
