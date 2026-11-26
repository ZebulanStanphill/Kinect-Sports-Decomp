// hkpSimpleMeshShape::hkpSimpleMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Deprecated/SimpleMesh/hkpSimpleMeshShape.cpp).
// When finishing, hkpShape's clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and
// COLLECTION_USER (3), and this class's sets HK_SHAPE_TRIANGLE_COLLECTION (0x18) and COLLECTION_SIMPLE_MESH. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that
// runs the constructor on the given storage (MSVC's explicit constructor call; placement new would add
// a null check).
#include "havok/hkBase.h"
#include "havok/hkpSimpleMeshShape.h"

// The header declares the constructor; it is defined here, HK_FORCE_INLINE, or the explicit call stays a call.
HK_FORCE_INLINE hkpSimpleMeshShape::hkpSimpleMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_vertices(flag), m_triangles(flag), m_materialIndices(flag)
{
    if (flag.m_finishing) {
        m_type = hkpShapeType(0x18);
        m_collectionType = COLLECTION_SIMPLE_MESH;
    }
}

extern "C" hkpSimpleMeshShape *fn_82D3AFC0(hkpSimpleMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpSimpleMeshShape::hkpSimpleMeshShape(flag);
    return self;
}
