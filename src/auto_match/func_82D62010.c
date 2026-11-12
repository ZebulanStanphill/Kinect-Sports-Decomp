typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Transform_82D62010 {
    __vector4 col[4];
} Transform_82D62010;

typedef struct Shape_82D62010 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[3];   /* 0x20 */
} Shape_82D62010;

typedef struct Body_82D62010 {
    const Shape_82D62010 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D62010 *transform;   /* 0x08 */
} Body_82D62010;

typedef struct Input_82D62010 {
    char pad0[8];
    float tolerance;   /* 0x08 */
} Input_82D62010;

typedef struct Pair_82D62010 {
    const Body_82D62010 *a;   /* 0x00 */
    const Body_82D62010 *b;   /* 0x04 */
} Pair_82D62010;

typedef struct Result_82D62010 {
    __vector4 pointA;    /* 0x00 */
    __vector4 normalA;   /* 0x10, w = distance */
    __vector4 pointB;    /* 0x20 */
    __vector4 normalB;   /* 0x30, w = distance */
    __vector4 unknown40[2];  /* 0x40, not read here */
} Result_82D62010;

void fn_82D77620(const __vector4 *segment, float radiusA, const __vector4 *triangle, float radiusB,
                 const void *a5, float tolerance, void *a7, Result_82D62010 *a8, void *a9);

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82D62010 *m, const __vector4 *in, int n, __vector4 *out)
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

void fn_82D62010(const Pair_82D62010 *pair, void *unused, const Input_82D62010 *input, __vector4 *out)
{
    __vector4 segment[2];
    __vector4 triangle[3];
    Result_82D62010 result;
    const Shape_82D62010 *shapeA = pair->a->shape;
    const Shape_82D62010 *shapeB = pair->b->shape;

    TransformPoints(pair->a->transform, shapeA->vertices, 2, segment);
    TransformPoints(pair->b->transform, shapeB->vertices, 3, triangle);
    fn_82D77620(segment, shapeA->radius, triangle, shapeB->radius, &input->tolerance, 3.40282e+38f, 0, &result, 0);
    if (result.normalA.vector4_f32[3] < result.normalB.vector4_f32[3]) {
        *out = result.normalA;
    } else {
        *out = result.normalB;
    }
}
