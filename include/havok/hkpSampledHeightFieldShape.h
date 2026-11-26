// hkpSampledHeightFieldShape (Physics/Collide/Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.h),
// 0x60 bytes: a height field sampled on an xRes x zRes grid. The members, their types and offsets and the
// enumerators are the game's hkClass (hkpSampledHeightFieldShapeClass, initialiser 8312F7C8; its default
// m_heightfieldType is HEIGHTFIELD_USER).
//
// - The constructor from a cinfo is out of line (82D465A8); its second parameter is an int in the game's symbol.
// - The default constructor is inline: it only sets HK_SHAPE_SAMPLED_HEIGHT_FIELD, the subclasses' constructors
//   from another height field copy the members themselves (82D48170, 82D50990).
// - The finish constructor sets HK_SHAPE_SAMPLED_HEIGHT_FIELD when finishing, after hkpHeightFieldShape's
//   (82D39828, 82D3B548).
// - The destructor is the implicit one, out of line in the game (82D46390); the subclasses' deleting
//   destructors call it.
// - m_heightfieldType is an hkEnum: initialised in the cinfo constructor's initialiser list its store is
//   scheduled before the base class stores (82D465A8).
// ??_7hkpSampledHeightFieldShape@@6B@ (15 slots) has two pure slots of its own: +0x34 and +0x38, the height and
// the triangle flip of the storage classes (82D39918 and 82D39908 for the compressed one). Their names and the
// inline getHeightAt and getTriangleFlip that call them follow Havok's header.
#ifndef HAVOK_HKPSAMPLEDHEIGHTFIELDSHAPE_H
#define HAVOK_HKPSAMPLEDHEIGHTFIELDSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkEnum.h"
#include "havok/hkVector4.h"
#include "havok/hkpHeightFieldShape.h"

struct hkpSampledHeightFieldBaseCinfo;

class hkpSampledHeightFieldShape : public hkpHeightFieldShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum HeightFieldType { HEIGHTFIELD_STORAGE, HEIGHTFIELD_COMPRESSED, HEIGHTFIELD_USER, HEIGHTFIELD_MAX_ID };

    hkpSampledHeightFieldShape(const hkpSampledHeightFieldBaseCinfo &ci, int hfType);   // out of line (82D465A8)
    hkpSampledHeightFieldShape() : hkpHeightFieldShape(HK_SHAPE_SAMPLED_HEIGHT_FIELD) {}
    HK_FORCE_INLINE hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpHeightFieldShape(flag)
    {
        if (flag.m_finishing)
            m_type = HK_SHAPE_SAMPLED_HEIGHT_FIELD;
    }
    virtual ~hkpSampledHeightFieldShape();

    HK_FORCE_INLINE hkReal getHeightAt(int x, int z) const { return getHeightAtImpl(x, z); }
    HK_FORCE_INLINE hkBool getTriangleFlip() const { return getTriangleFlipImpl(); }

    virtual hkReal getHeightAtImpl(int x, int z) const;   // +0x34
    virtual hkBool getTriangleFlipImpl() const;           // +0x38

    int m_xRes;                                          // +0x10
    int m_zRes;                                          // +0x14
    hkReal m_heightCenter;                               // +0x18
    hkBool m_useProjectionBasedHeight;                   // +0x1C
    hkEnum<HeightFieldType, hkUint8> m_heightfieldType;  // +0x1D
    hkVector4 m_intToFloatScale;                         // +0x20
    hkVector4 m_floatToIntScale;                         // +0x30
    hkVector4 m_floatToIntOffsetFloorCorrected;          // +0x40
    hkVector4 m_extents;                                 // +0x50
};

#endif
