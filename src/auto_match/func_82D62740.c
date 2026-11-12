// Havok: segment (2 vertices) of the first body and triangle (3 vertices) of the second body
// transformed to world space, then the radius-aware segment/triangle query fn_82D77620.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Transform_82D62740 {
    __vector4 col[4];
} Transform_82D62740;

typedef struct Shape_82D62740 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[3];   /* 0x20 */
} Shape_82D62740;

typedef struct Body_82D62740 {
    const Shape_82D62740 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D62740 *transform;   /* 0x08 */
} Body_82D62740;

typedef struct Input_82D62740 {
    char pad0[8];
    float tolerance;   /* 0x08 */
} Input_82D62740;

void fn_82D77620(const __vector4 *segment, float radiusA, const __vector4 *triangle, float radiusB,
                 void *a5, float tolerance, void *a7, void *a8, void *a9);

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82D62740 *m, const __vector4 *in, int n, __vector4 *out)
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

void fn_82D62740(const Body_82D62740 *a, const Body_82D62740 *b, const Input_82D62740 *input,
                 void *p4, void *p5, void *p6)
{
    __vector4 segment[2];
    __vector4 triangle[3];
    const Shape_82D62740 *shapeA = a->shape;
    const Shape_82D62740 *shapeB = b->shape;

    TransformPoints(a->transform, shapeA->vertices, 2, segment);
    TransformPoints(b->transform, shapeB->vertices, 3, triangle);
    fn_82D77620(segment, shapeA->radius, triangle, shapeB->radius, p4, input->tolerance, p5, p6, 0);
}
