// hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection (Physics/Collide/Shape/HeightField/
// TriSampledHeightField/hkpTriSampledHeightFieldCollection.cpp): releases the heightfield, then the hkArray
// of welding info (+0x24) and the bases are destroyed. RTTI: hkpShapeCollection (hkpShapeContainer at +0x10).
#include "havok/hkpTriSampledHeightFieldCollection.h"
#include "havok/hkpSampledHeightFieldShape.h"

hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection()
{
    m_heightfield->removeReference();
}
