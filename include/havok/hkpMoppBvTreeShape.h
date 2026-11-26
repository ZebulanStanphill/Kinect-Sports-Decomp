// hkpMoppBvTreeShape (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.h), 0x40 bytes: a MOPP tree
// over a shape collection, held in an hkpSingleShapeContainer. The size and members are the game's hkClass
// (initialiser 8312DF30; m_childSize is not serialised).
//
// - The constructor is out of line (??0hkpMoppBvTreeShape@@QAA@PBVhkpShapeCollection@@PBVhkpMoppCode@@@Z,
//   82D4BC48), and so is the destructor (82D4BAA8).
// - The finish constructor exists in the game only as fn_82D3A7D8 (its unit defines it): when finishing it sets
//   HK_SHAPE_MOPP and copies the code's offset, data pointer and size, as the constructor does.
// ??_7hkpMoppBvTreeShape@@6B@ has 14 slots.
#ifndef HAVOK_HKPMOPPBVTREESHAPE_H
#define HAVOK_HKPMOPPBVTREESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkMoppBvTreeShapeBase.h"
#include "havok/hkpShape.h"

class hkpMoppBvTreeShape : public hkMoppBvTreeShapeBase {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpMoppBvTreeShape(const hkpShapeCollection *collection, const hkpMoppCode *code);   // out of line (82D4BC48)
    hkpMoppBvTreeShape(hkFinishLoadedObjectFlag flag);                                   // fn_82D3A7D8
    virtual ~hkpMoppBvTreeShape();                                                       // out of line (82D4BAA8)

    HK_FORCE_INLINE const hkpShapeCollection *getShapeCollection() const
    {
        return static_cast<const hkpShapeCollection *>(m_child.m_childShape);
    }

    hkpSingleShapeContainer m_child;   // +0x30
    int m_childSize;                   // +0x38
};

#endif
