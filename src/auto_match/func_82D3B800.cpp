// hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag), the
// out-of-line finish constructor (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldBvTreeShape.cpp). When finishing, hkpShape's clears m_type, hkpBvTreeShape's sets the
// type and BVTREE_USER, and this class's sets the type and BVTREE_TRISAMPLED_HEIGHTFIELD. Its finish function
// and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name and is written as an
// extern "C" function that runs the constructor on the given storage (MSVC's explicit constructor call;
// placement new would add a null check).
#include "havok/hkBase.h"
#include "havok/hkpTriSampledHeightFieldBvTreeShape.h"

// The header declares the constructor; it is defined here, HK_FORCE_INLINE, or the explicit call stays a call.
HK_FORCE_INLINE hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag flag)
    : hkpBvTreeShape(flag), m_childContainer(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_BV_TREE;
        m_bvTreeType = BVTREE_TRISAMPLED_HEIGHTFIELD;
    }
}

extern "C" hkpTriSampledHeightFieldBvTreeShape *fn_82D3B800(hkpTriSampledHeightFieldBvTreeShape *self,
                                                           hkFinishLoadedObjectFlag flag)
{
    self->hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(flag);
    return self;
}
