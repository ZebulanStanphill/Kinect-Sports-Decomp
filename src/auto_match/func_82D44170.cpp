// hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkpShapeType, hkReal, const hkpConvexShape *,
// hkpShapeContainer::ReferencePolicy) (Physics/Collide/Shape/Convex/hkpConvexTransformShapeBase.h): the child
// container adds a reference only for REFERENCE_POLICY_INCREMENT.
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

class hkpSphereRepShape : public hkpShape {
public:
    hkpSphereRepShape(hkpShapeType type) : hkpShape(type) {}
};

class hkpConvexShape : public hkpSphereRepShape {
public:
    hkpConvexShape(hkpShapeType type, hkReal radius) : hkpSphereRepShape(type), m_radius(radius) {}

    hkReal m_radius;   // +0x10
};

class hkpConvexTransformShapeBase : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexTransformShapeBase(hkpShapeType type, hkReal radius, const hkpConvexShape *childShape,
                                hkpShapeContainer::ReferencePolicy ref);

    hkpSingleShapeContainer m_childShape;   // +0x14
    int m_childShapeSize;                   // +0x1C
};

hkpConvexTransformShapeBase::hkpConvexTransformShapeBase(hkpShapeType type, hkReal radius,
                                                         const hkpConvexShape *childShape,
                                                         hkpShapeContainer::ReferencePolicy ref)
    : hkpConvexShape(type, radius), m_childShape(childShape, ref)
{
}
