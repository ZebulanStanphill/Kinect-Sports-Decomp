#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpSimpleMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(0);
    hkpSimpleMeshShape(float radius);
    hkArray<int> m_vertices, m_triangles, m_materialIndices;
    float m_radius;
    unsigned char m_weldingType;
};

hkpSimpleMeshShape::hkpSimpleMeshShape(float radius)
    : hkpShapeCollection(HK_SHAPE_TRIANGLE_COLLECTION, COLLECTION_SIMPLE_MESH), m_radius(radius), m_weldingType(6)
{
}
