// hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(const hkReferencedObject *, const hkReferencedObject *, hkReal)
// (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceMeshShape.cpp): stores the display mesh, the
// convex piece stream and the radius, and takes a reference to the first two.
#include "havok/hkBase.h"
#include "havok/hkpConvexPieceMeshShape.h"
#include "havok/hkpConvexPieceStreamData.h"

hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(const hkReferencedObject *displayMesh,
                                                 const hkReferencedObject *convexPieceStream, hkReal radius)
    : hkpShapeCollection(HK_SHAPE_COLLECTION, COLLECTION_USER),
      m_convexPieceStream(static_cast<const hkpConvexPieceStreamData *>(convexPieceStream)),
      m_displayMesh(static_cast<const hkpShapeCollection *>(displayMesh)), m_radius(radius)
{
    displayMesh->addReference();
    m_convexPieceStream->addReference();
}
