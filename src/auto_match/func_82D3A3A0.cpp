// hkpFastMeshShape::hkpFastMeshShape(hkFinishLoadedObjectFlag) (Physics/Collide/Shape/Deprecated/FastMesh/hkpFastMeshShape.h):
// hkpMeshShape's finish constructor (kept as fn_82D4B0F8, called by a Matching unit), the two vtables
// (hkpShape part at +0, hkpShapeContainer part at +0x10), and when finishing m_type = 0x18 (the triangle
// collection type hkpMeshShape also sets). It keeps its fn_ name too (a Matching unit calls it), so the
// constructor is called explicitly.
//
// hkpMeshShape's constructor is out of line and stores its own (and its bases') vtables, so the bases
// here are __declspec(novtable) stand-ins with the real hierarchy's shape: hkpMeshShape : hkpShape
// (0x10 bytes), hkpShapeContainer (+0x10). The derived class's vtables then get the MSVC names
// ??_7hkpFastMeshShape@@6BhkpShape@@@ and ??_7hkpFastMeshShape@@6BhkpShapeContainer@@@.
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

class __declspec(novtable) hkpShape {
public:
    virtual ~hkpShape();
    virtual const hkClass *getClassType() const;
    virtual void calcContentStatistics(hkStatisticsCollector *collector, const hkClass *cls) const;
    virtual hkReal getMaximumProjection(const hkVector4 &direction) const;
    virtual const hkpShapeContainer *getContainer() const;
    virtual hkBool isConvex() const;
    virtual int calcSizeForSpu(const void *input, int spuBufferSizeLeft) const;
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;
    virtual int castRayBundle(const void *input, void *output, int mask) const;

    hkUint16 m_memSizeAndFlags;   // +0x4
    hkInt16 m_referenceCount;     // +0x6
    hkUlong m_userData;           // +0x8
    hkUint32 m_type;              // +0xC
};

class __declspec(novtable) hkpShapeContainer {
public:
    virtual ~hkpShapeContainer();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual hkUint32 getCollisionFilterInfo(hkpShapeKey key) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
    virtual bool isWeldingEnabled() const;
};

class hkpMeshShape;
extern "C" void fn_82D4B0F8(hkpMeshShape *self, hkFinishLoadedObjectFlag flag);

// Stand-in for hkpMeshShape (: hkpShapeCollection : hkpShape, hkpShapeContainer).
class __declspec(novtable) hkpMeshShape : public hkpShape, public hkpShapeContainer {
public:
    HK_FORCE_INLINE hkpMeshShape(hkFinishLoadedObjectFlag flag) { fn_82D4B0F8(this, flag); }
};

class hkpFastMeshShape : public hkpMeshShape {
public:
    enum { HK_SHAPE_TRIANGLE_COLLECTION = 0x18 };
    hkpFastMeshShape(hkFinishLoadedObjectFlag flag) : hkpMeshShape(flag)
    {
        if (flag.m_finishing) {
            m_type = HK_SHAPE_TRIANGLE_COLLECTION;
        }
    }
    virtual const hkClass *getClassType() const;
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
};

extern "C" hkpFastMeshShape *fn_82D3A3A0(hkpFastMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpFastMeshShape::hkpFastMeshShape(flag);
    return self;
}
