// hkpCompressedMeshShape::hkpCompressedMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/CompressedMesh/hkpCompressedMeshShape.cpp).
// When finishing, hkpShape's clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and
// COLLECTION_USER (3), and this class's sets HK_SHAPE_COMPRESSED_MESH (0x10) and COLLECTION_COMPRESSED_MESH, and points
// m_meshMaterials at the named materials when there are any. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that
// runs the constructor on the given storage (MSVC's explicit constructor call; placement new would add
// a null check). The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

struct hkpMeshMaterial {
    hkUint32 m_filterInfo;
};

struct hkpNamedMeshMaterial : public hkpMeshMaterial {
    hkStringPtr m_name;   // +0x4
};

class hkpCompressedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    HK_FORCE_INLINE hkpCompressedMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_namedMaterials(flag)
    {
        if (flag.m_finishing) {
            m_type = hkpShapeType(0x10);
            m_collectionType = COLLECTION_COMPRESSED_MESH;
            if (m_namedMaterials.getSize())
                m_meshMaterials = m_namedMaterials.begin();
        }
    }
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkUint8 m_data18[0xC0 - 0x18];                    // +0x18 (index widths, the subpart arrays, bounds, ...)
    hkpMeshMaterial *m_meshMaterials;                 // +0xC0
    hkUint32 m_unknownC4;                             // +0xC4
    hkArray<hkpNamedMeshMaterial> m_namedMaterials;   // +0xC8
};

extern "C" hkpCompressedMeshShape *fn_82D45F58(hkpCompressedMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpCompressedMeshShape::hkpCompressedMeshShape(flag);
    return self;
}
