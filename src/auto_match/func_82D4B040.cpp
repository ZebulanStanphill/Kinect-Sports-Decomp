// hkpMeshShape::hkpMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp). RTTI: hkpShape at +0,
// hkpShapeContainer at +0x10. Built with /O2 /QVMXReserve (flag file).
#include "havok/hkpMeshShape.h"

hkpMeshShape::hkpMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpShapeCollection(HK_SHAPE_TRIANGLE_COLLECTION, COLLECTION_MESH_SHAPE)
{
    m_scaling.setAll(1.0f);
    m_weldingType = 6;
    m_numBitsForSubpartIndex = numBitsForSubpartIndex;
    m_radius = radius;
}
