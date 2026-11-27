// hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag), the
// out-of-line finish constructor (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldBvTreeShape.cpp). When finishing, hkpShape's clears m_type, hkpBvTreeShape's sets the
// type and BVTREE_USER, and this class's sets the type and BVTREE_TRISAMPLED_HEIGHTFIELD. Its finish function
// and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpTriSampledHeightFieldBvTreeShape.h"

hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(hkFinishLoadedObjectFlag flag)
    : hkpBvTreeShape(flag), m_childContainer(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_BV_TREE;
        m_bvTreeType = BVTREE_TRISAMPLED_HEIGHTFIELD;
    }
}
