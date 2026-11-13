// Havok hkpCapsuleTriangleAgent::getPenetrations shape: inside the "TtCapsTriangle" timer
// scope, moves the capsule segment and the triangle into world space, runs the capsule-triangle
// distance query with the agent's triangle cache and reports the body pair to the collector when
// either result distance is negative.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Transform_82D62F78 {
    __vector4 col[4];
} Transform_82D62F78;

typedef struct Shape_82D62F78 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[3];   /* 0x20 */
} Shape_82D62F78;

typedef struct Body_82D62F78 {
    const Shape_82D62F78 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D62F78 *transform;   /* 0x08 */
} Body_82D62F78;

typedef struct Input_82D62F78 {
    char pad0[8];
    float tolerance;   /* 0x08 */
} Input_82D62F78;

typedef struct Collector_82D62F78 Collector_82D62F78;
typedef struct CollectorVt_82D62F78 {
    void *dtor;
    void (*addCdBodyPair)(Collector_82D62F78 *self, const Body_82D62F78 *a, const Body_82D62F78 *b);
} CollectorVt_82D62F78;
struct Collector_82D62F78 {
    CollectorVt_82D62F78 *vt;
};

typedef struct Agent_82D62F78 {
    char pad0[0x14];
    char triangleCache[0x10];   /* 0x14 */
} Agent_82D62F78;

typedef struct ProfTls_82D62F78 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D62F78;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

typedef struct Result_82D62F78 {
    __vector4 pointA;    /* 0x00 */
    __vector4 normalA;   /* 0x10, w = distance */
    __vector4 pointB;    /* 0x20 */
    __vector4 normalB;   /* 0x30, w = distance */
    __vector4 unknown40[2];  /* 0x40, not read here */
} Result_82D62F78;

void fn_82D77620(const __vector4 *segment, float radiusA, const __vector4 *triangle, float radiusB,
                 void *cache, float tolerance, void *a7, Result_82D62F78 *a8, void *a9);

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82D62F78 *m, const __vector4 *in, int n, __vector4 *out)
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
    ProfTls_82D62F78 *t = (ProfTls_82D62F78 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

void fn_82D62F78(Agent_82D62F78 *self, const Body_82D62F78 *bodyA, const Body_82D62F78 *bodyB,
                 const Input_82D62F78 *input, Collector_82D62F78 *collector)
{
    __vector4 segment[2];
    __vector4 triangle[3];
    Result_82D62F78 result;
    const Shape_82D62F78 *shapeA;
    const Shape_82D62F78 *shapeB;

    TimerBegin("TtCapsTriangle");
    shapeA = bodyA->shape;
    shapeB = bodyB->shape;
    TransformPoints(bodyA->transform, shapeA->vertices, 2, segment);
    TransformPoints(bodyB->transform, shapeB->vertices, 3, triangle);
    fn_82D77620(segment, shapeA->radius, triangle, shapeB->radius, self->triangleCache, input->tolerance, 0, &result, 0);
    if (result.normalA.vector4_f32[3] < 0.0f || result.normalB.vector4_f32[3] < 0.0f) {
        collector->vt->addCdBodyPair(collector, bodyA, bodyB);
    }
    TimerBegin("Et");
}
