// Havok: sphere/sphere penetration test. The pair is reported to the collector when the squared
// distance between the sphere centres is below the squared sum of the radii. Wrapped in the
// "TtSphereSphere" timer scope.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct ProfTls_82D675B0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D675B0;

typedef struct Transform_82D675B0 {
    __vector4 col[4];
} Transform_82D675B0;

typedef struct Shape_82D675B0 {
    char pad0[0x10];
    float radius;            /* 0x10 */
} Shape_82D675B0;

typedef struct Body_82D675B0 {
    const Shape_82D675B0 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D675B0 *transform;   /* 0x08 */
} Body_82D675B0;

struct Collector_82D675B0;

typedef struct CollectorVt_82D675B0 {
    void *s0;
    void (*addCdBodyPair)(struct Collector_82D675B0 *self, const Body_82D675B0 *a, const Body_82D675B0 *b);
} CollectorVt_82D675B0;

typedef struct Collector_82D675B0 {
    CollectorVt_82D675B0 *vt;
} Collector_82D675B0;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

void fn_82D675B0(const Body_82D675B0 *a, const Body_82D675B0 *b, const void *input,
                 Collector_82D675B0 *collector)
{
    ProfTls_82D675B0 *t;
    void **p;
    float distSq;
    float radiusSum;

    t = (ProfTls_82D675B0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtSphereSphere";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    {
        __vector4 d = __vsubfp(b->transform->col[3], a->transform->col[3]);
        __stvewx(__vmsum3fp(d, d), &distSq, 0);
    }
    radiusSum = a->shape->radius + b->shape->radius;
    if (distSq < radiusSum * radiusSum)
        collector->vt->addCdBodyPair(collector, a, b);

    t = (ProfTls_82D675B0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
