// hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *, hkReal)
// (Physics/Collide/Shape/HeightField/TriSampledHeightField/hkpTriSampledHeightFieldCollection.cpp): takes a
// reference to the height field.
#include "havok/hkBase.h"
#include "havok/hkpSampledHeightFieldShape.h"
#include "havok/hkpTriSampledHeightFieldCollection.h"

hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *shape, hkReal radius)
    : hkpShapeCollection(HK_SHAPE_COLLECTION, COLLECTION_TRISAMPLED_HEIGHTFIELD)
{
    m_radius = radius;
    m_heightfield = shape;
    m_triangleExtrusion.setZero4();
    m_heightfield->addReference();
}
