// hkpExtendedMeshShape::hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp), /O2 /QVMXReserve.
// The embedded triangles subpart is default-constructed first (the header's inline constructors).
// 1.0f and -HK_REAL_MAX are the source's literals.
#include "havok/hkpExtendedMeshShape.h"

hkpExtendedMeshShape::hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpShapeCollection(HK_SHAPE_EXTENDED_MESH, COLLECTION_EXTENDED_MESH)
{
    m_scaling.setAll(1.0f);
    m_defaultCollisionFilterInfo = 0;
    m_triangleRadius = radius;
    m_numBitsForSubpartIndex = numBitsForSubpartIndex;
    m_weldingType = 6;   // hkpWeldingUtility::WELDING_TYPE_NONE
    m_aabbHalfExtents.setAll(-3.40282e+38f);
    m_aabbCenter.setZero4();
    m_cachedNumChildShapes = 0;
}
