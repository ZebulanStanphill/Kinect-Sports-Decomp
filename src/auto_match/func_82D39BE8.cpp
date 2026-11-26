// hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceMeshShape.cpp). When finishing, hkpShape's
// clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's
// sets HK_SHAPE_COLLECTION again. Its finish function and getVtable function call it; because a Matching unit
// calls it, it keeps its fn_ name and is written as an extern "C" function that runs the constructor on the
// given storage (MSVC's explicit constructor call; placement new would add a null check). The constructor is
// HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkBase.h"
#include "havok/hkpConvexPieceMeshShape.h"

// The header declares the constructor; it is defined here, HK_FORCE_INLINE, or the explicit call stays a call.
HK_FORCE_INLINE hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag)
{
    if (flag.m_finishing)
        m_type = hkpShapeType(7);
}

extern "C" hkpConvexPieceMeshShape *fn_82D39BE8(hkpConvexPieceMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(flag);
    return self;
}
