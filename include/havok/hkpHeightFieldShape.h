// hkpHeightFieldShape (Physics/Collide/Shape/HeightField/hkpHeightFieldShape.h), 0x10 bytes: the base of the
// height field shapes, with no members of its own (the game's hkClass, 8312F610, has size 0x10 and none).
//
// Its finish constructor sets m_type to HK_SHAPE_HEIGHT_FIELD whether finishing or not (82D39828, 82D3B548);
// the subclasses then set their own type when finishing.
// Its vtable slots after hkpShape's are placed by the sampled height fields' vtables
// (??_7hkpCompressedSampledHeightFieldShape@@6B@, 15 slots): +0x2C is overridden by each storage class
// (82D47CB0, 82D50490), +0x30 by hkpSampledHeightFieldShape (82D47AD0). Their names follow Havok's header,
// where both are pure; the parameter types are only declared.
#ifndef HAVOK_HKPHEIGHTFIELDSHAPE_H
#define HAVOK_HKPHEIGHTFIELDSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

struct hkpSphereCastInput;

class hkpHeightFieldShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct CollideSpheresInput;
    typedef hkVector4 SphereCollisionOutput;

    hkpHeightFieldShape(hkpShapeType type) : hkpShape(type) {}
    HK_FORCE_INLINE hkpHeightFieldShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) { m_type = HK_SHAPE_HEIGHT_FIELD; }

    virtual void collideSpheres(const CollideSpheresInput &input, SphereCollisionOutput *outputArray) const;   // +0x2C
    virtual void castSphere(const hkpSphereCastInput &input, const hkpCdBody &cdBody,
                            hkpRayHitCollector &collector) const;                                            // +0x30
};

#endif
