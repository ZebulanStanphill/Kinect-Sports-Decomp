// Penetration test of two convex bodies with the GSK algorithm: builds the
// closest-point cache, runs GSK and reports the pair to the collector when the
// bodies overlap (or GSK fails).
#include "havok/hkTransform.h"
#include "havok/hkpCdBodyPairCollector.h"

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

class ConvexShape_82D74E60
{
  public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2c();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void convertVertexIdsToVertices(const hkUint16 *ids, int numIds,
                                            hkVector4 *verticesOut) const; // 0x3c

    char m_pad4[0x8];
    int m_type;      // +0xc
    hkReal m_radius; // +0x10
};

class hkpCdBody
{
  public:
    const ConvexShape_82D74E60 *m_shape; // +0x0
    hkUint32 m_shapeKey;                 // +0x4
    const hkTransform *m_motion;         // +0x8
    const hkpCdBody *m_parent;           // +0xc
};

struct hkpCollisionInput;

struct hkpGskCache {
    hkUint16 m_vertices[4]; // +0x0
    hkUint8 m_dimA;         // +0x8
    hkUint8 m_dimB;         // +0x9
    hkUint8 m_maxDimA : 4;  // +0xa
    hkUint8 m_maxDimB : 4;
    hkUint8 m_gskFlags; // +0xb
};

struct hkpGsk {
    int m_dimA;                   // +0x0
    int m_dimB;                   // +0x4
    int m_maxDimA;                // +0x8
    int m_maxDimB;                // +0xc
    int m_doNotHandlePenetration; // +0x10
    int m_featureChange;          // +0x14
    hkVector4 m_verticesA[12];    // +0x20
    hkVector4 m_verticesB[10];    // +0xe0

    HK_FORCE_INLINE void init(const ConvexShape_82D74E60 *shapeA, const ConvexShape_82D74E60 *shapeB,
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
void fn_82DD9828(hkpGskCache *cache, const ConvexShape_82D74E60 *shapeA, const ConvexShape_82D74E60 *shapeB,
                 const hkTransform *aTb);
void fn_82DD9A10(hkpGskCache *cache, const ConvexShape_82D74E60 *shapeA, const ConvexShape_82D74E60 *shapeB,
                 const hkTransform *aTb);
int fn_82DD5FF0(hkpGsk *gsk, const ConvexShape_82D74E60 *shapeA, const ConvexShape_82D74E60 *shapeB,
                const hkTransform &aTb, hkVector4 &separatingNormal);
}

extern "C" void fn_82D74E60(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                            hkpCdBodyPairCollector &collector)
{
    timer("TtGsk");
    const ConvexShape_82D74E60 *shapeA = bodyA.m_shape;
    const ConvexShape_82D74E60 *shapeB = bodyB.m_shape;
    hkTransform aTb;
    aTb.setMulInverseMul(*bodyA.m_motion, *bodyB.m_motion);
    hkpGskCache cache;
    if (shapeB->m_type == 3) {
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
