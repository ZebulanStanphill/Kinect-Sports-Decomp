// hkpSimpleMeshShape (Physics/Collide/Shape/Deprecated/SimpleMesh/hkpSimpleMeshShape.h; its class units are in
// Physics/Collide/Shape/Compound/Collection/SimpleMesh), 0x44 bytes: a shape collection over an indexed triangle
// list it owns. The members, offsets and types are the game's hkClass (initialiser 8312E450), and so is the
// nested Triangle (0x10, 8312E3C8: a, b, c as INT32, weldingInfo as UINT16). RTTI ??_R3hkpSimpleMeshShape@@8;
// vtables ??_7hkpSimpleMeshShape@@6BhkpShape@@@ (13 slots) and ??_7hkpSimpleMeshShape@@6BhkpShapeContainer@@@.
//
// - The constructor is out of line (??0hkpSimpleMeshShape@@QAA@M@Z, 82D4DBA8): empty arrays, the radius and
//   WELDING_TYPE_NONE.
// - The finish constructor exists in the game only as fn_82D3AFC0 (its unit defines it): when finishing it sets
//   HK_SHAPE_TRIANGLE_COLLECTION and COLLECTION_SIMPLE_MESH.
// - The destructor is the implicit one, emitted out of line (??1hkpSimpleMeshShape@@UAA@XZ, 82D3B058); the
//   deleting destructor is 82D3B160.
// - getChildShape is out of line (82D4D998: an hkpTriangleShape in the buffer).
#ifndef HAVOK_HKPSIMPLEMESHSHAPE_H
#define HAVOK_HKPSIMPLEMESHSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkEnum.h"
#include "havok/hkpShape.h"
#include "havok/hkpWeldingUtility.h"

class hkpSimpleMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);

    // 0x10 bytes.
    struct Triangle {
        int m_a;                  // +0x0
        int m_b;                  // +0x4
        int m_c;                  // +0x8
        hkUint16 m_weldingInfo;   // +0xC
    };

    hkpSimpleMeshShape(hkReal radius);                   // out of line (82D4DBA8)
    hkpSimpleMeshShape(hkFinishLoadedObjectFlag flag);   // fn_82D3AFC0

    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;   // 82D4D998

    hkArray<hkVector4> m_vertices;                                   // +0x18
    hkArray<Triangle> m_triangles;                                   // +0x24
    hkArray<hkUint8> m_materialIndices;                              // +0x30
    hkReal m_radius;                                                 // +0x3C
    hkEnum<hkpWeldingUtility::WeldingType, hkUint8> m_weldingType;   // +0x40
};

#endif
