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

enum hkpShapeType {
    HK_SHAPE_INVALID = 0,
    HK_SHAPE_SPHERE = 1,
    HK_SHAPE_CYLINDER = 2,
    HK_SHAPE_TRIANGLE = 3,
    HK_SHAPE_BOX = 4,
    HK_SHAPE_CAPSULE = 5,
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
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;  // pure in Havok; +0x1C
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;  // pure in Havok; +0x20
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;  // pure in Havok; +0x24
    virtual int castRayBundle(const void *input, void *output, int mask) const;  // +0x28

    hkUlong m_userData;   // +0x8
    hkUint32 m_type;      // +0xC
};

// Intermediate shape bases (no members of their own besides m_radius).
class hkpSphereRepShape : public hkpShape {
public:
    hkpSphereRepShape(hkpShapeType type) : hkpShape(type) {}
    hkpSphereRepShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
};

class hkpConvexShape : public hkpSphereRepShape {
public:
    hkpConvexShape(hkpShapeType type, hkReal radius) : hkpSphereRepShape(type), m_radius(radius) {}
    hkpConvexShape(hkFinishLoadedObjectFlag flag) : hkpSphereRepShape(flag) {}

    hkReal m_radius;   // +0x10
};

class hkpShapeContainer {
public:
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
    hkpSingleShapeContainer(const hkpShape *s) : m_childShape(s) { m_childShape->addReference(); }
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
    hkpShapeCollection(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}
    virtual const hkpShapeContainer *getContainer() const;

    hkBool m_disableWelding;    // +0x14
    hkUint8 m_collectionType;   // +0x15
};

#endif
