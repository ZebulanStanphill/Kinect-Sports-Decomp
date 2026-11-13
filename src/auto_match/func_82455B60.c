// Swings a body around its pair offset: the offset is moved to the point at distance `scale` from the
// body along the direction rotated by the angle the law of cosines gives (fn_82809950 cosine,
// fn_8253FD80 clamped arc cosine, fn_8255AE78 rotation about the vertical axis); fn_82455E58 then
// gets the body at the rotated position and the other body at -scale along the new direction.
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
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vandc(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);

typedef struct Body_82455B60 {
    char pad0[0x2c];
    int id;                  /* 0x2c */
    char pad30[0x50];
    __vector4 position;      /* 0x80 */
    char pad90[0x6b0];
    float angle;             /* 0x740 */
} Body_82455B60;

typedef struct Pair_82455B60 Pair_82455B60;
typedef struct PairVtbl_82455B60 {
    void *slot0;
    void *slot1;
    void *slot2;
    Body_82455B60 *(*GetOther)(Pair_82455B60 *self, Body_82455B60 *body);
} PairVtbl_82455B60;
struct Pair_82455B60 {
    const PairVtbl_82455B60 *vt;
};

typedef struct Separator_82455B60 {
    char pad0[0x10];
    __vector4 offset;        /* 0x10 */
    float scale;             /* 0x20 */
    Pair_82455B60 *pair;     /* 0x24 */
} Separator_82455B60;

void fn_82455E58(Separator_82455B60 *self, int id, __vector4 v);
float fn_82809950(float angle);
float fn_8253FD80(float x);
__vector4 fn_8255AE78(float angle, __vector4 v);

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

static __forceinline __vector4 ReciprocalLength3(__vector4 v)
{
    __vector4 d, h, rsq, rt, rcp;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    return __vmaddfp(rsq, h, rsq);
}

static __forceinline __vector4 ScaleNormalize3(__vector4 v, float scale)
{
    __vector4 sign, small, r, s, rl, eps, zero;

    sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    eps = __VMXGetReg(64);
    small = __vcmpgtfp(eps, __vandc(v, sign));
    s = Replicate(scale);
    rl = ReciprocalLength3(v);
    r = __vmulfp(v, __vmulfp(s, rl));
    zero = __VMXGetReg(77);
    return __vsel(r, zero, small);
}

void fn_82455B60(Separator_82455B60 *self, Body_82455B60 *body)
{
    Body_82455B60 *other = self->pair->vt->GetOther(self->pair, body);
    float angle = 3.14159274f - body->angle;
    __vector4 delta = __vsubfp(body->position, self->offset);
    __vector4 length = Length3(delta);
    float swing = fn_8253FD80((fn_82809950(angle) / length.vector4_f32[0]) * self->scale) + angle;
    __vector4 rotated = fn_8255AE78(3.14159274f - swing, __vsubfp(body->position, self->offset));
    __vector4 scaled = ScaleNormalize3(rotated, self->scale);
    __vector4 offset = __vsubfp(body->position, scaled);
    __vector4 target, dir, diff;

    self->offset = offset;
    {
        float back = body->angle;
        rotated = fn_8255AE78(-back, __vsubfp(body->position, offset));
    }
    target = __vaddfp(offset, rotated);
    fn_82455E58(self, body->id, target);
    diff = __vsubfp(target, self->offset);
    dir = Normalize3(diff);
    {
        __vector4 s = Replicate(-self->scale);
        fn_82455E58(self, other->id, __vmaddfp(dir, s, self->offset));
    }
}
