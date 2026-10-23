// hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/ConvexPieceMesh/hkpConvexPieceMeshShape.cpp). When finishing, hkpShape's
// clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's
// sets HK_SHAPE_COLLECTION again. Its finish function and getVtable function call it; because a Matching unit
// calls it, it keeps its fn_ name and is written as an extern "C" function that runs the constructor on the
// given storage (MSVC's explicit constructor call; placement new would add a null check). The constructor is
// HK_FORCE_INLINE, or the explicit call stays a call.
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

class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum CollectionType { COLLECTION_LIST, COLLECTION_EXTENDED_MESH, COLLECTION_TRISAMPLED_HEIGHTFIELD, COLLECTION_USER };
    hkpShapeCollection(hkFinishLoadedObjectFlag flag) : hkpShape(flag)
    {
        if (flag.m_finishing) {
            m_type = hkpShapeType(7);
            m_collectionType = COLLECTION_USER;
        }
    }
    virtual const hkpShapeContainer *getContainer() const;

    hkBool m_disableWelding;    // +0x14
    hkUint8 m_collectionType;   // +0x15
};

class hkpConvexPieceStreamData;

class hkpConvexPieceMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    HK_FORCE_INLINE hkpConvexPieceMeshShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag)
    {
        if (flag.m_finishing)
            m_type = hkpShapeType(7);
    }
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpConvexPieceStreamData *m_convexPieceStream;   // +0x18
    const hkpShapeCollection *m_displayMesh;               // +0x1C
    hkReal m_radius;                                       // +0x20
};

extern "C" hkpConvexPieceMeshShape *fn_82D39BE8(hkpConvexPieceMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(flag);
    return self;
}
