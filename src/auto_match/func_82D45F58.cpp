// hkpCompressedMeshShape::hkpCompressedMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Compound/Collection/CompressedMesh/hkpCompressedMeshShape.cpp). When finishing, hkpShape's
// clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's sets
// HK_SHAPE_COMPRESSED_MESH (0x10) and COLLECTION_COMPRESSED_MESH, and points m_meshMaterials at the named
// materials when there are any. Its finish function and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpCompressedMeshShape.h"

hkpCompressedMeshShape::hkpCompressedMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_materials(flag), m_materials16(flag), m_materials8(flag), m_transforms(flag),
      m_bigVertices(flag), m_bigTriangles(flag), m_chunks(flag), m_convexPieces(flag), m_namedMaterials(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_COMPRESSED_MESH;
        m_collectionType = COLLECTION_COMPRESSED_MESH;
        if (m_namedMaterials.getSize())
            m_meshMaterials = m_namedMaterials.begin();
    }
}
