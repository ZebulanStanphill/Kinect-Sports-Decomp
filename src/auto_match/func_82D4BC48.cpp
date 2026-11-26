// hkpMoppBvTreeShape::hkpMoppBvTreeShape(const hkpShapeCollection *, const hkpMoppCode *) (Physics/Collide/Shape/
// Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp): the hkMoppBvTreeShapeBase constructor (HK_SHAPE_MOPP, out of
// line), then the child container, which references the collection.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpMoppCode;

class hkpBvTreeShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum BvTreeType { BVTREE_MOPP, BVTREE_TRISAMPLED_HEIGHTFIELD, BVTREE_USER };
    hkpBvTreeShape(hkpShapeType type, BvTreeType bvType) : hkpShape(type), m_bvTreeType(hkUint8(bvType)) {}

    hkUint8 m_bvTreeType;   // +0x10 hkEnum<BvTreeType, hkUint8>
};

class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code);

    const hkpMoppCode *m_code;     // +0x14
    const hkUint8 *m_moppData;     // +0x18
    hkUint32 m_moppDataSize;       // +0x1C
    hkVector4 m_codeInfoCopy;      // +0x20
};

class hkpMoppBvTreeShape : public hkMoppBvTreeShapeBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpMoppBvTreeShape(const hkpShapeCollection *collection, const hkpMoppCode *code);

    hkpSingleShapeContainer m_child;   // +0x30
    int m_childSize;                   // +0x38
};

hkpMoppBvTreeShape::hkpMoppBvTreeShape(const hkpShapeCollection *collection, const hkpMoppCode *code)
    : hkMoppBvTreeShapeBase(hkpShapeType(0xa), code), m_child(collection)
{
}
