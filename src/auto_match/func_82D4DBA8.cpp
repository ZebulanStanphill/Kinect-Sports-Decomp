#include "havok/hkBase.h"
enum hkpShapeType { SHAPE_PIECE=7, SHAPE_SIMPLE=24 };
class hkpShape : public hkReferencedObject { public: unsigned m_userData, m_type; };
class hkpShapeContainer { public: static void operator delete(void *p) { fn_8265CA20(p); } virtual ~hkpShapeContainer() {} };
class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public: enum CollectionType { COLLECTION_PIECE=3, COLLECTION_SIMPLE=4 };
hkpShapeCollection(hkpShapeType, CollectionType);
hkBool m_disableWelding; unsigned char m_collectionType;
};
class hkpSimpleMeshShape : public hkpShapeCollection {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpSimpleMeshShape(float radius);
 hkArray<int> m_vertices, m_triangles, m_materialIndices;
 float m_radius; unsigned char m_weldingType;
};
hkpSimpleMeshShape::hkpSimpleMeshShape(float radius) : hkpShapeCollection(SHAPE_SIMPLE,COLLECTION_SIMPLE), m_radius(radius), m_weldingType(6) {}
