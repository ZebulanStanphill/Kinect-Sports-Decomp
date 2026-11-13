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
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
void __stvewx(__vector4 v, void *base, int offset);

extern const __vector4 lbl_82132D10;

typedef struct Rotation_830A66F8 {
    __vector4 col[3];
} Rotation_830A66F8;

typedef struct Accumulator_830A66F8 {
    char pad0[0x30];
    __vector4 invMasses;            /* 0x30 */
    __vector4 center;               /* 0x40 */
    Rotation_830A66F8 rotation;     /* 0x50 */
} Accumulator_830A66F8;

typedef struct QueryIn_830A66F8 {
    char pad0[0x1c];
    float rhsFactor;                    /* 0x1c */
    char pad20[0x10];
    const Accumulator_830A66F8 *bodyA;  /* 0x30 */
    const Accumulator_830A66F8 *bodyB;  /* 0x34 */
} QueryIn_830A66F8;

typedef struct Atom_830A66F8 {
    __vector4 pivotA;       /* 0x00 */
    __vector4 pivotB;       /* 0x10 */
    __vector4 axis;         /* 0x20 */
    float minLimit;         /* 0x30 */
    float maxLimit;         /* 0x34 */
} Atom_830A66F8;

typedef struct Jacobian_830A66F8 {
    __vector4 linear;       /* 0x00 */
    __vector4 angular[2];   /* 0x10 */
    float minLimit;         /* 0x30 */
    float maxLimit;         /* 0x34 */
    char pad38[8];
} Jacobian_830A66F8;

static __forceinline __vector4 Cross(__vector4 v1, __vector4 v2)
{
    __vector4 cross0 = __vmulfp(__vpermwi(v1, 99), __vpermwi(v2, 135));
    __vector4 cross1 = __vmulfp(__vpermwi(v1, 135), __vpermwi(v2, 99));
    return __vsubfp(cross0, cross1);
}

static __forceinline void SetRotatedDir(__vector4 *out, const Rotation_830A66F8 *r, __vector4 v)
{
    __vector4 t;

    t = __vmulfp(r->col[0], __vspltw(v, 0));
    t = __vmaddfp(r->col[1], __vspltw(v, 1), t);
    *out = __vmaddfp(r->col[2], __vspltw(v, 2), t);
}

void fn_830A66F8(const Atom_830A66F8 *atom, const QueryIn_830A66F8 *in, char **schema)
{
    Jacobian_830A66F8 *jac = (Jacobian_830A66F8 *)*schema;
    const Accumulator_830A66F8 *bodyA = in->bodyA;
    float factor = in->rhsFactor;
    const Accumulator_830A66F8 *bodyB = in->bodyB;
    __vector4 dir, rA, rB, cA, cB, a0, a1, sum, d;
    float diag, inv, s, dot;

    jac->linear = atom->axis;
    dir = atom->axis;
    rA = __vsubfp(atom->pivotA, bodyA->center);
    rB = __vsubfp(atom->pivotB, bodyB->center);
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
    s = diag + 1.1920929e-07f;
    inv = 1.0f / s;
    jac->angular[1].vector4_f32[3] = s;
    jac->angular[0].vector4_f32[3] = inv;
    d = __vsubfp(atom->pivotB, atom->pivotA);
    __stvewx(__vmsum3fp(d, atom->axis), &dot, 0);
    jac->linear.vector4_f32[3] = dot * factor;
    {
        float lo = atom->minLimit;
        float hi = atom->maxLimit;
        Jacobian_830A66F8 *j = (Jacobian_830A66F8 *)*schema;
        j->minLimit = lo;
        j->maxLimit = hi;
        ((char *)j)[3] = 7;     /* schema type */
        *schema = (char *)(j + 1);
    }
}
