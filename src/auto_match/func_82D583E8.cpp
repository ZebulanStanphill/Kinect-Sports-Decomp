#include "havok/hkTransform.h"

extern "C" __vector4 __vxor(__vector4 a, __vector4 b);
extern "C" __vector4 __vaddfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vminfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmaxfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmsum3fp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmrghw(__vector4 a, __vector4 b);

extern "C" const __vector4 lbl_82132D00;

typedef struct Shape_82D583E8 Shape_82D583E8;
typedef struct {
    void *slot[7];
    void (*getAabb)(Shape_82D583E8 *self, const hkTransform *t, float tolerance, void *out);
} ShapeVtbl_82D583E8;
struct Shape_82D583E8 {
    ShapeVtbl_82D583E8 *vt;
};

typedef struct {
    Shape_82D583E8 *shape;
    int pad4;
    const hkTransform *transform;
} CdBody_82D583E8;

typedef struct {
    char pad[8];
    float tolerance;
    char padc[0x44];
    __vector4 path;
} Input_82D583E8;

typedef struct {
    __vector4 min;
    __vector4 max;
} Aabb_82D583E8;

static __forceinline void Add4(__vector4 *a, const __vector4 *b)
{
    *a = __vaddfp(*a, *b);
}

extern "C" void fn_82D583E8(const CdBody_82D583E8 *bodyA, const CdBody_82D583E8 *bodyB, const Input_82D583E8 *input, Aabb_82D583E8 *out)
{
    hkTransform t;
    const hkTransform *r;
    const __vector4 *p;
    __vector4 d0, d1, d2, path, zero, lo, hi;

    t.setMulInverseMul(*bodyB->transform, *bodyA->transform);
    bodyA->shape->vt->getAabb(bodyA->shape, &t, input->tolerance, out);

    r = bodyB->transform;
    p = &input->path;
    d0 = __vmsum3fp(r->m_rotation.m_col0.m_quad, *p);
    d1 = __vmsum3fp(r->m_rotation.m_col1.m_quad, *p);
    d2 = __vmsum3fp(r->m_rotation.m_col2.m_quad, *p);
    path = __vmrghw(__vmrghw(d0, d2), __vmrghw(d1, lbl_82132D00));
    zero = __vxor(zero, zero);
    lo = __vminfp(zero, path);
    hi = __vmaxfp(zero, path);
    Add4(&out->min, &lo);
    Add4(&out->max, &hi);
}
