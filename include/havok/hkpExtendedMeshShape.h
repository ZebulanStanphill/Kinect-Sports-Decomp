// hkpExtendedMeshShape (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.h),
// 0xF0 bytes: an hkpShapeCollection over triangle and shape subparts. RTTI ??_R3hkpExtendedMeshShape@@8;
// vtables ??_7hkpExtendedMeshShape@@6BhkpShape@@@ (15 slots) and ??_7hkpExtendedMeshShape@@6BhkpShapeContainer@@@.
//
// The finish constructor is out of line (82D438E0). When finishing it sets COLLECTION_EXTENDED_MESH, marks
// every subpart whose material index striding type is MATERIAL_INDICES_INVALID as MATERIAL_INDICES_INT8, moves
// a single triangles subpart into the embedded one (the array then points at it, DONT_DEALLOCATE_FLAG) and
// turns an m_cachedNumChildShapes of -1 into 0x80000000; finishing or not it sets
// HK_SHAPE_EXTENDED_MESH. hkpStorageExtendedMeshShape's finish constructor (82D4E300) calls it.
//
// The members, their offsets and types are the game's reflection tables: hkpExtendedMeshShape (0xF0 bytes,
// initialiser 8312D930, members lbl_83180E20), Subpart (0x14, 8312D790), TrianglesSubpart (0x60, 8312D818)
// and ShapesSubpart (0x40, 8312D898). The constructor (82D43238) fills them in the same places.
// The two leading subpart fields must be hkEnum (a class wrapper): with plain hkInt8 fields the second
// loop's add operands come out swapped in 82D438E0. TrianglesSubpart is 16-byte aligned (it holds an
// hkVector4) and is copied with ld/std.
// ShapesSubpart's child shapes are an hkArray of hkRefPtr in Havok; its destructor (which releases them and
// frees the array) exists in the game only as fn_82D43000, so the member is an hkArrayBase here (no
// destructor of its own) and the struct's destructor calls that function. Its copy assignment is out of line
// too, as fn_82D43AA0: the 0x14 bytes of Subpart as words, the array element by element with the references
// counted, the two vectors.
#ifndef HAVOK_HKPEXTENDEDMESHSHAPE_H
#define HAVOK_HKPEXTENDEDMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkQuaternion.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

extern "C" void fn_82D43000(void *self);   // hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart()

class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum SubpartType { SUBPART_TRIANGLES, SUBPART_SHAPE };
    enum IndexStridingType { INDICES_INVALID, INDICES_INT8, INDICES_INT16, INDICES_INT32 };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16 };

    // 0x14 bytes. The constructor is the one 82D43238 expands for the embedded subpart.
    struct Subpart {
        HK_FORCE_INLINE Subpart(SubpartType type) : m_type(type)
        {
            m_materialIndexStridingType = MATERIAL_INDICES_INT8;
            m_numMaterials = 1;
            m_materialIndexStriding = 0;
            m_materialStriding = 0;
            m_materialBase = HK_NULL;
            m_materialIndexBase = HK_NULL;
            m_materialClass = HK_NULL;
        }
        HK_FORCE_INLINE Subpart(hkFinishLoadedObjectFlag flag) {}

        hkEnum<SubpartType, hkInt8> m_type;                                    // +0x0
        hkEnum<MaterialIndexStridingType, hkInt8> m_materialIndexStridingType; // +0x1
        hkInt16 m_materialStriding;                                            // +0x2
        const void *m_materialIndexBase;                                       // +0x4
        hkUint16 m_materialIndexStriding;                                      // +0x8
        hkUint16 m_numMaterials;                                               // +0xA
        const void *m_materialBase;                                            // +0xC
        const hkClass *m_materialClass;                                        // +0x10
    };
    // 0x60 bytes.
    struct TrianglesSubpart : public Subpart {
        HK_FORCE_INLINE TrianglesSubpart() : Subpart(SUBPART_TRIANGLES)
        {
            m_flipAlternateTriangles = 0;
            m_extrusion.setZero4();
            m_userData = 0;
        }
        HK_FORCE_INLINE TrianglesSubpart(hkFinishLoadedObjectFlag flag) : Subpart(flag) {}

        int m_numTriangleShapes;                            // +0x14
        const void *m_vertexBase;                           // +0x18
        int m_vertexStriding;                               // +0x1C
        int m_numVertices;                                  // +0x20
        hkVector4 m_extrusion;                              // +0x30
        const void *m_indexBase;                            // +0x40
        int m_indexStriding;                                // +0x44
        hkEnum<IndexStridingType, hkInt8> m_stridingType;   // +0x48
        hkInt8 m_flipAlternateTriangles;                    // +0x49
        int m_triangleOffset;                               // +0x4C
        hkUlong m_userData;                                 // +0x50
    };
    // 0x40 bytes (see the comment at the top).
    struct ShapesSubpart : public Subpart {
        HK_FORCE_INLINE ShapesSubpart(hkFinishLoadedObjectFlag flag) : Subpart(flag), m_childShapes(flag) {}
        ~ShapesSubpart() { fn_82D43000(this); }

        hkArrayBase<hkRefPtr<hkpConvexShape> > m_childShapes;   // +0x14
        hkQuaternion m_rotation;                                // +0x20
        hkVector4 m_translation;                                // +0x30
    };

    // Out of line (??0hkpExtendedMeshShape@@QAA@MH@Z, 82D43238): scaling 1, no filter info, the radius and
    // the bit count, welding type 6, an inverted AABB. hkpStorageExtendedMeshShape's constructors call it.
    hkpExtendedMeshShape(hkReal radius, int numBitsForSubpartIndex);
    hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag);   // out of line (82D438E0)
    virtual ~hkpExtendedMeshShape();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    TrianglesSubpart m_embeddedTrianglesSubpart;    // +0x20
    hkVector4 m_scaling;                            // +0x80
    hkVector4 m_aabbHalfExtents;                    // +0x90
    hkVector4 m_aabbCenter;                         // +0xA0
    hkInt32 m_numBitsForSubpartIndex;               // +0xB0
    hkArray<TrianglesSubpart> m_trianglesSubparts;  // +0xB4
    hkArray<ShapesSubpart> m_shapesSubparts;        // +0xC0
    hkArray<hkUint16> m_weldingInfo;                // +0xCC
    hkUint8 m_weldingType;                          // +0xD8 hkEnum<hkpWeldingUtility::WeldingType, hkUint8>
    hkUint32 m_defaultCollisionFilterInfo;          // +0xDC
    hkInt32 m_cachedNumChildShapes;                 // +0xE0
    hkReal m_triangleRadius;                        // +0xE4
    hkInt32 m_padding[2];                           // +0xE8
};

#endif
