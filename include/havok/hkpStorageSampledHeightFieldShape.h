// hkpStorageSampledHeightFieldShape (Physics/Collide/Shape/HeightField/StorageSampledHeightField/
// hkpStorageSampledHeightFieldShape.h), 0x70 bytes: a sampled height field that stores its heights as hkReal.
// The members and offsets are the game's hkClass (initialiser 8312EB78).
//
// The constructor from another height field exists in the game only as fn_82D50990 (its unit defines it); the
// finish constructor is inline (finishLoadedObject 82D3B548) and the destructor is the implicit one, inlined in
// the deleting destructor (82D3B5E0).
// ??_7hkpStorageSampledHeightFieldShape@@6B@ (15 slots) overrides +0x18 (82D50478), +0x2C (82D50490),
// +0x34 (82D3B5C0) and +0x38 (82D39908).
#ifndef HAVOK_HKPSTORAGESAMPLEDHEIGHTFIELDSHAPE_H
#define HAVOK_HKPSTORAGESAMPLEDHEIGHTFIELDSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpSampledHeightFieldShape.h"

class hkpStorageSampledHeightFieldShape : public hkpSampledHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpStorageSampledHeightFieldShape(const hkpSampledHeightFieldShape *hf);   // fn_82D50990
    HK_FORCE_INLINE hkpStorageSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpSampledHeightFieldShape(flag), m_storage(flag)
    {
        if (flag.m_finishing)
            m_heightfieldType = HEIGHTFIELD_STORAGE;
    }

    virtual hkReal getHeightAtImpl(int x, int z) const;
    virtual hkBool getTriangleFlipImpl() const;

    hkArray<hkReal> m_storage;   // +0x60
    hkBool m_triangleFlip;       // +0x6C
};

#endif
