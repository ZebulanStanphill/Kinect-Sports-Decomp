typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vandc(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Mover_823B2AC0 {
    char pad0[0x20];
    __vector4 velocity;         /* 0x20 */
    char pad30[0x14c - 0x30];
    float speed;                /* 0x14c */
    char pad150[0x210 - 0x150];
    float accelForward;         /* 0x210 */
    char pad214[0x224 - 0x214];
    float accelBackward;        /* 0x224 */
} Mover_823B2AC0;

extern float lbl_831C9CE0[];

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 ReciprocalLength3(__vector4 v)
{
    __vector4 d, h, rsq, rt, rcp;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    return __vmaddfp(rsq, h, rsq);
}

static __forceinline __vector4 Abs(__vector4 v)
{
    __vector4 sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    return __vandc(v, sign);
}

static __forceinline __vector4 SetLength(__vector4 v, float length)
{
    __vector4 eps, small, rl, r, zero;

    eps = __VMXGetReg(64);
    small = __vcmpgtfp(eps, Abs(v));
    rl = ReciprocalLength3(v);
    r = __vmulfp(v, __vmulfp(Replicate(length), rl));
    zero = __VMXGetReg(77);
    return __vsel(r, zero, small);
}

void fn_823B2AC0(Mover_823B2AC0 *self, float dt)
{
    float accel;
    __vector4 velocity;
    __vector4 flat;
    __vector4 len;
    float y;
    float minimum;
    float target;
    __vector4 total;

    if (self->speed > 0.0f)
        accel = self->accelForward;
    else if (self->speed < 0.0f)
        accel = self->accelBackward;
    else
        accel = 0.0f;
    velocity = self->velocity;
    flat = velocity;
    flat.vector4_f32[1] = 0.0f;
    len = Length3(flat);
    if (accel == 0.0f)
        return;
    y = self->velocity.vector4_f32[1];
    if (y >= 0.0f)
        return;
    minimum = lbl_831C9CE0[14];
    if (len.vector4_f32[0] <= minimum)
        return;
    target = accel * dt + len.vector4_f32[0];
    if (target < minimum)
        target = minimum;
    total = Length3(velocity);
    flat = SetLength(flat, target);
    flat.vector4_f32[1] = y;
    self->velocity = SetLength(flat, total.vector4_f32[0]);
}
