// hkpMultiSphereShape (Physics/Collide/Shape/Deprecated/MultiSphere/hkpMultiSphereShape.h), 0xA0 bytes: up to
// eight spheres (centre in xyz, radius in w). The size and members are the game's hkClass (initialiser 8312E100).
//
// The constructor exists in the game only as fn_82D4C700 (its unit defines it); the finish constructor stores
// HK_SHAPE_MULTI_SPHERE whether finishing or not (finishLoadedObject 82D3AA90). The destructor is the implicit
// one. ??_7hkpMultiSphereShape@@6B@ has 13 slots.
#ifndef HAVOK_HKPMULTISPHERESHAPE_H
#define HAVOK_HKPMULTISPHERESHAPE_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpMultiSphereShape : public hkpSphereRepShape {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
    enum { MAX_SPHERES = 8 };
    hkpMultiSphereShape(const hkVector4 *spheres, int numSpheres);   // fn_82D4C700
    hkpMultiSphereShape(hkFinishLoadedObjectFlag flag) : hkpSphereRepShape(flag) { m_type = HK_SHAPE_MULTI_SPHERE; }

    HK_FORCE_INLINE const hkVector4 *getSpheres() const { return m_spheres; }
    HK_FORCE_INLINE int getNumSpheres() const { return m_numSpheres; }

    int m_numSpheres;                    // +0x10
    hkVector4 m_spheres[MAX_SPHERES];    // +0x20
};

#endif
