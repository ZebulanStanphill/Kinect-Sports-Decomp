// hkpMoppBvTreeShape::hkpMoppBvTreeShape(const hkpShapeCollection *, const hkpMoppCode *) (Physics/Collide/Shape/
// Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp): the hkMoppBvTreeShapeBase constructor (HK_SHAPE_MOPP, out of
// line), then the child container, which references the collection.
#include "havok/hkBase.h"

// hkpShape, hkpShapeContainer and hkpShapeCollection as in havok/hkpShape.h, declared here because the
// unit needs constructors the shared header does not declare.
class hkVector4;
class hkTransform;
class hkAabb;
class hkpCdBody;
class hkpRayHitCollector;
struct hkpShapeRayCastInput;
struct hkpShapeRayCastOutput;
class hkpShapeContainer;
class hkpShapeBuffer;
typedef hkUint32 hkpShapeKey;

enum hkpShapeType {
    HK_SHAPE_INVALID = 0,
    HK_SHAPE_SPHERE = 1,
    HK_SHAPE_CYLINDER = 2,
    HK_SHAPE_TRIANGLE = 3,
    HK_SHAPE_BOX = 4,
    HK_SHAPE_CAPSULE = 5,
    HK_SHAPE_CONVEX_VERTICES = 6,
    HK_SHAPE_MULTI_SPHERE = 0x16,
    HK_SHAPE_BV = 28
};

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpShape : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    HK_FORCE_INLINE hkpShape(hkpShapeType type) : m_userData(0), m_type(type) {}
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag)
    {
        if (flag.m_finishing)
            m_type = HK_SHAPE_INVALID;
    }

    virtual hkReal getMaximumProjection(const hkVector4 &direction) const;   // +0x0C
    virtual const hkpShapeContainer *getContainer() const;                   // +0x10
    virtual hkBool isConvex() const;                                         // +0x14
    virtual int calcSizeForSpu(const void *input, int spuBufferSizeLeft) const;  // +0x18
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;  // +0x1C
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;  // +0x20
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;  // +0x24
    virtual int castRayBundle(const void *input, void *output, int mask) const;  // +0x28

    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

class hkpShapeContainer {
public:
    enum ReferencePolicy { REFERENCE_POLICY_IGNORE, REFERENCE_POLICY_INCREMENT };
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpShapeContainer() {}
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual hkUint32 getCollisionFilterInfo(hkpShapeKey key) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
    virtual bool isWeldingEnabled() const;
};

// hkpSingleShapeContainer (Physics/Collide/Shape/hkpShapeContainer.h): placement-allocated member.
class hkpSingleShapeContainer : public hkpShapeContainer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkpSingleShapeContainer(const hkpShape *s, ReferencePolicy ref = REFERENCE_POLICY_INCREMENT) : m_childShape(s)
    {
        if (ref == REFERENCE_POLICY_INCREMENT)
            m_childShape->addReference();
    }
    hkpSingleShapeContainer(hkFinishLoadedObjectFlag) {}
    ~hkpSingleShapeContainer()
    {
        if (m_childShape)
            m_childShape->removeReference();
    }
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpShape *m_childShape;   // +0x4
};

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


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

class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
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
