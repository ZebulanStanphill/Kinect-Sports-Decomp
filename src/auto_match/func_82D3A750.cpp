// hkMoppBvTreeShapeBase scalar deleting destructor (Physics/Collide/Shape/Compound/Tree/Mopp/
// hkpMoppBvTreeShape.h): the inline destructor releases m_code, then the class allocator's delete.
// The function at the end only makes the compiler emit the vtable.
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

class hkpMoppCode : public hkReferencedObject {
};

// hkpBvTreeShape (Physics/Collide/Shape/Compound/Tree/hkpBvTreeShape.h): hkpShape, then
// hkEnum<BvTreeType, hkUint8> m_bvTreeType (+0x10).
class hkpBvTreeShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBvTreeShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) {}

    hkUint8 m_bvTreeType;   // +0x10
};

// hkMoppBvTreeShapeBase, 0x30 bytes, 16-byte aligned: its destructor releases m_code.
class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkMoppBvTreeShapeBase(hkFinishLoadedObjectFlag flag) : hkpBvTreeShape(flag) {}
    virtual ~hkMoppBvTreeShapeBase() { m_code->removeReference(); }

    const hkpMoppCode *m_code;     // +0x14
    const hkUint8 *m_moppData;     // +0x18
    hkUint32 m_moppDataSize;       // +0x1C
    hkVector4 m_codeInfoCopy;      // +0x20
};

void emitVtable_82D3A750(hkMoppBvTreeShapeBase *p) { p->hkMoppBvTreeShapeBase::~hkMoppBvTreeShapeBase(); }
