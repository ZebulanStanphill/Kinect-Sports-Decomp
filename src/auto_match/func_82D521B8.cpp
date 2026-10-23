// hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection (Physics/Collide/Shape/HeightField/
// TriSampledHeightField/hkpTriSampledHeightFieldCollection.cpp): releases the heightfield, then the hkArray
// of welding info (+0x24) and the bases are destroyed. RTTI: hkpShapeCollection (hkpShapeContainer at +0x10).
#include "havok/hkpShape.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    hkQuadReal m_quad;
};

class hkpHeightFieldShape : public hkpShape {
};

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
};

class hkpTriSampledHeightFieldCollection : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag flag);
    virtual ~hkpTriSampledHeightFieldCollection();
    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpSampledHeightFieldShape *m_heightfield;   // +0x18
    int m_childSize;                                    // +0x1C
    hkReal m_radius;                                    // +0x20
    hkArray<hkUint16> m_weldingInfo;                    // +0x24
    hkVector4 m_triangleExtrusion;                      // +0x30
};

hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection()
{
    m_heightfield->removeReference();
}
