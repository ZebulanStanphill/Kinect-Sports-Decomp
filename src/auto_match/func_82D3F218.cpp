// hkpConvexVerticesShape::hkpConvexVerticesShape(hkReal radius) (Physics/Collide/Shape/Convex/ConvexVertices/
// hkpConvexVerticesShape.cpp): the empty shape used before the vertices are set; both hkArrays start empty
// and the connectivity is null.
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
    hkpConvexShape(hkpShapeType type, hkReal radius) : hkpSphereRepShape(type), m_radius(radius) {}

    hkReal m_radius;   // +0x10
};

struct hkFourTransposedPoints {
    hkVector4 m_vertices[3];
};

class hkpConvexVerticesConnectivity;

class hkpConvexVerticesShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpConvexVerticesShape(hkReal radius);

    hkVector4 m_aabbHalfExtents;                           // +0x20
    hkVector4 m_aabbCenter;                                // +0x30
    hkArray<hkFourTransposedPoints> m_rotatedVertices;     // +0x40
    hkInt32 m_numVertices;                                 // +0x4C
    const void *m_externalObject;                          // +0x50 (name unconfirmed)
    hkArray<hkVector4> m_planeEquations;                   // +0x54
    const hkpConvexVerticesConnectivity *m_connectivity;   // +0x60
};

hkpConvexVerticesShape::hkpConvexVerticesShape(hkReal radius)
    : hkpConvexShape(HK_SHAPE_CONVEX_VERTICES, radius), m_externalObject(HK_NULL), m_connectivity(HK_NULL)
{
}
