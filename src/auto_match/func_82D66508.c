// Havok: sphere/capsule penetration test. The capsule's two vertices are transformed to
// world space, the closest point on the segment to the sphere centre is found with
// fn_8307FAB8, and the pair is reported to the collector when the distance is below the
// sum of the radii. Wrapped in the "TtSphereCapsule" timer scope.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct ProfTls_82D66508 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D66508;

typedef struct Transform_82D66508 {
    __vector4 col[4];
} Transform_82D66508;

typedef struct Shape_82D66508 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[2];   /* 0x20 */
} Shape_82D66508;

typedef struct Body_82D66508 {
    const Shape_82D66508 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D66508 *transform;   /* 0x08 */
} Body_82D66508;

struct Collector_82D66508;

typedef struct CollectorVt_82D66508 {
    void *s0;
    void (*addCdBodyPair)(struct Collector_82D66508 *self, const Body_82D66508 *a, const Body_82D66508 *b);
} CollectorVt_82D66508;

typedef struct Collector_82D66508 {
    CollectorVt_82D66508 *vt;
} Collector_82D66508;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
int fn_8307FAB8(const __vector4 *point, const __vector4 *a, const __vector4 *b, __vector4 *out);

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82D66508 *m, const __vector4 *in, int n, __vector4 *out)
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

void fn_82D66508(const Body_82D66508 *sphere, const Body_82D66508 *capsule, const void *input,
                 Collector_82D66508 *collector)
{
    ProfTls_82D66508 *t;
    void **p;
    const Shape_82D66508 *sphereShape;
    const Shape_82D66508 *capsuleShape;
    const __vector4 *center;
    __vector4 segment[2];
    __vector4 closest;
    float radius;

    t = (ProfTls_82D66508 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtSphereCapsule";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    sphereShape = sphere->shape;
    capsuleShape = capsule->shape;
    center = &sphere->transform->col[3];
    TransformPoints(capsule->transform, capsuleShape->vertices, 2, segment);
    fn_8307FAB8(center, &segment[0], &segment[1], &closest);
    radius = sphereShape->radius + capsuleShape->radius;
    if (GetReal(__vmsum3fp(__vsubfp(closest, *center), __vsubfp(closest, *center))) < radius * radius)
        collector->vt->addCdBodyPair(collector, sphere, capsule);

    t = (ProfTls_82D66508 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
