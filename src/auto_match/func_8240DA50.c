// Pushes the two bodies of a pair apart along their separating direction: the offset is reset
// to zero and each body's 0x730 vector is set from fn_82321D30 with +/- scale along it.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Body_8240DA50 {
    char pad0[0x80];
    __vector4 position;      /* 0x80 */
    char pad90[0x520];
    int context;             /* 0x5b0 */
    char pad5b4[0x17c];
    __vector4 push;          /* 0x730 */
} Body_8240DA50;

typedef struct Pair_8240DA50 Pair_8240DA50;
typedef struct PairVtbl_8240DA50 {
    void *slot0;
    Body_8240DA50 *(*GetFirst)(Pair_8240DA50 *self);
    Body_8240DA50 *(*GetSecond)(Pair_8240DA50 *self);
} PairVtbl_8240DA50;
struct Pair_8240DA50 {
    const PairVtbl_8240DA50 *vt;
};

typedef struct Separator_8240DA50 {
    char pad0[0x10];
    __vector4 offset;        /* 0x10 */
    float scale;             /* 0x20 */
    Pair_8240DA50 *pair;     /* 0x24 */
} Separator_8240DA50;

__vector4 *fn_82321D30(__vector4 *out, int context, Body_8240DA50 *body, __vector4 v);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline void Push(Body_8240DA50 *b, __vector4 v)
{
    __vector4 tmp;
    b->push = *fn_82321D30(&tmp, b->context, b, v);
}

static __forceinline void Apply(Body_8240DA50 *b, __vector4 dir, float s, __vector4 off)
{
    __vector4 tmp;
    b->push = *fn_82321D30(&tmp, b->context, b, __vmaddfp(dir, Replicate(s), off));
}

void fn_8240DA50(Separator_8240DA50 *self)
{
    Body_8240DA50 *a = self->pair->vt->GetFirst(self->pair);
    Body_8240DA50 *b = self->pair->vt->GetSecond(self->pair);
    __vector4 dir;

    self->offset = __VMXGetReg(77);
    dir = Normalize3(__vsubfp(a->position, b->position));
    Push(a, __vmaddfp(dir, Replicate(self->scale), self->offset));
    Apply(b, dir, -self->scale, self->offset);
}
