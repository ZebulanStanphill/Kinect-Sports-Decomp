// hkpMultiRayShape (Physics/Collide/Shape/Misc/MultiRay/hkpMultiRayShape.h), 0x20 bytes: a set of rays (start and
// end points). The size and members are the game's hkClass (initialiser 8312E080); Ray is 0x20 bytes.
//
// The finish constructor stores HK_SHAPE_MULTI_RAY whether finishing or not (finishLoadedObject 82D3A940); the
// destructor is the implicit one (not declared), emitted out of line in the game (??1hkpMultiRayShape@@UAA@XZ,
// 82D3A990; deleting destructor 82D3AA00). ??_7hkpMultiRayShape@@6B@ has hkpShape's 11 slots.
#ifndef HAVOK_HKPMULTIRAYSHAPE_H
#define HAVOK_HKPMULTIRAYSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpMultiRayShape : public hkpShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    // 0x20 bytes.
    struct Ray {
        hkVector4 m_start;   // +0x0
        hkVector4 m_end;     // +0x10
    };

    hkpMultiRayShape(hkFinishLoadedObjectFlag flag) : hkpShape(flag), m_rays(flag) { m_type = HK_SHAPE_MULTI_RAY; }

    HK_FORCE_INLINE const hkArray<Ray> &getRays() const { return m_rays; }

    hkArray<Ray> m_rays;              // +0x10
    hkReal m_rayPenetrationDistance;  // +0x1C
};

#endif
