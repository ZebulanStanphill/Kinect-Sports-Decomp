// hkpGskCache (Physics/Internal/Collide/Gjk/hkpGskCache.h), 0xC bytes: the vertex ids and dimensions of the
// last GSK simplex of two convex shapes. The agents keep it at the start of their data (the GSK agents at
// +0xC); 82D74E60 reads the dimensions at +0x8 and +0x9 and the two 4-bit maximum dimensions at +0xA,
// 82D5B378 and 82D5B3B0 test and set flag 0x20 of m_gskFlags at +0xB. The member names follow Havok's header.
#ifndef HAVOK_HKPGSKCACHE_H
#define HAVOK_HKPGSKCACHE_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"

class hkpConvexShape;
class hkpShape;
struct hkpGskCache;

extern "C" {
// Out of line, kept under their fn_ names (C units).
void fn_82DD9828(hkpGskCache *self, const hkpConvexShape *shapeA, const hkpConvexShape *shapeB,
                 const hkTransform *aTb);   // hkpGskCache::init
void fn_82DD9A10(hkpGskCache *self, const hkpConvexShape *shapeA, const hkpShape *shapeB,
                 const hkTransform *aTb);   // hkpGskCache::initTriangle
}

struct hkpGskCache {
    void init(const hkpConvexShape *shapeA, const hkpConvexShape *shapeB, const hkTransform &aTb)
    {
        fn_82DD9828(this, shapeA, shapeB, &aTb);
    }
    void initTriangle(const hkpConvexShape *shapeA, const hkpShape *shapeB, const hkTransform &aTb)
    {
        fn_82DD9A10(this, shapeA, shapeB, &aTb);
    }

    hkUint16 m_vertices[4];   // +0x0
    hkUint8 m_dimA;           // +0x8
    hkUint8 m_dimB;           // +0x9
    hkUint8 m_maxDimA : 4;    // +0xA
    hkUint8 m_maxDimB : 4;
    hkUint8 m_gskFlags;       // +0xB
};

#endif
