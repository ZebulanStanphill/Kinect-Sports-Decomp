// hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag), the out-of-line
// finish constructor (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldCollection.cpp). When finishing, hkpShape's clears m_type, hkpShapeCollection's sets
// HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's sets HK_SHAPE_COLLECTION and
// COLLECTION_TRISAMPLED_HEIGHTFIELD. Its finish function and getVtable function call it; because a Matching
// unit calls it, it keeps its fn_ name and is written as an extern "C" function that runs the constructor on
// the given storage (MSVC's explicit constructor call; placement new would add a null check). The constructor
// is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkBase.h"
#include "havok/hkpTriSampledHeightFieldCollection.h"

// The header declares the constructor; it is defined here.
HK_FORCE_INLINE hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag flag)
    : hkpShapeCollection(flag), m_weldingInfo(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_COLLECTION;
        m_collectionType = COLLECTION_TRISAMPLED_HEIGHTFIELD;
    }
}

extern "C" hkpTriSampledHeightFieldCollection *fn_82D3B8F0(hkpTriSampledHeightFieldCollection *self,
                                                          hkFinishLoadedObjectFlag flag)
{
    self->hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(flag);
    return self;
}
