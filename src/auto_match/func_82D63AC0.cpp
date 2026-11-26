#include "havok/hkpCdBody.h"
#include "havok/hkpCdBodyPairCollector.h"

// hkVector4::_setTransformedPos with the translation added last (the header's adds it first).
static __forceinline void setTransformedPos(hkVector4 &out, const hkTransform &t, const hkVector4 &b)
{
    __vector4 xb = __vspltw(b.m_quad, 0);
    __vector4 yb = __vspltw(b.m_quad, 1);
    __vector4 zb = __vspltw(b.m_quad, 2);
    __vector4 t0 = __vmulfp(t.getColumn(0).m_quad, xb);
    t0 = __vmaddfp(t.getColumn(1).m_quad, yb, t0);
    t0 = __vmaddfp(t.getColumn(2).m_quad, zb, t0);
    out.m_quad = __vaddfp(t0, t.getTranslation().m_quad);
}

static __forceinline void transformPoints(const hkTransform &t, const hkVector4 *in, int n, hkVector4 *out)
{
    hkTransform tc;
    tc = t;
    int i = n - 1;
    do {
        setTransformedPos(out[i], tc, in[i]);
    } while (--i >= 0);
}

// hkpCapsuleShape (Physics/Collide/Shape/Convex/Capsule/hkpCapsuleShape.h): the two vertices at +0x20.
class hkpCapsuleShape : public hkpConvexShape {
public:
    hkVector4 m_vertices[2];   // +0x20
};

struct hkpCollisionInput;

struct ClosestResult_82D63AC0 {
    hkVector4 m_closestPointA;
    hkVector4 m_aMinusB;
    hkReal m_distanceSquared;
};

struct ProfTls_82D63AC0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
};

extern "C" {
extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
int fn_8307F910(const hkVector4 &a, const hkVector4 &dA, const hkVector4 &b, const hkVector4 &dB,
                ClosestResult_82D63AC0 &result);
}

static __forceinline void TimerMarker(const char *name)
{
    ProfTls_82D63AC0 *t = (ProfTls_82D63AC0 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

extern "C" void fn_82D63AC0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                            hkpCdBodyPairCollector &collector)
{
    TimerMarker("TtCapsCaps");
    const hkpCapsuleShape *capsA = static_cast<const hkpCapsuleShape *>(bodyA.getShape());
    const hkpCapsuleShape *capsB = static_cast<const hkpCapsuleShape *>(bodyB.getShape());
    hkVector4 pA[2];
    transformPoints(bodyA.getTransform(), capsA->m_vertices, 2, pA);
    hkVector4 pB[2];
    transformPoints(bodyB.getTransform(), capsB->m_vertices, 2, pB);
    hkVector4 dA;
    dA.setSub4(pA[1], pA[0]);
    hkVector4 dB;
    dB.setSub4(pB[1], pB[0]);
    ClosestResult_82D63AC0 result;
    fn_8307F910(pA[0], dA, pB[0], dB, result);
    const hkReal radiusSum = capsB->m_radius + capsA->m_radius;
    if (result.m_distanceSquared < radiusSum * radiusSum) {
        collector.addCdBodyPair(bodyA, bodyB);
    }
    TimerMarker("Et");
}
