// Havok Physics shape base classes (Physics/Collide/Shape/hkpShape.h,
// hkpShapeContainer.h, Compound/Collection/hkpShapeCollection.h), as far as
// the game's destructors, constructors and finish functions need them.
//
// hkpShape (0x10 bytes): hkReferencedObject, then
//   +0x8 hkUlong m_userData, +0xC hkUint32 m_type (hkpShapeType).
//   Vtable ??_7hkpShape@@6B@, 11 slots; hkpShape's deleting destructor is the
//   folded trivial one, fn_82D3B298.
//   Its finish constructor sets m_type to HK_SHAPE_INVALID (0) when finishing;
//   each subclass's finish constructor then sets its own type.
// hkpSphereRepShape, hkpConvexShape (+0x10 hkReal m_radius): the bases of
//   the convex shapes (RTTI: hkpBoxShape -> hkpConvexShape -> hkpSphereRepShape
//   -> hkpShape).
// hkpShapeContainer (4 bytes): an interface with its own vtable and no
//   hkBaseObject base, so deleting one uses the global operator delete
//   (fn_8265CA20). It is a second base of the shape collections (vtable at
//   +0x10 there).
// hkpSingleShapeContainer (8 bytes): hkpShapeContainer + const hkpShape *;
//   placement-allocated only (a member of hkpBvShape, hkpTransformShape...).
// hkpShapeCollection (0x18 bytes): hkpShape + hkpShapeContainer (+0x10),
//   hkBool m_disableWelding (+0x14), hkUint8 m_collectionType (+0x15).
//   Its subclasses' vtables are named in the game's symbols as
//   VFTABLE_for_<Class>@@_<COL address>; their MSVC names are
//   ??_7<Class>@@6BhkpShape@@@ (at +0) and ??_7<Class>@@6BhkpShapeContainer@@@
//   (at +0x10).
//
// Pure virtual functions are declared as plain (undefined) virtuals, so that a
// unit can construct a subclass without overriding them all; this changes
// nothing in the generated code except the unit's own copy of the vtable.
#ifndef HAVOK_HKPSHAPE_H
#define HAVOK_HKPSHAPE_H
#include "havok/hkBase.h"

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
#define HK_INVALID_SHAPE_KEY 0xffffffff

// The numbering is the game's. Checked against its code: 1 to 6, 11, 12, 21 (each registered with
// HK_SHAPE_CONVEX as its alternate type by fn_82D6F0A0, hkpAgentRegisterUtil's alternate-type table),
// 7, 9, 14, 16, 24 (alternates of HK_SHAPE_COLLECTION there), 8 and 10 (MOPP -> BV_TREE), 18 and 27
// (CONVEX -> SPHERE_REP; fn_82D40420 also registers the GSK agent for 0x12, 0x12, and hkpConvexShape's
// finish constructor stores 0x12), 13, 26 and 29 (SAMPLED_HEIGHT_FIELD and PLANE -> HEIGHT_FIELD), and
// the values the shapes' own constructors store: 15 (hkpTransformShape), 22 (hkpMultiSphereShape),
// 23 (hkpConvexListShape), 24 (hkpMeshShape, hkpSimpleMeshShape), 25 (hkpMultiRayShape), 28 (hkpBvShape)
// and 30 (hkpPhantomAgent compares with it). The names of 17, 19, 20 and of 31 on follow Havok 7's
// hkpShapeType.h (which has no HK_SHAPE_COMPOUND) and are not checked: nothing in the game uses them.
enum hkpShapeType {
    HK_SHAPE_INVALID = 0,
    HK_SHAPE_SPHERE = 1,
    HK_SHAPE_CYLINDER = 2,
    HK_SHAPE_TRIANGLE = 3,
    HK_SHAPE_BOX = 4,
    HK_SHAPE_CAPSULE = 5,
    HK_SHAPE_CONVEX_VERTICES = 6,
    HK_SHAPE_COLLECTION = 7,
    HK_SHAPE_BV_TREE = 8,
    HK_SHAPE_LIST = 9,
    HK_SHAPE_MOPP = 10,
    HK_SHAPE_CONVEX_TRANSLATE = 11,
    HK_SHAPE_CONVEX_TRANSFORM = 12,
    HK_SHAPE_SAMPLED_HEIGHT_FIELD = 13,
    HK_SHAPE_EXTENDED_MESH = 14,
    HK_SHAPE_TRANSFORM = 15,
    HK_SHAPE_COMPRESSED_MESH = 16,
    HK_SHAPE_MAX_ID_SPU = 17,
    HK_SHAPE_CONVEX = 18,
    HK_SHAPE_PACKED_CONVEX_VERTICES = 19,
    HK_SHAPE_MOPP_EMBEDDED = 20,
    HK_SHAPE_CONVEX_PIECE = 21,
    HK_SHAPE_MULTI_SPHERE = 22,
    HK_SHAPE_CONVEX_LIST = 23,
    HK_SHAPE_TRIANGLE_COLLECTION = 24,
    HK_SHAPE_MULTI_RAY = 25,
    HK_SHAPE_HEIGHT_FIELD = 26,
    HK_SHAPE_SPHERE_REP = 27,
    HK_SHAPE_BV = 28,
    HK_SHAPE_PLANE = 29,
    HK_SHAPE_PHANTOM_CALLBACK = 30,
    HK_SHAPE_USER0 = 31,
    HK_SHAPE_USER1 = 32,
    HK_SHAPE_USER2 = 33,
    HK_SHAPE_MAX_ID = 34,
    HK_SHAPE_ALL = -1
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

    // The game tests the result with a signed compare (cmpwi in 82D6A888), so it is the enum.
    HK_FORCE_INLINE hkpShapeType getType() const { return static_cast<hkpShapeType>(m_type); }

    virtual hkReal getMaximumProjection(const hkVector4 &direction) const;   // +0x0C
    virtual const hkpShapeContainer *getContainer() const;                   // +0x10
    virtual hkBool isConvex() const;                                         // +0x14
    virtual int calcSizeForSpu(const void *input, int spuBufferSizeLeft) const;  // +0x18
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;  // pure in Havok; +0x1C
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;  // pure in Havok; +0x20
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;  // pure in Havok; +0x24
    virtual int castRayBundle(const void *input, void *output, int mask) const;  // +0x28

    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

// Intermediate shape bases (no members of their own besides m_radius).
// Their virtual functions (pure in Havok, except weldContactPoint) are placed by the vtables of the
// convex shapes, which have 18 slots (??_7hkpSphereShape@@6B@, ??_7hkpBoxShape@@6B@, ??_7hkpCapsuleShape@@6B@):
//   +0x2C returns 1 for a sphere (82D3C568); hkpHeightFieldAgent's constructor (82D5A670) sizes its
//         contact point ids with it
//   +0x34 the box's half extents (82D3CAE0), the capsule's second vertex (82D3BDA0)
//   +0x38 writes the vector in r5 (82D3C570)
//   +0x3C ids, count and output array (82D3C580); the GSK initialisation calls it (82D74E60)
//   +0x40 returns 2 unless the shape is a triangle (82D43FA0)
//   +0x44 zero for a sphere and a box, the midpoint of a capsule (82D3BD70)
// The names and the parameter types are Havok's; its header has getCentre before getFirstVertex.
class hkSphere;
class hkpCdVertex;   // an hkVector4 whose w holds the vertex id
class hkpConvexShape;
typedef hkUint16 hkpVertexId;

class hkpSphereRepShape : public hkpShape {
public:
    hkpSphereRepShape(hkpShapeType type) : hkpShape(type) {}
    hkpSphereRepShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}

    virtual int getNumCollisionSpheres() const;                                // +0x2C
    virtual const hkSphere *getCollisionSpheres(hkSphere *sphereBuffer) const; // +0x30
};

class hkpConvexShape : public hkpSphereRepShape {
public:
    hkpConvexShape(hkpShapeType type, hkReal radius) : hkpSphereRepShape(type), m_radius(radius) {}
    // Stores the type whether finishing or not (hkpConvexVerticesShape's finish constructor, 82D3F338,
    // stores 0x12 unconditionally before its own type).
    hkpConvexShape(hkFinishLoadedObjectFlag flag) : hkpSphereRepShape(flag) { m_type = HK_SHAPE_CONVEX; }

    virtual void getFirstVertex(hkVector4 &v) const;                                                  // +0x34
    virtual void getSupportingVertex(const hkVector4 &direction, hkpCdVertex &supportingVertexOut) const;   // +0x38
    virtual void convertVertexIdsToVertices(const hkpVertexId *ids, int numIds,
                                            hkpCdVertex *vertexArrayOut) const;                       // +0x3C
    virtual int weldContactPoint(hkpVertexId *featurePoints, hkUint8 &numFeaturePoints, hkVector4 &contactPointWs,
                                 const hkTransform *thisObjTransform, const hkpConvexShape *collidingShape,
                                 const hkTransform *collidingTransform,
                                 hkVector4 &separatingNormalInOut) const;                             // +0x40
    virtual void getCentre(hkVector4 &centreOut) const;                                               // +0x44

    hkReal m_radius;   // +0x10
};

class hkpShapeContainer {
public:
    enum ReferencePolicy { REFERENCE_POLICY_IGNORE, REFERENCE_POLICY_INCREMENT };
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpShapeContainer() {}
    virtual int getNumChildShapes() const;                                    // +0x04
    virtual hkpShapeKey getFirstKey() const;                                  // pure in Havok; +0x08
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;                 // pure in Havok; +0x0C
    virtual hkUint32 getCollisionFilterInfo(hkpShapeKey key) const;           // +0x10
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;  // pure in Havok; +0x14
    virtual bool isWeldingEnabled() const;                                    // +0x18
};

class hkpSingleShapeContainer : public hkpShapeContainer {
public:
    HK_DECLARE_PLACEMENT_ALLOCATOR();
    hkpSingleShapeContainer() {}
    // hkpConvexTransformShapeBase's constructor (82D44170) passes the policy on; a constant
    // REFERENCE_POLICY_INCREMENT folds to the plain addReference.
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

class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    // The constructors of the collection shapes pass 0 (list), 2 (tri-sampled
    // height field), 3 (convex piece mesh), 4 (simple mesh), 5 (mesh) and
    // 6 (compressed mesh); the name for 1 follows Havok's header.
    enum CollectionType {
        COLLECTION_LIST,
        COLLECTION_EXTENDED_MESH,
        COLLECTION_TRISAMPLED_HEIGHTFIELD,
        COLLECTION_USER,
        COLLECTION_SIMPLE_MESH,
        COLLECTION_MESH_SHAPE,
        COLLECTION_COMPRESSED_MESH,
        COLLECTION_MAX
    };
    hkpShapeCollection(hkpShapeType type, CollectionType collectionType);   // out of line (82D48E38)
    // When finishing, the game's sets the type and collection type before the subclass sets its own
    // (82D39BE8, 82D3AFC0, 82D3B8F0, 82D3E4C8, 82D45F58 and 82D4B0F8 store 7 and 3 first).
    hkpShapeCollection(hkFinishLoadedObjectFlag flag) : hkpShape(flag)
    {
        if (flag.m_finishing) {
            m_type = HK_SHAPE_COLLECTION;
            m_collectionType = COLLECTION_USER;
        }
    }
    virtual const hkpShapeContainer *getContainer() const;

    hkBool m_disableWelding;    // +0x14
    hkUint8 m_collectionType;   // +0x15
};

#endif
