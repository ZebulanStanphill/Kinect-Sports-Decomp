// hkpExtendedMeshShape::hkpExtendedMeshShape(hkFinishLoadedObjectFlag) (Physics/Collide/Shape/Compound/Collection/
// ExtendedMeshShape/hkpExtendedMeshShape.cpp). It keeps its fn_ name: the Matching getVtable unit (func_82D3A220)
// calls it. The fn_ wrapper runs the forced-inline finish constructor with MSVC's explicit constructor call
// (self->C::C(flag)), which, unlike placement new, adds no null check. The subpart fields must be hkEnum (a class
// wrapper): with plain hkUint8 fields the second loop's add operands come out swapped.
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
    HK_SHAPE_COLLECTION = 7,
    HK_SHAPE_EXTENDED_MESH = 14
};

extern "C" void fn_8265CA20(void *p);   // global operator delete

// As in havok/hkpShape.h, but hkpShapeCollection's finish constructor sets the type and collection type when
// finishing (the shared header leaves it empty).
class hkpShape : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpShape(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag)
    {
        if (flag.m_finishing)
            m_type = HK_SHAPE_INVALID;
    }

    virtual hkReal getMaximumProjection(const hkVector4 &direction) const;
    virtual const hkpShapeContainer *getContainer() const;
    virtual hkBool isConvex() const;
    virtual int calcSizeForSpu(const void *input, int spuBufferSizeLeft) const;
    virtual void getAabb(const hkTransform &localToWorld, hkReal tolerance, hkAabb &out) const;
    virtual hkBool castRay(const hkpShapeRayCastInput &input, hkpShapeRayCastOutput &output) const;
    virtual void castRayWithCollector(const hkpShapeRayCastInput &input, const hkpCdBody &cdBody,
                                      hkpRayHitCollector &collector) const;
    virtual int castRayBundle(const void *input, void *output, int mask) const;

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

class hkpShapeCollection : public hkpShape, public hkpShapeContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum CollectionType { COLLECTION_LIST, COLLECTION_EXTENDED_MESH, COLLECTION_TRISAMPLED_HEIGHTFIELD, COLLECTION_USER };
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

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    hkEnum() {}
    hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    operator ENUM() const { return static_cast<ENUM>(m_storage); }
    void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum SubpartType { SUBPART_TRIANGLES, SUBPART_SHAPE };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16 };

    struct Subpart {
        hkEnum<SubpartType, hkInt8> m_type;                       // +0x0
        hkEnum<MaterialIndexStridingType, hkInt8> m_materialIndexStridingType;     // +0x1
        hkInt16 m_materialStriding;              // +0x2
        const void *m_materialIndexBase;         // +0x4
    };
    // 0x60 bytes, 16-byte aligned (it holds hkVector4s); copied with ld/std.
    struct __declspec(align(16)) TrianglesSubpart : public Subpart {
        hkUint32 m_words[2];
        hkUint64 m_rest[10];
    };
    struct ShapesSubpart : public Subpart {
        hkUint32 m_rest[(0x40 - 8) / 4];
    };

    hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag);
    virtual ~hkpExtendedMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkUint8 m_pad18[0x20 - 0x18];
    TrianglesSubpart m_embeddedTrianglesSubpart;    // +0x20
    hkUint8 m_pad80[0xB4 - 0x80];
    hkArray<TrianglesSubpart> m_trianglesSubparts;  // +0xB4
    hkArray<ShapesSubpart> m_shapesSubparts;        // +0xC0
    hkArray<hkUint16> m_weldingInfo;                // +0xCC
    hkUint8 m_weldingType;                          // +0xD8
    hkUint32 m_padDC;
    int m_defaultCollisionFilterInfo;               // +0xE0
};

// hkArray::clearAndDeallocate() and hkArray::setDataUserFree(), which the shared header does not declare.
template <typename T>
HK_FORCE_INLINE void clearAndDeallocate(hkArray<T> &a)
{
    a._clearAndDeallocate(hkContainerHeapAllocator::get(&a));
}

template <typename T>
HK_FORCE_INLINE void setDataUserFree(hkArray<T> &a, T *ptr, int size, int capacity)
{
    a.m_data = ptr;
    a.m_size = size;
    a.m_capacityAndFlags = capacity | hkArray<T>::DONT_DEALLOCATE_FLAG;
}

HK_FORCE_INLINE hkpExtendedMeshShape::hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_trianglesSubparts(flag), m_shapesSubparts(flag), m_weldingInfo(flag)
{
    if (flag.m_finishing) {
        m_collectionType = COLLECTION_EXTENDED_MESH;
        for (int i = 0; i < m_trianglesSubparts.getSize(); i++) {
            if (m_trianglesSubparts[i].m_materialIndexStridingType == MATERIAL_INDICES_INVALID)
                m_trianglesSubparts[i].m_materialIndexStridingType = MATERIAL_INDICES_INT8;
        }
        for (int i = 0; i < m_shapesSubparts.getSize(); i++) {
            if (m_shapesSubparts[i].m_materialIndexStridingType == MATERIAL_INDICES_INVALID)
                m_shapesSubparts[i].m_materialIndexStridingType = MATERIAL_INDICES_INT8;
        }
        if (m_trianglesSubparts.getSize() == 1) {
            TrianglesSubpart *embedded = &m_embeddedTrianglesSubpart;
            *embedded = m_trianglesSubparts[0];
            clearAndDeallocate(m_trianglesSubparts);
            setDataUserFree(m_trianglesSubparts, embedded, 1, 1);
        }
        if (m_defaultCollisionFilterInfo == -1)
            m_defaultCollisionFilterInfo = hkArray<TrianglesSubpart>::DONT_DEALLOCATE_FLAG;
    }
    m_type = HK_SHAPE_EXTENDED_MESH;
}

extern "C" hkpExtendedMeshShape *fn_82D438E0(hkpExtendedMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpExtendedMeshShape::hkpExtendedMeshShape(flag);
    return self;
}
