// hkpCompressedSampledHeightFieldShape (Physics/Collide/Shape/HeightField/CompressedSampledHeightField/
// hkpCompressedSampledHeightFieldShape.h), 0x80 bytes: a sampled height field that stores its heights as
// hkUint16, scaled by m_scale and offset by m_offset. The members and offsets are the game's hkClass
// (initialiser 8312D170).
//
// Both constructors are out of line; the cinfo one stores its third parameter to m_offset and its fourth to
// m_scale (the names of the parameters are chosen by that). (82D48058 from a cinfo, 82D48170 from another height field); the finish
// constructor is inline (finishLoadedObject 82D39828) and the destructor is the implicit one, inlined in the
// deleting destructor (82D39958).
// ??_7hkpCompressedSampledHeightFieldShape@@6B@ (15 slots) overrides +0x18 (82D47C98), +0x2C (82D47CB0),
// +0x34 (82D39918) and +0x38 (82D39908, shared with the storage height field).
#ifndef HAVOK_HKPCOMPRESSEDSAMPLEDHEIGHTFIELDSHAPE_H
#define HAVOK_HKPCOMPRESSEDSAMPLEDHEIGHTFIELDSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpSampledHeightFieldShape.h"

class hkpCompressedSampledHeightFieldShape : public hkpSampledHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &ci, const hkArray<hkUint16> &samples,
                                         hkReal offset, hkReal scale);   // out of line (82D48058)
    hkpCompressedSampledHeightFieldShape(const hkpSampledHeightFieldShape *hf);   // out of line (82D48170)
    HK_FORCE_INLINE hkpCompressedSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpSampledHeightFieldShape(flag), m_storage(flag)
    {
        if (flag.m_finishing)
            m_heightfieldType = HEIGHTFIELD_COMPRESSED;
    }

    virtual hkReal getHeightAtImpl(int x, int z) const;
    virtual hkBool getTriangleFlipImpl() const;

    hkArray<hkUint16> m_storage;   // +0x60
    hkBool m_triangleFlip;         // +0x6C
    hkReal m_offset;               // +0x70
    hkReal m_scale;                // +0x74
};

#endif
