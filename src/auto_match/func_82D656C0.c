// Havok: sphere/triangle penetration test. The sphere centre is moved into the triangle's
// local space (inverse rotation of the offset from the triangle body's translation), the
// closest-point query fn_82D76848 is run against the triangle vertices with the triangle
// data from fn_82D76758, and the pair is reported to the collector when the distance is
// below the sum of the radii. Wrapped in the "TtSphereTri" timer scope.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);

typedef struct ProfTls_82D656C0 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D656C0;

typedef struct Transform_82D656C0 {
    __vector4 col[4];
} Transform_82D656C0;

typedef struct Shape_82D656C0 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[3];   /* 0x20 */
} Shape_82D656C0;

typedef struct Body_82D656C0 {
    const Shape_82D656C0 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D656C0 *transform;   /* 0x08 */
} Body_82D656C0;

typedef struct Result_82D656C0 {
    __vector4 point;
    float distance;
} Result_82D656C0;

struct Collector_82D656C0;

typedef struct CollectorVt_82D656C0 {
    void *s0;
    void (*addCdBodyPair)(struct Collector_82D656C0 *self, const Body_82D656C0 *a, const Body_82D656C0 *b);
} CollectorVt_82D656C0;

typedef struct Collector_82D656C0 {
    CollectorVt_82D656C0 *vt;
} Collector_82D656C0;

extern unsigned int lbl_8323B4A0;
extern const __vector4 lbl_82132D00;   /* zero vector */
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
void fn_82D76758(const __vector4 *vertices, __vector4 *out);
int fn_82D76848(const __vector4 *point, const __vector4 *vertices, const __vector4 *info,
                Result_82D656C0 *out, int flags);

static __forceinline __vector4 RotateInverse(const Transform_82D656C0 *m, __vector4 b)
{
    __vector4 d0 = __vmsum3fp(m->col[0], b);
    __vector4 d1 = __vmsum3fp(m->col[1], b);
    __vector4 d2 = __vmsum3fp(m->col[2], b);
    __vector4 xz = __vmrghw(d0, d2);
    __vector4 y0 = __vmrghw(d1, lbl_82132D00);
    return __vmrghw(xz, y0);
}

void fn_82D656C0(const Body_82D656C0 *sphere, const Body_82D656C0 *tri, const void *input,
                 Collector_82D656C0 *collector)
{
    ProfTls_82D656C0 *t;
    void **p;
    const Shape_82D656C0 *sphereShape;
    const Shape_82D656C0 *triShape;
    const __vector4 *vertices;
    const Transform_82D656C0 *m;
    __vector4 info;
    __vector4 local;
    Result_82D656C0 result;

    t = (ProfTls_82D656C0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtSphereTri";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    sphereShape = sphere->shape;
    triShape = tri->shape;
    vertices = triShape->vertices;
    fn_82D76758(vertices, &info);
    m = tri->transform;
    local = RotateInverse(m, __vsubfp(sphere->transform->col[3], m->col[3]));
    fn_82D76848(&local, vertices, &info, &result, 0);
    if (result.distance < triShape->radius + sphereShape->radius)
        collector->vt->addCdBodyPair(collector, sphere, tri);

    t = (ProfTls_82D656C0 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
