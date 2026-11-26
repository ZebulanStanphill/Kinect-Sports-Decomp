// hkpConvexPieceShape::hkpConvexPieceShape(hkReal radius) (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/
// hkpConvexPieceShape.cpp): stores HK_SHAPE_CONVEX_PIECE (0x15) and leaves the members uninitialised.
#include "havok/hkpConvexPieceShape.h"

hkpConvexPieceShape::hkpConvexPieceShape(hkReal radius) : hkpConvexShape(hkpShapeType(0x15), radius)
{
}
