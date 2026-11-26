// hkpMeshShape::hkpMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp). See havok/hkpMeshShape.h.
#include "havok/hkpMeshShape.h"

hkpMeshShape::hkpMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_subparts(flag), m_weldingInfo(flag)
{
    if (flag.m_finishing) {
        for (int i = 0; i < m_subparts.getSize(); i++) {
            if (m_subparts[i].m_materialIndexStridingType == MATERIAL_INDICES_INVALID)
                m_subparts[i].m_materialIndexStridingType = MATERIAL_INDICES_INT8;
        }
        m_type = HK_SHAPE_TRIANGLE_COLLECTION;
        m_collectionType = COLLECTION_MESH_SHAPE;
    }
}
