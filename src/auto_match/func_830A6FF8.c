typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
void __stvewx(__vector4 v, void *base, int offset);

extern const __vector4 lbl_82132D10;

typedef struct Rotation_830A6FF8 {
    __vector4 col[3];
} Rotation_830A6FF8;

typedef struct Accumulator_830A6FF8 {
    char pad0[0x30];
    __vector4 invMasses;            /* 0x30 */
    __vector4 center;               /* 0x40 */
    Rotation_830A6FF8 rotation;     /* 0x50 */
} Accumulator_830A6FF8;

typedef struct QueryIn_830A6FF8 {
    char pad0[0x30];
    const Accumulator_830A6FF8 *bodyA;  /* 0x30 */
    const Accumulator_830A6FF8 *bodyB;  /* 0x34 */
} QueryIn_830A6FF8;

typedef struct Jacobian_830A6FF8 {
    __vector4 linear;       /* 0x00 */
    __vector4 angular[2];   /* 0x10 */
} Jacobian_830A6FF8;

static __forceinline __vector4 Cross(__vector4 v1, __vector4 v2)
{
    __vector4 cross0 = __vmulfp(__vpermwi(v1, 99), __vpermwi(v2, 135));
    __vector4 cross1 = __vmulfp(__vpermwi(v1, 135), __vpermwi(v2, 99));
    return __vsubfp(cross0, cross1);
}

static __forceinline void SetRotatedDir(__vector4 *out, const Rotation_830A6FF8 *r, __vector4 v)
{
    __vector4 t;

    t = __vmulfp(r->col[0], __vspltw(v, 0));
    t = __vmaddfp(r->col[1], __vspltw(v, 1), t);
    *out = __vmaddfp(r->col[2], __vspltw(v, 2), t);
}

void fn_830A6FF8(const __vector4 *direction, const __vector4 *position, const QueryIn_830A6FF8 *in,
                 Jacobian_830A6FF8 *jac, float *out)
{
    const Accumulator_830A6FF8 *bodyA = in->bodyA;
    const Accumulator_830A6FF8 *bodyB = in->bodyB;
    __vector4 pos, dir, rA, rB, cA, cB, a0, a1, sum;
    float diag, inv, d;

    jac->linear = *direction;
    pos = *position;
    dir = *direction;
    rA = __vsubfp(pos, bodyA->center);
    rB = __vsubfp(pos, bodyB->center);
    cA = Cross(rA, dir);
    cB = Cross(dir, rB);
    SetRotatedDir(&jac->angular[0], &bodyA->rotation, cA);
    SetRotatedDir(&jac->angular[1], &bodyB->rotation, cB);
    a0 = __vmulfp(jac->angular[0], jac->angular[0]);
    a1 = __vmulfp(jac->angular[1], jac->angular[1]);
    a1 = __vmulfp(a1, bodyB->invMasses);
    sum = __vmaddfp(a0, bodyA->invMasses, a1);
    sum = __vrlimi(sum, __vaddfp(bodyA->invMasses, bodyB->invMasses), 1, 0);
    __stvewx(__vmsum4fp(sum, lbl_82132D10), &diag, 0);
    d = diag + 1.1920929e-07f;
    inv = 1.0f / d;
    jac->angular[1].vector4_f32[3] = d;
    jac->angular[0].vector4_f32[3] = inv;
    *out = inv;
}
