// hkMoppBvTreeShapeBase (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.h), 0x30 bytes: a bounding
// volume tree whose tree is an hkpMoppCode. The size and members are the game's hkClass (initialiser 8312DEB0;
// m_moppData, m_moppDataSize and m_codeInfoCopy are not serialised: they cache the code's data, size and offset).
//
// - The constructor is out of line (??0hkMoppBvTreeShapeBase@@QAA@W4hkpShapeType@@PBVhkpMoppCode@@@Z, 82D4BBC0):
//   it takes a reference to the code and copies its offset, data pointer and size.
// - The finish constructor sets BVTREE_MOPP when finishing, after hkpBvTreeShape's (82D3A7D8).
// - The destructor is inline: it releases the code (the deleting destructor 82D3A750 and hkpMoppBvTreeShape's
//   destructor 82D4BAA8 inline it).
// ??_7hkMoppBvTreeShapeBase@@6B@ has 14 slots; several are pure.
#ifndef HAVOK_HKMOPPBVTREESHAPEBASE_H
#define HAVOK_HKMOPPBVTREESHAPEBASE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpBvTreeShape.h"
#include "havok/hkpMoppCode.h"

class hkMoppBvTreeShapeBase : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkMoppBvTreeShapeBase(hkpShapeType type, const hkpMoppCode *code);   // out of line (82D4BBC0)
    hkMoppBvTreeShapeBase(hkFinishLoadedObjectFlag flag) : hkpBvTreeShape(flag)
    {
        if (flag.m_finishing)
            m_bvTreeType = BVTREE_MOPP;
    }
    virtual ~hkMoppBvTreeShapeBase() { m_code->removeReference(); }

    HK_FORCE_INLINE const hkpMoppCode *getMoppCode() const { return m_code; }

    const hkpMoppCode *m_code;     // +0x14
    const hkUint8 *m_moppData;     // +0x18
    hkUint32 m_moppDataSize;       // +0x1C
    hkVector4 m_codeInfoCopy;      // +0x20
};

#endif
