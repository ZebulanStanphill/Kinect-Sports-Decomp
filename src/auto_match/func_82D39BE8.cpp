// hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceMeshShape.cpp). When finishing, hkpShape's
// clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's
// sets HK_SHAPE_COLLECTION again. Its finish function and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpConvexPieceMeshShape.h"

hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag)
{
    if (flag.m_finishing)
        m_type = hkpShapeType(7);
}
