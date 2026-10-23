// hkpStorageMeshShape::~hkpStorageMeshShape (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp):
// stores its two vtables, releases every subpart storage, destroys the m_storage hkArray (+0x60), then
// calls the out-of-line hkpMeshShape destructor (??1hkpMeshShape@@UAA@XZ, fn_82D3A2E0).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};

// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h), 0x60 bytes, as in func_82D3A2E0.cpp;
// its destructor is emitted out of line there.
class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Subpart {
        hkUint32 m_data[14];   // 0x38 bytes
    };
    hkpMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_subparts(flag), m_weldingInfo(flag) {}
    virtual ~hkpMeshShape();
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

class hkpStorageMeshShape : public hkpMeshShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct SubpartStorage : public hkReferencedObject {
    };
    hkpStorageMeshShape(hkFinishLoadedObjectFlag flag) : hkpMeshShape(flag), m_storage(flag) {}
    virtual ~hkpStorageMeshShape();

    hkArray<SubpartStorage *> m_storage;   // +0x60
};

hkpStorageMeshShape::~hkpStorageMeshShape()
{
    for (int i = 0; i < m_storage.getSize(); i++) {
        m_storage[i]->removeReference();
    }
}
