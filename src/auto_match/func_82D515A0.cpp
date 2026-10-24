// hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(
// const hkpTriSampledHeightFieldCollection *collection, hkBool doAabbRejection)
// (Physics/Collide/Shape/HeightField/TriSampledHeightField/hkpTriSampledHeightFieldBvTreeShape.cpp):
// hkpBvTreeShape(HK_SHAPE_TRI_SAMPLED_HEIGHT_FIELD_BV_TREE, BVTREE_TRISAMPLED_HEIGHTFIELD), the child
// container (which adds a reference to the collection), then the AABB rejection flag.
// hkpBvTreeShape::m_bvTreeType is an hkEnum<BvTreeType, hkUint8>: initialised through hkEnum's constructor,
// its store is scheduled with hkpShape's member stores, ahead of the vtable store.
#include "havok/hkpShape.h"

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    hkEnum() {}
    hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    operator ENUM() const { return static_cast<ENUM>(m_storage); }
    void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

// hkpBvTreeShape (Physics/Collide/Shape/Compound/Tree/hkpBvTreeShape.h): hkpShape, then the tree type (+0x10).
class hkpBvTreeShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum BvTreeType { BVTREE_MOPP, BVTREE_TRISAMPLED_HEIGHTFIELD, BVTREE_USER };
    HK_FORCE_INLINE hkpBvTreeShape(hkpShapeType type, BvTreeType bvType) : hkpShape(type), m_bvTreeType(bvType) {}

    hkEnum<BvTreeType, hkUint8> m_bvTreeType;   // +0x10
};

class hkpTriSampledHeightFieldCollection;

// 0x24 bytes: the collection is held in an hkpSingleShapeContainer (+0x14).
class hkpTriSampledHeightFieldBvTreeShape : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTriSampledHeightFieldBvTreeShape(const hkpTriSampledHeightFieldCollection *c, hkBool doAabbRejection);

    hkpSingleShapeContainer m_childContainer;   // +0x14
    int m_childSize;                            // +0x1C
    hkBool m_wantAabbRejectionTest;             // +0x20
};

hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(const hkpTriSampledHeightFieldCollection *c,
                                                                         hkBool doAabbRejection)
    : hkpBvTreeShape(hkpShapeType(8), BVTREE_TRISAMPLED_HEIGHTFIELD),   // HK_SHAPE_TRI_SAMPLED_HEIGHT_FIELD_BV_TREE
      m_childContainer(reinterpret_cast<const hkpShape *>(c))
{
    m_wantAabbRejectionTest = doAabbRejection;
}
