// hkpConvexPieceMeshShape::~hkpConvexPieceMeshShape (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/
// hkpConvexPieceMeshShape.cpp). RTTI: hkpShapeCollection (hkpShape at +0, hkpShapeContainer at +0x10).
#include "havok/hkpConvexPieceStreamData.h"
#include "havok/hkpConvexPieceMeshShape.h"

hkpConvexPieceMeshShape::~hkpConvexPieceMeshShape()
{
    m_displayMesh->removeReference();
    m_convexPieceStream->removeReference();
}
