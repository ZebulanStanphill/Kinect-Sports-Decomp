// Havok: segment (2 vertices) of each body transformed to world space, the three result
// entries' distances preset to the tolerance, then the radius-aware segment/segment query fn_82D76E68.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Transform_82D63CA8 {
    __vector4 col[4];
} Transform_82D63CA8;

typedef struct Shape_82D63CA8 {
    char pad0[0x10];
    float radius;            /* 0x10 */
    char pad14[0xc];
    __vector4 vertices[2];   /* 0x20 */
} Shape_82D63CA8;

typedef struct Body_82D63CA8 {
    const Shape_82D63CA8 *shape;           /* 0x00 */
    int pad4;
    const Transform_82D63CA8 *transform;   /* 0x08 */
} Body_82D63CA8;

typedef struct Input_82D63CA8 {
    char pad0[8];
    float tolerance;   /* 0x08 */
} Input_82D63CA8;

typedef struct Point_82D63CA8 {
    char pad0[0x1c];
    float distance;    /* 0x1c */
} Point_82D63CA8;

typedef struct Result_82D63CA8 {
    Point_82D63CA8 points[3];
} Result_82D63CA8;

void fn_82D76E68(const __vector4 *segmentA, float radiusA, const __vector4 *segmentB, float radiusB,
                 Result_82D63CA8 *result);

static __forceinline __vector4 TransformPos(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2, __vector4 t)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    r = __vmaddfp(c2, __vspltw(v, 2), r);
    return __vaddfp(r, t);
}

static __forceinline void TransformPoints(const Transform_82D63CA8 *m, const __vector4 *in, int n, __vector4 *out)
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

void fn_82D63CA8(const Body_82D63CA8 *a, const Body_82D63CA8 *b, const Input_82D63CA8 *input,
                 Result_82D63CA8 *result)
{
    __vector4 segmentA[2];
    __vector4 segmentB[2];
    const Shape_82D63CA8 *shapeA = a->shape;
    const Shape_82D63CA8 *shapeB = b->shape;

    float tol = input->tolerance;
    result->points[0].distance = tol;
    result->points[1].distance = tol;
    result->points[2].distance = tol;
    TransformPoints(a->transform, shapeA->vertices, 2, segmentA);
    TransformPoints(b->transform, shapeB->vertices, 2, segmentB);
    fn_82D76E68(segmentA, shapeA->radius, segmentB, shapeB->radius, result);
}
