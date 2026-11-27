// hkpTriSampledHeightFieldCollection (Physics/Collide/Shape/HeightField/TriSampledHeightField/
// hkpTriSampledHeightFieldCollection.h), 0x40 bytes: a shape collection that presents a sampled height field as
// triangles (two per grid cell). The members and offsets are the game's hkClass (initialiser 8312ECF8).
//
// - The constructor is out of line (82D52118); in the game's symbol the height field pointer is not const.
// - The finish constructor is out of line (82D3B8F0): when finishing it sets
//   HK_SHAPE_COLLECTION and COLLECTION_TRISAMPLED_HEIGHTFIELD after hkpShapeCollection's.
// - The destructor is out of line (82D521B8): it releases the height field.
// Vtables ??_7hkpTriSampledHeightFieldCollection@@6BhkpShape@@@ (13 slots) and
// ??_7hkpTriSampledHeightFieldCollection@@6BhkpShapeContainer@@@ (7 slots).
#ifndef HAVOK_HKPTRISAMPLEDHEIGHTFIELDCOLLECTION_H
#define HAVOK_HKPTRISAMPLEDHEIGHTFIELDCOLLECTION_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpSampledHeightFieldShape;

class hkpTriSampledHeightFieldCollection : public hkpShapeCollection {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpTriSampledHeightFieldCollection(hkpSampledHeightFieldShape *shape, hkReal radius);   // out of line (82D52118)
    hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag flag);                       // out of line (82D3B8F0)
    virtual ~hkpTriSampledHeightFieldCollection();                                           // out of line (82D521B8)

    virtual int getNumChildShapes() const;
    virtual hkpShapeKey getFirstKey() const;
    virtual hkpShapeKey getNextKey(hkpShapeKey oldKey) const;
    virtual const hkpShape *getChildShape(hkpShapeKey key, hkpShapeBuffer &buffer) const;

    const hkpSampledHeightFieldShape *m_heightfield;   // +0x18
    int m_childSize;                                    // +0x1C (not serialised)
    hkReal m_radius;                                    // +0x20
    hkArray<hkUint16> m_weldingInfo;                    // +0x24
    hkVector4 m_triangleExtrusion;                      // +0x30
};

#endif
