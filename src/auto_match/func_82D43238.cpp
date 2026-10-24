// hkpExtendedMeshShape::hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp), /O2 /QVMXReserve.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 a, unsigned int i);
}
// The source's literals 1.0f and -HK_REAL_MAX, folded by the linker into the game's copies. Defined here so the
// compiler knows they are read-only and schedules their loads like literals.
extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;
extern "C" __declspec(selectany) const float lbl_82134504 = -3.40282e+38f;

class hkVector4 {
public:
    HK_FORCE_INLINE void setZero4() { m_quad = __vxor(m_quad, m_quad); }
    HK_FORCE_INLINE void setAll(hkReal x) { m_quad.vector4_f32[0] = x; m_quad = __vspltw(m_quad, 0); }
    hkQuadReal m_quad;
};

template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    HK_FORCE_INLINE hkEnum() {}
    HK_FORCE_INLINE hkEnum(ENUM e) : m_storage(static_cast<STORAGE>(e)) {}
    HK_FORCE_INLINE void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

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
    HK_SHAPE_EXTENDED_MESH = 14
};

class hkpShape : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
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
    hkpShapeCollection(hkpShapeType type, CollectionType collectionType);
    virtual const hkpShapeContainer *getContainer() const;

    hkBool m_disableWelding;    // +0x14
    hkUint8 m_collectionType;   // +0x15
};

struct hkpWeldingUtility {
    enum WeldingType { WELDING_TYPE_ANTICLOCKWISE = 0, WELDING_TYPE_CLOCKWISE = 4, WELDING_TYPE_TWO_SIDED = 5, WELDING_TYPE_NONE = 6 };
};

class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum SubpartType { SUBPART_TRIANGLES, SUBPART_SHAPE };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16, MATERIAL_INDICES_MAX_ID };
    enum IndexStridingType { INDICES_INVALID, INDICES_INT8, INDICES_INT16, INDICES_INT32, INDICES_MAX_ID };

    struct Subpart {
        HK_FORCE_INLINE Subpart(SubpartType type);
        hkEnum<SubpartType, hkInt8> m_type;                                         // +0x0
        hkEnum<MaterialIndexStridingType, hkInt8> m_materialIndexStridingType;      // +0x1
        hkInt16 m_materialStriding;                                                 // +0x2
        const void *m_materialIndexBase;                                            // +0x4
        hkUint16 m_materialIndexStriding;                                           // +0x8
        hkUint16 m_numMaterials;                                                    // +0xA
        const void *m_materialBase;                                                 // +0xC
        const hkClass *m_materialClass;                                             // +0x10
    };

    struct TrianglesSubpart : public Subpart {
        HK_FORCE_INLINE TrianglesSubpart();
        int m_numTriangleShapes;                              // +0x14
        const float *m_vertexBase;                            // +0x18
        int m_vertexStriding;                                 // +0x1C
        int m_numVertices;                                    // +0x20
        hkVector4 m_extrusion;                                // +0x30
        const void *m_indexBase;                              // +0x40
        int m_indexStriding;                                  // +0x44
        hkEnum<IndexStridingType, hkInt8> m_stridingType;     // +0x48
        hkInt8 m_flipAlternateTriangles;                      // +0x49
        int m_triangleOffset;                                 // +0x4C
        hkUlong m_userData;                                   // +0x50
    };

    struct ShapesSubpart : public Subpart {
        hkUint32 m_data[11];
    };

    hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex);
    virtual ~hkpExtendedMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    TrianglesSubpart m_embeddedTrianglesSubpart;                  // +0x20
    hkVector4 m_scaling;                                          // +0x80
    hkVector4 m_aabbHalfExtents;                                  // +0x90
    hkVector4 m_aabbCenter;                                       // +0xA0
    int m_numBitsForSubpartIndex;                                 // +0xB0
    hkArray<TrianglesSubpart> m_trianglesSubparts;                // +0xB4
    hkArray<ShapesSubpart> m_shapesSubparts;                      // +0xC0
    hkArray<hkUint16> m_weldingInfo;                              // +0xCC
    hkEnum<hkpWeldingUtility::WeldingType, hkUint8> m_weldingType;  // +0xD8
    hkUint32 m_defaultCollisionFilterInfo;                        // +0xDC
    int m_cachedNumChildShapes;                                   // +0xE0
    hkReal m_triangleRadius;                                      // +0xE4
    hkInt32 m_padding[2];                                         // +0xE8
};

HK_FORCE_INLINE hkpExtendedMeshShape::Subpart::Subpart(SubpartType type) : m_type(type)
{
    m_materialIndexStridingType = MATERIAL_INDICES_INT8;
    m_numMaterials = 1;
    m_materialIndexStriding = 0;
    m_materialStriding = 0;
    m_materialBase = HK_NULL;
    m_materialIndexBase = HK_NULL;
    m_materialClass = HK_NULL;
}

HK_FORCE_INLINE hkpExtendedMeshShape::TrianglesSubpart::TrianglesSubpart() : Subpart(SUBPART_TRIANGLES)
{
    m_flipAlternateTriangles = 0;
    m_extrusion.setZero4();
    m_userData = 0;
}

hkpExtendedMeshShape::hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
    : hkpShapeCollection(HK_SHAPE_EXTENDED_MESH, COLLECTION_EXTENDED_MESH)
{
    m_scaling.setAll(lbl_82002AE0);
    m_defaultCollisionFilterInfo = 0;
    m_triangleRadius = radius;
    m_numBitsForSubpartIndex = numBitsForSubpartIndex;
    m_weldingType = hkpWeldingUtility::WELDING_TYPE_NONE;
    m_aabbHalfExtents.setAll(lbl_82134504);
    m_aabbCenter.setZero4();
    m_cachedNumChildShapes = 0;
}
