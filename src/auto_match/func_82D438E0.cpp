// hkpExtendedMeshShape::hkpExtendedMeshShape(hkFinishLoadedObjectFlag) (Physics/Collide/Shape/Compound/Collection/
// ExtendedMeshShape/hkpExtendedMeshShape.cpp), the out-of-line finish constructor. See havok/hkpExtendedMeshShape.h.
#include "havok/hkpExtendedMeshShape.h"

// hkArray::clearAndDeallocate() and hkArray::setDataUserFree(), which the shared header does not declare.
template <typename T>
HK_FORCE_INLINE void clearAndDeallocate(hkArray<T> &a)
{
    a._clearAndDeallocate(hkContainerHeapAllocator::get(&a));
}

template <typename T>
HK_FORCE_INLINE void setDataUserFree(hkArray<T> &a, T *ptr, int size, int capacity)
{
    a.m_data = ptr;
    a.m_size = size;
    a.m_capacityAndFlags = capacity | hkArray<T>::DONT_DEALLOCATE_FLAG;
}

hkpExtendedMeshShape::hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_embeddedTrianglesSubpart(flag), m_trianglesSubparts(flag),
      m_shapesSubparts(flag), m_weldingInfo(flag)
{
    if (flag.m_finishing) {
        m_collectionType = COLLECTION_EXTENDED_MESH;
        for (int i = 0; i < m_trianglesSubparts.getSize(); i++) {
            if (m_trianglesSubparts[i].m_materialIndexStridingType == MATERIAL_INDICES_INVALID)
                m_trianglesSubparts[i].m_materialIndexStridingType = MATERIAL_INDICES_INT8;
        }
        for (int i = 0; i < m_shapesSubparts.getSize(); i++) {
            if (m_shapesSubparts[i].m_materialIndexStridingType == MATERIAL_INDICES_INVALID)
                m_shapesSubparts[i].m_materialIndexStridingType = MATERIAL_INDICES_INT8;
        }
        if (m_trianglesSubparts.getSize() == 1) {
            TrianglesSubpart *embedded = &m_embeddedTrianglesSubpart;
            // A copy construction (MSVC's explicit constructor call, without placement new's null test):
            // the game copies the 0x60 bytes as doublewords, and an assignment would go through
            // hkVector4's operator= for m_extrusion.
            embedded->TrianglesSubpart::TrianglesSubpart(m_trianglesSubparts[0]);
            clearAndDeallocate(m_trianglesSubparts);
            setDataUserFree(m_trianglesSubparts, embedded, 1, 1);
        }
        if (m_cachedNumChildShapes == -1)
            m_cachedNumChildShapes = 0x80000000;
    }
    m_type = HK_SHAPE_EXTENDED_MESH;
}
