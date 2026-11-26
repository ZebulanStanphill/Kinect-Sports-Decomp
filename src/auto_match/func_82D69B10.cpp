#include "havok/hkTransform.h"
#include "havok/hkpShape.h"
#include "havok/hkpCdVertex.h"

__forceinline void hkVector4::setRotatedDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal xb = __vspltw(b.m_quad, 0);
    const hkQuadReal yb = __vspltw(b.m_quad, 1);
    const hkQuadReal zb = __vspltw(b.m_quad, 2);
    hkQuadReal t = __vmulfp(r.getColumn(0).m_quad, xb);
    t = __vmaddfp(r.getColumn(1).m_quad, yb, t);
    m_quad = __vmaddfp(r.getColumn(2).m_quad, zb, t);
}

__forceinline void hkVector4::setRotatedInverseDir(const hkRotation &r, const hkVector4 &b)
{
    const hkQuadReal d0 = __vmsum3fp(r.getColumn(0).m_quad, b.m_quad);
    const hkQuadReal d1 = __vmsum3fp(r.getColumn(1).m_quad, b.m_quad);
    const hkQuadReal d2 = __vmsum3fp(r.getColumn(2).m_quad, b.m_quad);
    const hkQuadReal xz = __vmrghw(d0, d2);
    const hkQuadReal y0 = __vmrghw(d1, lbl_82132D00);
    m_quad = __vmrghw(xz, y0);
}

__forceinline void hkVector4::setTransformedInversePos(const hkTransform &t, const hkVector4 &b)
{
    hkVector4 d;
    d.m_quad = __vsubfp(b.m_quad, t.m_translation.m_quad);
    setRotatedInverseDir(t.m_rotation, d);
}

struct hkpCdBody_82D69B10 {
    const hkpConvexShape *m_shape;   // 0x00
    unsigned int m_shapeKey;         // 0x04
    const hkTransform *m_motion;     // 0x08
};

struct hkpGskInput_82D69B10 {
    const hkpCdBody_82D69B10 *m_bodyA;   // 0x00
    const hkpCdBody_82D69B10 *m_bodyB;   // 0x04
    char pad8[0x18];
    hkTransform m_aTb;                   // 0x20
};

struct hkpGskCache_82D69B10 {
    unsigned short m_vertices[4];   // 0x00
    unsigned char m_dimA;           // 0x08
    unsigned char m_dimB;           // 0x09
    unsigned char m_maxDim;         // 0x0a: maxDimA << 4 | maxDimB
};

struct hkpGsk_82D69B10 {
    int m_dimA;                 // 0x00
    int m_dimB;                 // 0x04
    int m_maxDimA;              // 0x08
    int m_maxDimB;              // 0x0c
    int m_doNotHandlePenetration;   // 0x10
    int m_featureChange;        // 0x14
    char pad18[0x8];
    hkpCdVertex m_verticesA[12];    // 0x20
    hkpCdVertex m_verticesB[10];    // 0xe0
};

extern "C" int fn_82DD5FF0(hkpGsk_82D69B10 *gsk, const hkpConvexShape *shapeA,
                           const hkpConvexShape *shapeB, const hkTransform &aTb, hkVector4 *separatingNormal);
extern "C" void fn_82DD4940(hkpGsk_82D69B10 *gsk, hkpGskCache_82D69B10 *cache);

extern "C" void fn_82D69B10(const hkpGskInput_82D69B10 &input, const void *unused, hkpGskCache_82D69B10 *cache,
                            hkVector4 &pointOut)
{
    const hkpConvexShape *shapeA = input.m_bodyA->m_shape;
    const hkpConvexShape *shapeB = input.m_bodyB->m_shape;
    hkVector4 sep;
    hkpGsk_82D69B10 gsk;
    gsk.m_dimA = cache->m_dimA;
    gsk.m_dimB = cache->m_dimB;
    gsk.m_doNotHandlePenetration = 0;
    gsk.m_maxDimA = cache->m_maxDim >> 4;
    gsk.m_maxDimB = cache->m_maxDim & 0xf;
    gsk.m_featureChange = 0;
    shapeA->convertVertexIdsToVertices(cache->m_vertices, gsk.m_dimA, gsk.m_verticesA);
    shapeB->convertVertexIdsToVertices(cache->m_vertices + gsk.m_dimA, gsk.m_dimB, gsk.m_verticesB);
    fn_82DD5FF0(&gsk, shapeA, shapeB, input.m_aTb, &sep);
    if (gsk.m_featureChange != 0) {
        fn_82DD4940(&gsk, cache);
    }
    pointOut.setRotatedDir(input.m_bodyA->m_motion->m_rotation, sep);
    pointOut(3) = sep(3) - (shapeB->m_radius + shapeA->m_radius);
}
