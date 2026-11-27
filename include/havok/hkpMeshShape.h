// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h), 0x60 bytes: an
// hkpShapeCollection over triangle subparts. RTTI ??_R3hkpMeshShape@@8; vtables
// ??_7hkpMeshShape@@6BhkpShape@@@ (14 slots) and ??_7hkpMeshShape@@6BhkpShapeContainer@@@.
//
// The finish constructor is out of line (82D4B0F8). When finishing, hkpShape's clears m_type,
// hkpShapeCollection's sets HK_SHAPE_COLLECTION and COLLECTION_USER; hkpMeshShape's marks every subpart
// whose material index striding type is MATERIAL_INDICES_INVALID as MATERIAL_INDICES_INT8, then sets
// HK_SHAPE_TRIANGLE_COLLECTION and COLLECTION_MESH_SHAPE. hkpFastMeshShape (82D3A3A0) and
// hkpStorageMeshShape (82D4FF88) call it from their own finish constructors.
//
// Subpart's layout is from hkpStorageMeshShape's finish constructor (the four pointers it sets) and
// the game's hkClass data; the other virtual functions are the shape container's, as far as the units
// need them. In the hkpShape vtable (14 slots), hkpShapeCollection's two welding slots, which hkpShape.h does
// not declare yet, are declared here so that the slot after them lands at its offset: +0x2C initWeldingInfo
// (82D4AE30: stores the type; WELDING_TYPE_NONE frees the array, any other numbers the triangles and sizes it),
// +0x30 setWeldingInfo (82D4A620: one key's entry) and +0x34 addSubpart (82D4AF70), which
// hkpStorageMeshShape overrides. The three names are Havok's (not confirmed by the game).
#ifndef HAVOK_HKPMESHSHAPE_H
#define HAVOK_HKPMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"
#include "havok/hkpWeldingUtility.h"

class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum IndexStridingType { INDICES_INVALID, INDICES_INT16, INDICES_INT32 };
    enum MaterialIndexStridingType { MATERIAL_INDICES_INVALID, MATERIAL_INDICES_INT8, MATERIAL_INDICES_INT16 };

    // 0x38 bytes.
    struct Subpart {
        const hkReal *m_vertexBase;           // +0x0
        int m_vertexStriding;                 // +0x4
        int m_numVertices;                    // +0x8
        const void *m_indexBase;              // +0xC
        hkUint8 m_stridingType;               // +0x10 hkEnum<IndexStridingType, hkInt8>
        hkUint8 m_materialIndexStridingType;  // +0x11 hkEnum<MaterialIndexStridingType, hkInt8>
        int m_indexStriding;                  // +0x14
        int m_flipAlternateTriangles;         // +0x18
        int m_numTriangles;                   // +0x1C
        const void *m_materialIndexBase;      // +0x20
        int m_materialIndexStriding;          // +0x24
        const void *m_materialBase;           // +0x28
        int m_materialStriding;               // +0x2C
        int m_numMaterials;                   // +0x30
        int m_triangleOffset;                 // +0x34
    };

    // Out of line (??0hkpMeshShape@@QAA@MH@Z, 82D4B040): scaling 1, welding type 6, the two arguments.
    // hkpFastMeshShape's (82D4B378) and hkpStorageMeshShape's constructors (82D4F638, 82D50070) call it.
    hkpMeshShape(hkReal radius, int numBitsForSubpartIndex);
    hkpMeshShape(hkFinishLoadedObjectFlag flag);   // out of line (82D4B0F8)

    // Havok's accessors (82D50070 walks the source mesh's subparts with them).
    int getNumSubparts() const { return m_subparts.getSize(); }
    const Subpart &getSubpartAt(int i) const { return m_subparts[i]; }

    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;
    virtual void initWeldingInfo(hkpWeldingUtility::WeldingType weldingType);   // +0x2C (82D4AE30)
    virtual void setWeldingInfo(hkpShapeKey key, hkInt16 weldingInfo);         // +0x30 (82D4A620)
    virtual void addSubpart(const Subpart &part);                              // +0x34 (82D4AF70)

    hkVector4 m_scaling;                 // +0x20
    hkInt32 m_numBitsForSubpartIndex;    // +0x30
    hkArray<Subpart> m_subparts;         // +0x34
    hkArray<hkUint16> m_weldingInfo;     // +0x40
    hkUint8 m_weldingType;               // +0x4C
    hkReal m_radius;                     // +0x50
    int m_pad[3];                        // +0x54
};

#endif
