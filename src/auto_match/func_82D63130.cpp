#include "havok/hkpCapsuleTriangleAgent.h"

// Havok hkpCapsuleTriangleAgent::staticGetPenetrations shape: like the member version
// (func_82D62F78) but builds the closest-point triangle cache on the stack first
// (fn_82D76368 = setupClosestPointTriangleCache).

#include "xdk/vectorintrinsics.h"

typedef struct Transform_82D63130 {
    __vector4 col[4];
} Transform_82D63130;

typedef struct Shape_82D63130 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[3];   /* 0x20 */
} Shape_82D63130;

typedef struct Body_82D63130 {
    const Shape_82D63130 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D63130 *transform;   /* 0x08 */
} Body_82D63130;

typedef struct Input_82D63130 {
    char pad0[8];
    float tolerance;   /* 0x08 */
} Input_82D63130;

typedef struct Collector_82D63130 Collector_82D63130;
typedef struct CollectorVt_82D63130 {
    void *dtor;
    void (*addCdBodyPair)(Collector_82D63130 *self, const Body_82D63130 *a, const Body_82D63130 *b);
} CollectorVt_82D63130;
struct Collector_82D63130 {
    CollectorVt_82D63130 *vt;
};

typedef struct TriangleCache_82D63130 {
    float data[5];   /* five hkReals, written by fn_82D76368 */
} TriangleCache_82D63130;


typedef struct ProfTls_82D63130 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D63130;

extern "C" unsigned int lbl_8323B4A0;
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);

typedef struct Result_82D63130 {
    __vector4 pointA;    /* 0x00 */
    __vector4 normalA;   /* 0x10, w = distance */
    __vector4 pointB;    /* 0x20 */
    __vector4 normalB;   /* 0x30, w = distance */
    __vector4 unknown40[2];  /* 0x40, not read here */
} Result_82D63130;

extern "C" void fn_82D77620(const __vector4 *segment, float radiusA, const __vector4 *triangle, float radiusB,
                 void *cache, float tolerance, void *a7, Result_82D63130 *a8, void *a9);

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82D63130 *m, const __vector4 *in, int n, __vector4 *out)
{
    __vector4 c0 = m->col[0];
    __vector4 c1 = m->col[1];
    __vector4 c2 = m->col[2];
    __vector4 t = m->col[3];
    int i;

    i = n - 1;
    do {
        __vector4 v = in[i];
        out[i] = TransformPos(v, c0, c1, c2, t);
    } while (--i >= 0);
}

static __forceinline void TimerBegin(const char *name)
{
    ProfTls_82D63130 *t = (ProfTls_82D63130 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

static __forceinline void getPenetrationsBody(const Body_82D63130 *bodyA, const Body_82D63130 *bodyB,
                 const Input_82D63130 *input, Collector_82D63130 *collector)
{
    TriangleCache_82D63130 cache;
    __vector4 segment[2];
    __vector4 triangle[3];
    Result_82D63130 result;
    const Shape_82D63130 *shapeA;
    const Shape_82D63130 *shapeB;

    TimerBegin("TtCapsTriangle");
    fn_82D76368((const hkVector4 *)bodyB->shape->vertices, &cache);   // declared by hkpCollideTriangleUtil.h
    shapeA = bodyA->shape;
    shapeB = bodyB->shape;
    TransformPoints(bodyA->transform, shapeA->vertices, 2, segment);
    TransformPoints(bodyB->transform, shapeB->vertices, 3, triangle);
    fn_82D77620(segment, shapeA->radius, triangle, shapeB->radius, &cache, input->tolerance, 0, &result, 0);
    if (result.normalA.vector4_f32[3] < 0.0f || result.normalB.vector4_f32[3] < 0.0f) {
        collector->vt->addCdBodyPair(collector, bodyA, bodyB);
    }
    TimerBegin("Et");
}

// The member takes the header's types; the body above keeps the unit's own view of its arguments.
void HK_CALL hkpCapsuleTriangleAgent::staticGetPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                               hkpCdBodyPairCollector &collector)
{
    getPenetrationsBody((const Body_82D63130 *)&bodyA, (const Body_82D63130 *)&bodyB, (const Input_82D63130 *)&input, (Collector_82D63130 *)&collector);
}
