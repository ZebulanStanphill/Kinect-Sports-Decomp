// hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag), the out-of-line
// finish constructor (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldCollection.cpp). When finishing, hkpShape's clears m_type, hkpShapeCollection's sets
// HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's sets HK_SHAPE_COLLECTION and
// COLLECTION_TRISAMPLED_HEIGHTFIELD. Its finish function and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpTriSampledHeightFieldCollection.h"

hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_weldingInfo(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_COLLECTION;
        m_collectionType = COLLECTION_TRISAMPLED_HEIGHTFIELD;
    }
}
