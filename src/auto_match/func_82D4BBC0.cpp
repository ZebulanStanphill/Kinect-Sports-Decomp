// hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code)
// (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp): hkpBvTreeShape(type, BVTREE_MOPP),
// then the MOPP code (referenced), a copy of its code info and its data pointer and size.
// hkpBvTreeShape::m_bvTreeType is an hkEnum<BvTreeType, hkUint8> (as in func_82D515A0.cpp): initialised
// through hkEnum's constructor, its store stays ahead of the vtable and m_code stores; a plain hkUint8
// member lets the scheduler hoist the vtable and m_code stores above it.
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

// hkEnum (Common/Base/Types/hkBaseTypes.h): an enum stored in a smaller integer type.
template <typename ENUM, typename STORAGE>
class hkEnum {
public:
    hkEnum() {}
    hkEnum(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    operator ENUM() const { return static_cast<ENUM>(m_storage); }
    void operator=(ENUM e) { m_storage = static_cast<STORAGE>(e); }
    STORAGE m_storage;
};

// hkpMoppCode (Physics/Collide/Shape/Compound/Tree/Mopp/Code/hkpMoppCode.h).
class hkpMoppCode : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct CodeInfo {
        hkVector4 m_offset;
    };
    HK_FORCE_INLINE int getCodeSize() const { return m_data.getSize(); }

    CodeInfo m_info;            // +0x10
    hkArray<hkUint8> m_data;    // +0x20
    hkInt8 m_buildType;         // +0x2C
};

// hkpBvTreeShape (Physics/Collide/Shape/Compound/Tree/hkpBvTreeShape.h): hkpShape, then the tree type (+0x10).
class hkpBvTreeShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum BvTreeType { BVTREE_MOPP, BVTREE_TRISAMPLED_HEIGHTFIELD, BVTREE_USER };
    HK_FORCE_INLINE hkpBvTreeShape(hkpShapeType type, BvTreeType bvType) : hkpShape(type), m_bvTreeType(bvType) {}

    hkEnum<BvTreeType, hkUint8> m_bvTreeType;   // +0x10
};

class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code);

    const hkpMoppCode *m_code;     // +0x14
    const hkUint8 *m_moppData;     // +0x18
    hkUint32 m_moppDataSize;       // +0x1C
    hkVector4 m_codeInfoCopy;      // +0x20
};

hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code)
    : hkpBvTreeShape(type, BVTREE_MOPP)
{
    m_code = code;
    m_code->addReference();
    m_codeInfoCopy = code->m_info.m_offset;
    m_moppData = code->m_data.m_data;
    m_moppDataSize = code->getCodeSize();
}
