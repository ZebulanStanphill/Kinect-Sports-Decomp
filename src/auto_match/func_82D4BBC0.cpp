// hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code)
// (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp): hkpBvTreeShape(type, BVTREE_MOPP),
// then the MOPP code (referenced), a copy of its code info and its data pointer and size.
// hkpBvTreeShape::m_bvTreeType is an hkEnum<BvTreeType, hkUint8> (as in func_82D515A0.cpp): initialised
// through hkEnum's constructor, its store stays ahead of the vtable and m_code stores; a plain hkUint8
// member lets the scheduler hoist the vtable and m_code stores above it.
#include "havok/hkMoppBvTreeShapeBase.h"

hkMoppBvTreeShapeBase::hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code)
    : hkpBvTreeShape(type, BVTREE_MOPP)
{
    m_code = code;
    m_code->addReference();
    m_codeInfoCopy = code->m_info.m_offset;
    m_moppData = code->m_data.m_data;
    m_moppDataSize = code->getCodeSize();
}
