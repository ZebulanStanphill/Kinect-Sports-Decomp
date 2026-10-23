// hkpMultiRayShape scalar deleting destructor (also hkTraceStream's, by identical-code folding); it calls the implicit destructor out of line. The finish constructor below only makes the compiler emit the vtable.
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

void emitVtable_82D3AA00(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpMultiRayShape(f); }
