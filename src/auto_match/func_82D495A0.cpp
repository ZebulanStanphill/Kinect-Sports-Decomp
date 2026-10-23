#include "havok/hkBase.h"
enum hkpShapeType { SHAPE_PIECE=7, SHAPE_SIMPLE=24 };
class hkpShape : public hkReferencedObject { public: unsigned m_userData, m_type; };
class hkpShapeContainer { public: static void operator delete(void *p) { fn_8265CA20(p); } virtual ~hkpShapeContainer() {} };
class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public: enum CollectionType { COLLECTION_PIECE=3, COLLECTION_SIMPLE=4 };
hkpShapeCollection(hkpShapeType, CollectionType);
hkBool m_disableWelding; unsigned char m_collectionType;
};
class hkpConvexPieceMeshShape : public hkpShapeCollection {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpConvexPieceMeshShape(const hkReferencedObject *a, const hkReferencedObject *b, float radius);
 const hkReferencedObject *m_b, *m_a; float m_radius;
};
hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(const hkReferencedObject *a, const hkReferencedObject *b, float radius)
 : hkpShapeCollection(SHAPE_PIECE,COLLECTION_PIECE), m_radius(radius), m_a(a),m_b(b) { a->addReference(); m_b->addReference(); }
