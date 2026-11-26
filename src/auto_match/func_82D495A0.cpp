#include "havok/hkBase.h"
#include "havok/hkpShape.h"
class hkpConvexPieceMeshShape : public hkpShapeCollection {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpConvexPieceMeshShape(const hkReferencedObject *a, const hkReferencedObject *b, float radius);
 const hkReferencedObject *m_b, *m_a; float m_radius;
};
hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(const hkReferencedObject *a, const hkReferencedObject *b, float radius)
 : hkpShapeCollection(HK_SHAPE_COLLECTION,COLLECTION_USER), m_radius(radius), m_a(a),m_b(b)
{ a->addReference(); m_b->addReference(); }
