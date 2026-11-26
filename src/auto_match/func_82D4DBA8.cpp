// hkpSimpleMeshShape::hkpSimpleMeshShape(hkReal radius) (Physics/Collide/Shape/Deprecated/SimpleMesh/
// hkpSimpleMeshShape.cpp): empty arrays, the radius and no welding.
#include "havok/hkBase.h"
#include "havok/hkpSimpleMeshShape.h"

hkpSimpleMeshShape::hkpSimpleMeshShape(hkReal radius)
    : hkpShapeCollection(HK_SHAPE_TRIANGLE_COLLECTION, COLLECTION_SIMPLE_MESH), m_radius(radius),
      m_weldingType(hkpWeldingUtility::WELDING_TYPE_NONE)
{
}
