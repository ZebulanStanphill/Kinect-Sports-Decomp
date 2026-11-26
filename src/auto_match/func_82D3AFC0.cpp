// hkpSimpleMeshShape::hkpSimpleMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Deprecated/SimpleMesh/hkpSimpleMeshShape.cpp).
// When finishing, hkpShape's clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and
// COLLECTION_USER (3), and this class's sets HK_SHAPE_TRIANGLE_COLLECTION (0x18) and COLLECTION_SIMPLE_MESH. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that
// runs the constructor on the given storage (MSVC's explicit constructor call; placement new would add
// a null check). The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpSimpleMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Triangle {
        int m_a;
        int m_b;
        int m_c;
        hkUint16 m_weldingInfo;
    };
    HK_FORCE_INLINE hkpSimpleMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_vertices(flag), m_triangles(flag), m_materialIndices(flag)
    {
        if (flag.m_finishing) {
            m_type = hkpShapeType(0x18);
            m_collectionType = COLLECTION_SIMPLE_MESH;
        }
    }
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkArray<hkVector4> m_vertices;        // +0x18
    hkArray<Triangle> m_triangles;        // +0x24
    hkArray<hkUint8> m_materialIndices;   // +0x30
    hkReal m_radius;                      // +0x3C
    hkUint8 m_weldingType;                // +0x40
};

extern "C" hkpSimpleMeshShape *fn_82D3AFC0(hkpSimpleMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpSimpleMeshShape::hkpSimpleMeshShape(flag);
    return self;
}
