// hkpCompressedMeshShape::hkpCompressedMeshShape(hkReal radius) (Physics/Collide/Shape/Compound/Collection/
// CompressedMesh/hkpCompressedMeshShape.cpp). 17 bits per index and 18 per welding index with their masks, the
// radius, empty arrays and no materials; the welding type is set in the body.
#include "havok/hkBase.h"
#include "havok/hkpCompressedMeshShape.h"

hkpCompressedMeshShape::hkpCompressedMeshShape(hkReal radius)
    : hkpShapeCollection(HK_SHAPE_COMPRESSED_MESH, COLLECTION_COMPRESSED_MESH), m_bitsPerIndex(17),
      m_bitsPerWIndex(18), m_wIndexMask(0x3ffff), m_indexMask(0x1ffff), m_radius(radius), m_meshMaterials(HK_NULL),
      m_materialStriding(0), m_numMaterials(0)
{
    m_weldingType = hkpWeldingUtility::WELDING_TYPE_NONE;
}
