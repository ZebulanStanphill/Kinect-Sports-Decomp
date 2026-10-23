// hkpMeshShape::~hkpMeshShape, the implicit destructor, emitted out of line: the deleting destructors of
// hkpMeshShape and hkpFastMeshShape (fn_82D3A410, folded) call it. It destroys the welding info and
// subpart hkArrays, then the bases. The function at the end only makes the compiler emit the vtable.
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

// hkpMeshShape (Physics/Collide/Shape/Deprecated/Mesh/hkpMeshShape.h): hkpShapeCollection (hkpShapeContainer at
// +0x10), 16-byte aligned.
class hkpMeshShape : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Subpart {
        hkUint32 m_data[14];   // 0x38 bytes
    };
    hkpMeshShape(hkFinishLoadedObjectFlag flag)
        : hkpShapeCollection(flag), m_subparts(flag), m_weldingInfo(flag) {}
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

void emitVtable_82D3A2E0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpMeshShape(f); }
