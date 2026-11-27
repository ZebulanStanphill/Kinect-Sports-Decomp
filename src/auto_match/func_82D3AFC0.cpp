// hkpSimpleMeshShape::hkpSimpleMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/SimpleMesh/hkpSimpleMeshShape.cpp). When finishing, hkpShape's clears m_type,
// hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's sets
// HK_SHAPE_TRIANGLE_COLLECTION (0x18) and COLLECTION_SIMPLE_MESH. Its finish function and getVtable function
// call it.
#include "havok/hkBase.h"
#include "havok/hkpSimpleMeshShape.h"

hkpSimpleMeshShape::hkpSimpleMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_vertices(flag), m_triangles(flag), m_materialIndices(flag)
{
    if (flag.m_finishing) {
        m_type = hkpShapeType(0x18);
        m_collectionType = COLLECTION_SIMPLE_MESH;
    }
}
