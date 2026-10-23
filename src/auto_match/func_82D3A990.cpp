// hkpMultiRayShape::~hkpMultiRayShape, the implicit destructor (Physics/Collide/Shape/Misc/MultiRay/hkpMultiRayShape.h); identical code also serves hkTraceStream. An implicit destructor does not store the class vtable on entry (a user-written one, even empty, does). It is emitted out of line because the deleting destructor does not inline it; the finish constructor below only makes the compiler emit the vtable.
#include "havok/hkpShape.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkpMultiRayShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    struct Ray {
        hkVector4 m_start;
        hkVector4 m_end;
    };
    hkpMultiRayShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag) { m_type = hkpShapeType(0x19); }

    hkArray<Ray> m_rays;              // +0x10
    hkReal m_rayPenetrationDistance;  // +0x1C
};

void emitVtable_82D3A990(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpMultiRayShape(f); }
