// hkpMeshShape::hkpMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.cpp). When finishing, hkpShape's clears m_type,
// hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3); this class's marks every
// subpart whose byte at +0x11 (a storage type) is 0 as 1, then sets HK_SHAPE_TRIANGLE_COLLECTION (0x18)
// and COLLECTION_MESH_SHAPE. Because a Matching unit calls it, it keeps its fn_ name and is written as an
// extern "C" function that runs the constructor on the given storage (MSVC's explicit constructor call;
// placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h), 0x60 bytes.
class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Subpart {
        hkUint8 m_data0[0x11];
        hkUint8 m_stridingType;   // +0x11
        hkUint8 m_data1[0x26];    // 0x38 bytes
    };
    HK_FORCE_INLINE hkpMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_subparts(flag), m_weldingInfo(flag)
    {
        if (flag.m_finishing) {
            for (int i = 0; i < m_subparts.getSize(); i++) {
                if (m_subparts[i].m_stridingType == 0)
                    m_subparts[i].m_stridingType = 1;
            }
            m_type = hkpShapeType(0x18);
            m_collectionType = COLLECTION_MESH_SHAPE;
        }
    }
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    hkVector4 m_scaling;                 // +0x20
    hkInt32 m_numBitsForSubpartIndex;    // +0x30
    hkArray<Subpart> m_subparts;         // +0x34
    hkArray<hkUint16> m_weldingInfo;     // +0x40
    hkUint8 m_weldingType;               // +0x4C
    hkReal m_radius;                     // +0x50
    int m_pad[3];                        // +0x54
};

extern "C" void fn_82D4B0F8(hkpMeshShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpMeshShape::hkpMeshShape(flag);
}
