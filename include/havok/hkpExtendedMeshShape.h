// hkpExtendedMeshShape (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/hkpExtendedMeshShape.h),
// 0xF0 bytes: an hkpShapeCollection over triangle and shape subparts. RTTI ??_R3hkpExtendedMeshShape@@8;
// vtables ??_7hkpExtendedMeshShape@@6BhkpShape@@@ (15 slots) and ??_7hkpExtendedMeshShape@@6BhkpShapeContainer@@@.
//
// The finish constructor is out of line (82D438E0). When finishing it sets COLLECTION_EXTENDED_MESH, marks
// every subpart whose material index striding type is MATERIAL_INDICES_INVALID as MATERIAL_INDICES_INT8, moves
// a single triangles subpart into the embedded one (the array then points at it, DONT_DEALLOCATE_FLAG) and
// turns a default collision filter info of -1 into 0x80000000; finishing or not it sets
// HK_SHAPE_EXTENDED_MESH. hkpStorageExtendedMeshShape's finish constructor (82D4E300) calls it.
//
// The subpart layouts are from the finish constructors of the two classes; the bytes between are not
// known. The two leading subpart fields must be hkEnum (a class wrapper): with plain hkInt8 fields the
// second loop's add operands come out swapped in 82D438E0. TrianglesSubpart is 16-byte aligned (it holds
// hkVector4s) and is copied with ld/std.
#ifndef HAVOK_HKPEXTENDEDMESHSHAPE_H
#define HAVOK_HKPEXTENDEDMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkpShape.h"

class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum SubpartType { SUBPART_TRIANGLES, SUBPART_SHAPE };
    enum IndexStridingType { INDICES_INVALID, INDICES_INT8, INDICES_INT16, INDICES_INT32 };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16 };

    // 0x14 bytes.
    struct Subpart {
        hkEnum<SubpartType, hkInt8> m_type;                                    // +0x0
        hkEnum<MaterialIndexStridingType, hkInt8> m_materialIndexStridingType; // +0x1
        hkInt16 m_materialStriding;                                            // +0x2
        const void *m_materialIndexBase;                                       // +0x4
        hkUint16 m_materialIndexStriding;                                      // +0x8
        hkUint16 m_numMaterials;                                               // +0xA
        const void *m_materialBase;                                            // +0xC
        hkUlong m_userData;                                                    // +0x10
    };
    // 0x60 bytes.
    struct __declspec(align(16)) TrianglesSubpart : public Subpart {
        int m_numTriangleShapes;                // +0x14
        const void *m_vertexBase;               // +0x18
        int m_numVertices;                      // +0x1C
        hkUint64 m_data20[4];                   // +0x20
        const void *m_indexBase;                // +0x40
        int m_vertexStriding;                   // +0x44
        hkEnum<IndexStridingType, hkInt8> m_stridingType;   // +0x48
        hkUint8 m_data49[7];                    // +0x49
        hkUint64 m_data50[2];                   // +0x50
    };
    // 0x40 bytes.
    struct ShapesSubpart : public Subpart {
        hkUint32 m_data14[(0x40 - 0x14) / 4];
    };

    hkpExtendedMeshShape(hkFinishLoadedObjectFlag flag);   // out of line (82D438E0)
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
    hkUint32 m_padDC;                               // +0xDC
    int m_defaultCollisionFilterInfo;               // +0xE0
    hkUint8 m_padE4[0xF0 - 0xE4];
};

#endif
