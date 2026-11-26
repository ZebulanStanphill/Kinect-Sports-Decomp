// hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag), the
// out-of-line finish constructor (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldBvTreeShape.cpp). When finishing, hkpShape's clears m_type, hkpBvTreeShape's sets the
// type and BVTREE_USER, and this class's sets the type and BVTREE_TRISAMPLED_HEIGHTFIELD. Its finish function
// and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name and is written as an
// extern "C" function that runs the constructor on the given storage (MSVC's explicit constructor call;
// placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpBvTreeShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum BvTreeType { BVTREE_MOPP, BVTREE_TRISAMPLED_HEIGHTFIELD, BVTREE_USER };
    hkpBvTreeShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag)
    {
        if (flag.m_finishing) {
            m_type = hkpShapeType(8);
            m_bvTreeType = BVTREE_USER;
        }
    }

    hkUint8 m_bvTreeType;   // +0x10 hkEnum<BvTreeType, hkUint8>
};

class hkpTriSampledHeightFieldBvTreeShape : public hkpBvTreeShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag flag) : hkpBvTreeShape(flag), m_childContainer(flag)
    {
        if (flag.m_finishing) {
            m_type = hkpShapeType(8);
            m_bvTreeType = BVTREE_TRISAMPLED_HEIGHTFIELD;
        }
    }

    hkpSingleShapeContainer m_childContainer;   // +0x14
    int m_childSize;                            // +0x1C
    hkBool m_wantAabbRejectionTest;             // +0x20
};

extern "C" hkpTriSampledHeightFieldBvTreeShape *fn_82D3B800(hkpTriSampledHeightFieldBvTreeShape *self,
                                                           hkFinishLoadedObjectFlag flag)
{
    self->hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(flag);
    return self;
}
