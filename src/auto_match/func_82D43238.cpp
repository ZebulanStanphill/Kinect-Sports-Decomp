// hkpExtendedMeshShape::hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex)
// (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.cpp), /O2 /QVMXReserve.
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkEnum.h"
#include "havok/hkpShape.h"

// The source's literals 1.0f and -HK_REAL_MAX, folded by the linker into the game's copies. Defined here so the
// compiler knows they are read-only and schedules their loads like literals.

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
    m_scaling.setAll(1.0f);
    m_defaultCollisionFilterInfo = 0;
    m_triangleRadius = radius;
    m_numBitsForSubpartIndex = numBitsForSubpartIndex;
    m_weldingType = hkpWeldingUtility::WELDING_TYPE_NONE;
    m_aabbHalfExtents.setAll(-3.40282e+38f);
    m_aabbCenter.setZero4();
    m_cachedNumChildShapes = 0;
}
