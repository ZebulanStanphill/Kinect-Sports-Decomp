/* Target check: the other player is within the facing cone (angle between the
   rotated forward axis and the offset, fn_8255A260) and within range, and is idle. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Body_8232CFA0 {
    char pad0[0x80];
    __vector4 position;     /* 0x80 */
    __vector4 orientation;  /* 0x90 */
} Body_8232CFA0;

typedef struct Self_8232CFA0 {
    char pad0[0x8];
    Body_8232CFA0 *body;    /* 0x08 */
    char pad0c[0x20 - 0xc];
    float maxAngle;         /* 0x20 */
    float maxDistance;      /* 0x24 */
} Self_8232CFA0;

typedef struct Other_8232CFA0 {
    char pad0[0x80];
    __vector4 position;     /* 0x80 */
    char pad90[0x7a0 - 0x90];
    int state;              /* 0x7a0 */
    char pad7a4[0x7ac - 0x7a4];
    int busy;               /* 0x7ac */
} Other_8232CFA0;

extern float fn_8255A260(__vector4 a, __vector4 b);

static __forceinline __vector4 QuaternionMultiply(__vector4 q1, __vector4 q2, __vector4 signMask)
{
    __vector4 q2wzyx, q2zwxy, q2yxwz, negated, nx, ny, nz, nw, x, y, z, w;

    q2zwxy = __vpermwi(q2, 177);
    q2yxwz = __vpermwi(q2, 78);
    q2wzyx = __vpermwi(q2, 228);
    negated = __vxor(q1, signMask);
    nx = __vrlimi(negated, q1, 0xb, 0);
    nw = __vrlimi(negated, q1, 0x1, 0);
    ny = __vrlimi(negated, q1, 0xd, 0);
    nz = __vrlimi(negated, q1, 0x7, 0);
    x = __vmsum4fp(nx, q2wzyx);
    w = __vmsum4fp(nw, q2);
    y = __vmsum4fp(ny, q2zwxy);
    z = __vmsum4fp(nz, q2yxwz);
    return __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 Forward(const Body_8232CFA0 *obj)
{
    __vector4 signMask, a, c, r, q;

    q = obj->orientation;
    signMask = __vspltisw(-1);
    a = __vspltisw(0);
    signMask = __vslw(signMask, signMask);
    a = __vrlimi(a, __VMXGetReg(71), 0xe, 0);
    c = __vrlimi(__vxor(q, signMask), q, 1, 0);
    r = QuaternionMultiply(c, a, signMask);
    return QuaternionMultiply(r, q, signMask);
}

int fn_8232CFA0(Self_8232CFA0 *self, Other_8232CFA0 *other)
{
    __vector4 forward, len;
    int facing, idle, near;

    forward = Forward(self->body);
    facing = fn_8255A260(forward, __vsubfp(other->position, self->body->position)) < self->maxAngle;
    idle = other->state == 0;
    len = Length3(__vsubfp(self->body->position, other->position));
    near = len.vector4_f32[0] < self->maxDistance;
    if (facing && idle && near && other->busy == 0 && other->state == 0)
        return 1;
    return 0;
}
