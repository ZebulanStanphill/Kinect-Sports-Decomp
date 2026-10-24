// hkpConvexListShape::hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes)
// (Physics/Collide/Shape/Convex/ConvexList/hkpConvexListShape.cpp): radius 0, then setShapes (fn_82D48BF8) and
// setUseCachedAabb(true) (fn_82D48570), both out of line under their fn_ names. RTTI: hkpConvexShape at +0,
// hkpShapeContainer at +0x14. Built with /O2 (flag file).
// m_minDistanceToUseConvexHullForGetClosestPoints is the literal 1.0f, whose load the compiler schedules
// above the m_childShapes stores (it knows the constant cannot change); the game's copy of that constant is
// lbl_82002AE0 (the linker merged __real@3f800000 into it), so it is declared here as a known constant (as in
// func_83096D00.cpp).
#include "havok/hkBase.h"

extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;

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
    HK_FORCE_INLINE hkpShape(hkpShapeType type) {m_userData=0;m_type=type;}
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
 hkpShapeContainer() {}
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

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};


class hkpSphereRepShape : public hkpShape {
public:
    hkpSphereRepShape(hkpShapeType type) : hkpShape(type) {}
};

class hkpConvexShape : public hkpSphereRepShape {
public:
    hkpConvexShape(hkpShapeType type, hkReal radius) : hkpSphereRepShape(type) {m_radius=radius;}

    hkReal m_radius;   // +0x10
};

class hkpConvexListShape;
extern "C" {
void fn_82D48BF8(hkpConvexListShape *self, const hkpConvexShape *const *shapeArray, int numShapes);   // setShapes
void fn_82D48570(hkpConvexListShape *self, bool useCachedAabb);                                     // setUseCachedAabb
}

class hkpConvexListShape : public hkpConvexShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes);
    virtual const hkpShapeContainer *getContainer() const;
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
    void setShapes(const hkpConvexShape *const *shapeArray, int numShapes) { fn_82D48BF8(this, shapeArray, numShapes); }
    void setUseCachedAabb(bool useCachedAabb) { fn_82D48570(this, useCachedAabb); }

    hkReal m_minDistanceToUseConvexHullForGetClosestPoints;   // +0x18
    hkVector4 m_aabbHalfExtents;                              // +0x20
    hkVector4 m_aabbCenter;                                   // +0x30
    hkBool m_useCachedAabb;                                   // +0x40
    hkArray<const hkpConvexShape *> m_childShapes;            // +0x44
};

hkpConvexListShape::hkpConvexListShape(const hkpConvexShape *const *shapeArray, int numShapes)
    : hkpConvexShape(hkpShapeType(0x17), 0.0f)
{
    m_minDistanceToUseConvexHullForGetClosestPoints = lbl_82002AE0;
    setShapes(shapeArray, numShapes);
    setUseCachedAabb(true);
}
