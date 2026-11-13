// Havok hkpCapsuleCapsuleAgent::staticGetPenetrations: inside the "TtCapsCaps" timer scope, transforms
// both capsules' end points into world space, finds the closest points of the two segments
// (fn_8307F910) and reports the pair to the collector when the distance is below the radius sum.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vaddfp(__vector4, __vector4);
__vector4 __vsubfp(__vector4, __vector4);
__vector4 __vmulfp(__vector4, __vector4);
__vector4 __vmaddfp(__vector4, __vector4, __vector4);
}

typedef float hkReal;

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    hkQuadReal m_quad;
};

class hkTransform {
public:
    __forceinline hkTransform() {}
    __forceinline hkTransform(const hkTransform &t)
    {
        m_col0 = t.m_col0;
        m_col1 = t.m_col1;
        m_col2 = t.m_col2;
        m_translation = t.m_translation;
    }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
    hkVector4 m_translation;
};

static __forceinline void setTransformedPos(hkVector4 &out, const hkTransform &t, const hkVector4 &b)
{
    __vector4 xb = __vspltw(b.m_quad, 0);
    __vector4 yb = __vspltw(b.m_quad, 1);
    __vector4 zb = __vspltw(b.m_quad, 2);
    __vector4 t0 = __vmulfp(t.m_col0.m_quad, xb);
    t0 = __vmaddfp(t.m_col1.m_quad, yb, t0);
    t0 = __vmaddfp(t.m_col2.m_quad, zb, t0);
    out.m_quad = __vaddfp(t0, t.m_translation.m_quad);
}

static __forceinline void transformPoints(const hkTransform &t, const hkVector4 *in, int n, hkVector4 *out)
{
    hkTransform tc = t;
    int i = n - 1;
    do {
        setTransformedPos(out[i], tc, in[i]);
    } while (--i >= 0);
}

struct hkpCapsuleShape {
    char pad0[0x10];
    hkReal m_radius;           // 0x10
    char pad14[0xc];
    hkVector4 m_vertices[2];   // 0x20
};

struct hkpCdBody {
    const hkpCapsuleShape *m_shape;  // 0x00
    int m_shapeKey;                  // 0x04
    const hkTransform *m_motion;     // 0x08
};

class hkpCdBodyPairCollector {
public:
    virtual void f0();
    virtual void addCdBodyPair(const hkpCdBody &bodyA, const hkpCdBody &bodyB);
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
    const hkpCapsuleShape *capsA = bodyA.m_shape;
    const hkpCapsuleShape *capsB = bodyB.m_shape;
    hkVector4 pA[2];
    transformPoints(*bodyA.m_motion, capsA->m_vertices, 2, pA);
    hkVector4 pB[2];
    transformPoints(*bodyB.m_motion, capsB->m_vertices, 2, pB);
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
