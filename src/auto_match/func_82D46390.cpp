// hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape, the implicit destructor, emitted out of line;
// the deleting destructors of hkpSampledHeightFieldShape, hkpCompressedSampledHeightFieldShape and
// hkpStorageSampledHeightFieldShape call it (identical code folded). Nothing to destroy, so only
// hkBaseObject's vtable store is left. The function at the end only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

// hkpHeightFieldShape's finish constructor sets m_type unconditionally (0x1a, HK_SHAPE_HEIGHT_FIELD);
// hkpSampledHeightFieldShape's then sets 0xd (HK_SHAPE_SAMPLED_HEIGHT_FIELD) when finishing.
class hkpHeightFieldShape : public hkpShape {
public:
    hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) { m_type = hkpShapeType(0x1a); }
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum HeightFieldType { HEIGHTFIELD_STORAGE = 0, HEIGHTFIELD_COMPRESSED = 1, HEIGHTFIELD_USER = 2 };
    hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag)
    {
        if (flag.m_finishing)
            m_type = hkpShapeType(0xd);
    }

    int m_xRes;                        // +0x10
    int m_zRes;                        // +0x14
    hkReal m_heightCenter;             // +0x18
    hkBool m_useProjectionBasedHeight; // +0x1C
    hkUint8 m_heightfieldType;         // +0x1D hkEnum<HeightFieldType, hkUint8>
};

void emitVtable_82D46390(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSampledHeightFieldShape(f); }
