// hkpBoxShape (Physics/Collide/Shape/Convex/Box/hkpBoxShape.h), 0x30 bytes: a box of half extents
// m_halfExtents around the origin. The size and m_halfExtents (+0x20) are the game's hkClass (initialiser
// 8312CCA0).
//
// - The constructor exists in the game only as fn_82D3CD40 (its unit defines it): hkpConvexShape's, then the
//   body of setHalfExtents inlined.
// - setHalfExtents is out of line (82D3CAA0): it stores the extents and the smallest of x, y and z in w.
// - The destructor is out of line (??1hkpBoxShape@@UAA@XZ, 82D3CA90), the deleting destructor 82D39138.
// - The finish constructor stores HK_SHAPE_BOX whether finishing or not (finishLoadedObject 82D390E8).
#ifndef HAVOK_HKPBOXSHAPE_H
#define HAVOK_HKPBOXSHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpBoxShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpBoxShape(const hkVector4 &halfExtents, hkReal radius);   // fn_82D3CD40
    hkpBoxShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_BOX; }
    virtual ~hkpBoxShape();   // out of line (82D3CA90)

    void setHalfExtents(const hkVector4 &halfExtents);   // out of line (82D3CAA0)
    HK_FORCE_INLINE const hkVector4 &getHalfExtents() const { return m_halfExtents; }

    hkVector4 m_halfExtents;   // +0x20
};

#endif
