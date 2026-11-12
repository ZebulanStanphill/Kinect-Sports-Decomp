/* Havok linear bilateral jacobian schema builder: builds the jacobian (as func_830A6318) at the
   current schema position, marks its type (5) and advances the schema pointer by 0x30. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
void __stvewx(__vector4 v, void *base, int offset);

extern const __vector4 lbl_82132D10;   /* 1.0f x4 */

typedef struct Rotation_830A6458 {
    __vector4 col[3];
} Rotation_830A6458;

typedef struct Accumulator_830A6458 {
    char pad0[0x30];
    __vector4 invMasses;                /* 0x30 */
    __vector4 centerOfMass;             /* 0x40 */
    Rotation_830A6458 coreFromWorld;    /* 0x50 */
} Accumulator_830A6458;

typedef struct Info_830A6458 {
    __vector4 pivot;                    /* 0x00 */
    char pad10[0x10];
    __vector4 constrainedDof;           /* 0x20 */
} Info_830A6458;

typedef struct QueryIn_830A6458 {
    char pad0[0x1c];
    float rhsFactor;                    /* 0x1c */
    float virtMassFactor;               /* 0x20 */
    char pad24[0xc];
    const Accumulator_830A6458 *bodyA;  /* 0x30 */
    const Accumulator_830A6458 *bodyB;  /* 0x34 */
} QueryIn_830A6458;

typedef struct Jacobian_830A6458 {
    __vector4 linear0;
    __vector4 angular[2];
} Jacobian_830A6458;

typedef struct SchemaHeader_830A6458 {
    char pad0[3];
    unsigned char type;
} SchemaHeader_830A6458;

static __forceinline void SetRotatedDir(__vector4 *out, const Rotation_830A6458 *r, __vector4 b)
{
    __vector4 xb = __vspltw(b, 0);
    __vector4 yb = __vspltw(b, 1);
    __vector4 zb = __vspltw(b, 2);
    __vector4 t = __vmulfp(r->col[0], xb);
    t = __vmaddfp(r->col[1], yb, t);
    t = __vmaddfp(r->col[2], zb, t);
    *out = t;
}

void fn_830A6458(const Info_830A6458 *info, const QueryIn_830A6458 *in, char **schema, float rhs)
{
    Jacobian_830A6458 *jac = (Jacobian_830A6458 *)*schema;
    const Accumulator_830A6458 *mA = in->bodyA;
    const Accumulator_830A6458 *mB = in->bodyB;
    float virtMass = in->virtMassFactor;
    __vector4 rA, rB, cA, cB;
    __vector4 ang0, ang1, mass01, t;
    float diag;

    jac->linear0 = info->constrainedDof;
    rA = __vsubfp(info->pivot, mA->centerOfMass);
    rB = __vsubfp(info->pivot, mB->centerOfMass);
    {
        __vector4 dof = info->constrainedDof;
        __vector4 d99 = __vpermwi(dof, 99);
        __vector4 d135 = __vpermwi(dof, 135);
        cA = __vsubfp(__vmulfp(__vpermwi(rA, 99), d135), __vmulfp(__vpermwi(rA, 135), d99));
        cB = __vsubfp(__vmulfp(d99, __vpermwi(rB, 135)), __vmulfp(d135, __vpermwi(rB, 99)));
    }
    SetRotatedDir(&jac->angular[0], &mA->coreFromWorld, cA);
    SetRotatedDir(&jac->angular[1], &mB->coreFromWorld, cB);

    ang0 = __vmulfp(jac->angular[0], jac->angular[0]);
    ang1 = __vmulfp(jac->angular[1], jac->angular[1]);
    mass01 = __vaddfp(mA->invMasses, mB->invMasses);
    t = __vmulfp(ang1, mB->invMasses);
    t = __vmaddfp(ang0, mA->invMasses, t);
    t = __vrlimi(t, mass01, 1, 0);
    __stvewx(__vmsum4fp(t, lbl_82132D10), &diag, 0);
    diag = diag + 1.1920929e-07f;
    jac->angular[1].vector4_f32[3] = diag;
    jac->angular[0].vector4_f32[3] = virtMass / diag;
    jac->linear0.vector4_f32[3] = in->rhsFactor * rhs;
    {
        char *s = *schema;
        ((SchemaHeader_830A6458 *)s)->type = 5;
        *schema = s + sizeof(Jacobian_830A6458);
    }
}
