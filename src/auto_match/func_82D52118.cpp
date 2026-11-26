#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"
class hkpSampledHeightFieldShape : public hkReferencedObject {};
class hkpTriSampledHeightFieldCollection : public hkpShapeCollection {
public: HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE); hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *,float);
 hkpSampledHeightFieldShape *heightfield; int pad;
 float radius; hkArray<unsigned short> weldingInfo; hkVector4 extrusion;
};
hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *shape,float r)
    : hkpShapeCollection(HK_SHAPE_COLLECTION, COLLECTION_TRISAMPLED_HEIGHTFIELD) {
 radius=r; heightfield=shape; extrusion.setZero4(); heightfield->addReference();
}
