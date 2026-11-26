// hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(
// const hkpTriSampledHeightFieldCollection *collection, hkBool doAabbRejection)
// (Physics/Collide/Shape/HeightField/TriSampledHeightField/hkpTriSampledHeightFieldBvTreeShape.cpp):
// hkpBvTreeShape(HK_SHAPE_TRI_SAMPLED_HEIGHT_FIELD_BV_TREE, BVTREE_TRISAMPLED_HEIGHTFIELD), the child
// container (which adds a reference to the collection), then the AABB rejection flag.
// hkpBvTreeShape::m_bvTreeType is an hkEnum<BvTreeType, hkUint8>: initialised through hkEnum's constructor,
// its store is scheduled with hkpShape's member stores, ahead of the vtable store.
#include "havok/hkpTriSampledHeightFieldBvTreeShape.h"

hkpTriSampledHeightFieldBvTreeShape::hkpTriSampledHeightFieldBvTreeShape(const hkpTriSampledHeightFieldCollection *c,
                                                                         hkBool doAabbRejection)
    : hkpBvTreeShape(hkpShapeType(8), BVTREE_TRISAMPLED_HEIGHTFIELD),   // HK_SHAPE_TRI_SAMPLED_HEIGHT_FIELD_BV_TREE
      m_childContainer(reinterpret_cast<const hkpShape *>(c))
{
    m_wantAabbRejectionTest = doAabbRejection;
}
