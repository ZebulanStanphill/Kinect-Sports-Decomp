// hkpTriSampledHeightFieldBvTreeShape (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldBvTreeShape.h), 0x30 bytes: the bounding volume tree over an
// hkpTriSampledHeightFieldCollection, held in an hkpSingleShapeContainer. The members and offsets are the game's
// hkClass (initialiser 8312EC78; the 12 bytes of padding after m_wantAabbRejectionTest are a member there).
//
// - The constructor is out of line (82D515A0).
// - The finish constructor is out of line (82D3B800): when finishing it sets
//   HK_SHAPE_BV_TREE and BVTREE_TRISAMPLED_HEIGHTFIELD after hkpBvTreeShape's.
// ??_7hkpTriSampledHeightFieldBvTreeShape@@6B@ has 14 slots; its deleting destructor is folded with
// hkpConvexTransformShapeBase's.
#ifndef HAVOK_HKPTRISAMPLEDHEIGHTFIELDBVTREESHAPE_H
#define HAVOK_HKPTRISAMPLEDHEIGHTFIELDBVTREESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpBvTreeShape.h"
#include "havok/hkpShape.h"

class hkpTriSampledHeightFieldCollection;

class hkpTriSampledHeightFieldBvTreeShape : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTriSampledHeightFieldBvTreeShape(const hkpTriSampledHeightFieldCollection *c,
                                        hkBool doAabbRejection);   // out of line (82D515A0)
    hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag flag);   // out of line (82D3B800)

    hkpSingleShapeContainer m_childContainer;   // +0x14
    int m_childSize;                            // +0x1C (not serialised)
    hkBool m_wantAabbRejectionTest;             // +0x20
    hkUint8 m_padding[12];                      // +0x21
};

#endif
