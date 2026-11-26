// Penetration test of two convex bodies with the GSK algorithm: builds the
// closest-point cache, runs GSK and reports the pair to the collector when the
// bodies overlap (or GSK fails).
#include "havok/hkpCdBody.h"
#include "havok/hkpCdVertex.h"
#include "havok/hkpCdBodyPairCollector.h"
#include "havok/hkpGskCache.h"

extern "C" unsigned __int64 __mftb();

struct hkMonitorStream {
    void *a;
    unsigned *next;
    void *b;
    unsigned *end;
};

extern "C" hkMonitorStream *KeTlsGetValue(unsigned);
extern "C" unsigned lbl_8323B4A0;

static HK_FORCE_INLINE void timer(const char *s)
{
    hkMonitorStream *t = KeTlsGetValue(lbl_8323B4A0);
    unsigned *p = t->next;
    if (p < t->end) {
        p[0] = (unsigned)s;
        p[1] = (unsigned)__mftb();
        t->next = p + 3;
    }
}

struct hkpCollisionInput;

struct hkpGsk {
    int m_dimA;                   // +0x0
    int m_dimB;                   // +0x4
    int m_maxDimA;                // +0x8
    int m_maxDimB;                // +0xc
    int m_doNotHandlePenetration; // +0x10
    int m_featureChange;          // +0x14
    hkpCdVertex m_verticesA[12];  // +0x20
    hkpCdVertex m_verticesB[10];  // +0xe0

    HK_FORCE_INLINE void init(const hkpConvexShape *shapeA, const hkpConvexShape *shapeB,
                              const hkpGskCache &cache)
    {
        m_dimA = cache.m_dimA;
        m_dimB = cache.m_dimB;
        m_maxDimA = cache.m_maxDimA;
        m_maxDimB = cache.m_maxDimB;
        m_doNotHandlePenetration = 1;
        m_featureChange = 0;
        shapeA->convertVertexIdsToVertices(cache.m_vertices, m_dimA, m_verticesA);
        shapeB->convertVertexIdsToVertices(cache.m_vertices + m_dimA, m_dimB, m_verticesB);
    }
};

extern "C" {
int fn_82DD5FF0(hkpGsk *gsk, const hkpConvexShape *shapeA, const hkpConvexShape *shapeB,
                const hkTransform &aTb, hkVector4 &separatingNormal);
}

extern "C" void fn_82D74E60(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                            hkpCdBodyPairCollector &collector)
{
    timer("TtGsk");
    const hkpConvexShape *shapeA = static_cast<const hkpConvexShape *>(bodyA.getShape());
    const hkpConvexShape *shapeB = static_cast<const hkpConvexShape *>(bodyB.getShape());
    hkTransform aTb;
    aTb.setMulInverseMul(bodyA.getTransform(), bodyB.getTransform());
    hkpGskCache cache;
    if (shapeB->getType() == HK_SHAPE_TRIANGLE) {
        fn_82DD9A10(&cache, shapeA, shapeB, &aTb);
    } else {
        fn_82DD9828(&cache, shapeA, shapeB, &aTb);
    }
    hkpGsk gsk;
    gsk.init(shapeA, shapeB, cache);
    hkVector4 separatingNormal;
    int result = fn_82DD5FF0(&gsk, shapeA, shapeB, aTb, separatingNormal);
    timer("Et");
    if (result != 0 || separatingNormal(3) - shapeA->m_radius - shapeB->m_radius < 0.0f) {
        collector.addCdBodyPair(bodyA, bodyB);
    }
}
