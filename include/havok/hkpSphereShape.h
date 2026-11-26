// hkpSphereShape (Physics/Collide/Shape/Convex/Sphere/hkpSphereShape.h), 0x20 bytes: a sphere of radius
// m_radius around the origin. The size and the padding member (pad16, three hkUint32 at +0x14, not serialised)
// are the game's hkClass (initialiser 8312E618).
//
// The constructor is out of line (??0hkpSphereShape@@QAA@M@Z, 82D3C628); the finish constructor stores
// HK_SHAPE_SPHERE whether finishing or not (finishLoadedObject 82D3B240). The destructor is the implicit one:
// the vtable (??_7hkpSphereShape@@6B@, 18 slots) holds hkpShape's deleting destructor.
#ifndef HAVOK_HKPSPHERESHAPE_H
#define HAVOK_HKPSPHERESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkpShape.h"

class hkpSphereShape : public hkpConvexShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    hkpSphereShape(hkReal radius);   // out of line (82D3C628)
    hkpSphereShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_SPHERE; }

    hkUint32 m_pad16[3];   // +0x14
};

#endif
