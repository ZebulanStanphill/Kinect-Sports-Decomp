// hkpCollideTriangleUtil (Physics/Collide/Util/hkpCollideTriangleUtil.h): static helpers for the triangle
// agents, with the per-triangle caches the agents keep (hkpSphereTriangleAgent and
// hkpMultiSphereTriangleAgent a ClosestPointTriangleCache, hkpCapsuleTriangleAgent a
// PointTriangleDistanceCache). The cache members are what the setup functions write: 82D76758 stores
// |e0|^2/det, |e1|^2/det, (e0.e1)/det and 1/|e0 x e1| (e0, e1 the edges from vertex 1); 82D76368 stores
// the three inverse edge lengths, the inverse normal length and the normal length. The member names follow
// Havok's header.
#ifndef HAVOK_HKPCOLLIDETRIANGLEUTIL_H
#define HAVOK_HKPCOLLIDETRIANGLEUTIL_H

#include "havok/hkVector4.h"

extern "C" {
// Out of line, kept under their fn_ names.
void fn_82D76758(const hkVector4 *vertices, void *cache);   // hkpCollideTriangleUtil::setupClosestPointTriangleCache
void fn_82D76368(const hkVector4 *vertices, void *cache);   // hkpCollideTriangleUtil::setupPointTriangleDistanceCache
}

struct hkpCollideTriangleUtil {
    struct ClosestPointTriangleCache {
        hkReal m_QQ;             // +0x0
        hkReal m_RR;             // +0x4
        hkReal m_QR;             // +0x8
        hkReal m_invTriNormal;   // +0xC
    };
    struct PointTriangleDistanceCache {
        hkReal m_invEdgeLen[3];   // +0x0
        hkReal m_invNormalLen;    // +0xC
        hkReal m_normalLen;       // +0x10
    };

    static void HK_CALL setupClosestPointTriangleCache(const hkVector4 *triangle, ClosestPointTriangleCache &cache)
    {
        fn_82D76758(triangle, &cache);
    }
    static void HK_CALL setupPointTriangleDistanceCache(const hkVector4 *triangle, PointTriangleDistanceCache &cache)
    {
        fn_82D76368(triangle, &cache);
    }
};

#endif
