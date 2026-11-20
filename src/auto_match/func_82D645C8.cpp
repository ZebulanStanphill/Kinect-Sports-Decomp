#include "havok/hkTransform.h"

// Havok: sphere/box penetration test. The sphere centre is moved into box space, clamped to
// the half extents (|p| min extents, sign copied back), transformed back to world space, and
// the pair is reported to the collector when the distance is below the sum of the radii.
// Wrapped in the "TtSphereBox" timer scope.

extern "C" __vector4 __vspltw(__vector4 v, unsigned int i);
extern "C" __vector4 __vaddfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vsubfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmulfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
extern "C" __vector4 __vmsum3fp(__vector4 a, __vector4 b);
extern "C" __vector4 __vand(__vector4 a, __vector4 b);
extern "C" __vector4 __vxor(__vector4 a, __vector4 b);
extern "C" __vector4 __vminfp(__vector4 a, __vector4 b);
extern "C" void __stvewx(__vector4 v, void *base, int offset);

typedef struct ProfTls_82D645C8 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82D645C8;

typedef struct Shape_82D645C8 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 halfExtents;   /* 0x20 */
} Shape_82D645C8;

typedef struct Body_82D645C8 {
    const Shape_82D645C8 *shape;           /* 0x00 */
    int pad4;
    const hkTransform *transform;   /* 0x08 */
} Body_82D645C8;

struct Collector_82D645C8;

typedef struct CollectorVt_82D645C8 {
    void *s0;
    void (*addCdBodyPair)(struct Collector_82D645C8 *self, const Body_82D645C8 *a, const Body_82D645C8 *b);
} CollectorVt_82D645C8;

typedef struct Collector_82D645C8 {
    CollectorVt_82D645C8 *vt;
} Collector_82D645C8;

extern "C" unsigned int lbl_8323B4A0;
extern "C" void *KeTlsGetValue(unsigned int index);
extern "C" unsigned __int64 __mftb(void);
extern "C" const __vector4 lbl_821CA820;   /* abs mask */
extern "C" const __vector4 lbl_8209AB20;   /* sign mask */

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

extern "C" void fn_82D645C8(const Body_82D645C8 *sphere, const Body_82D645C8 *box, const void *input,
                 Collector_82D645C8 *collector)
{
    ProfTls_82D645C8 *t;
    void **p;
    const Shape_82D645C8 *sphereShape;
    const Shape_82D645C8 *boxShape;
    const hkVector4 *center;
    const hkTransform *m;
    hkVector4 local;
    __vector4 clamped, world, d;
    float radius;
    float distSq;

    t = (ProfTls_82D645C8 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "TtSphereBox";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    sphereShape = sphere->shape;
    boxShape = box->shape;
    center = &sphere->transform->m_translation;
    local.setTransformedInversePos(*box->transform, *center);
    clamped = __vxor(__vminfp(__vand(local.m_quad, lbl_821CA820), boxShape->halfExtents), __vand(local.m_quad, lbl_8209AB20));
    m = box->transform;
    world = TransformPos(clamped, m->m_rotation.m_col[0].m_quad, m->m_rotation.m_col[1].m_quad, m->m_rotation.m_col[2].m_quad, m->m_translation.m_quad);
    d = __vsubfp(world, center->m_quad);
    distSq = GetReal(__vmsum3fp(d, d));
    radius = sphereShape->radius + boxShape->radius;
    if (distSq < radius * radius)
        collector->vt->addCdBodyPair(collector, sphere, box);

    t = (ProfTls_82D645C8 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = "Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}
