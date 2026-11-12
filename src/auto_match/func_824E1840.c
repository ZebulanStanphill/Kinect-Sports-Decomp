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

typedef struct Tuning_824E1840 {
    char pad0[0x64];
    float extraLength;          /* 0x64 */
} Tuning_824E1840;

typedef struct Config_824E1840 {
    char pad0[0x3c];
    Tuning_824E1840 *tuning;    /* 0x3c */
} Config_824E1840;

typedef struct Info_824E1840 {
    char pad0[0x18];
    Config_824E1840 *config;    /* 0x18 */
} Info_824E1840;

typedef struct Actor_824E1840 {
    char pad0[0xfc];
    Info_824E1840 *info;        /* 0xfc */
} Actor_824E1840;

extern const __vector4 lbl_821962C0;
extern int fn_824CD030(Actor_824E1840 *actor);
extern float fn_824E17D8(Actor_824E1840 *actor);
extern __vector4 *fn_824B0580(__vector4 *out, Config_824E1840 *config);

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

__vector4 *fn_824E1840(__vector4 *out, Actor_824E1840 *actor)
{
    if (fn_824CD030(actor) != 0) {
        float extra = actor->info->config->tuning->extraLength;
        __vector4 dir, len, rl, r, zero, eps, small;
        float target;

        extra = fn_824E17D8(actor) * extra;
        fn_824B0580(&dir, actor->info->config);
        eps = __VMXGetReg(64);
        small = __vcmpgtfp(eps, Abs(dir));
        len = Length3(dir);
        rl = ReciprocalLength3(dir);
        target = len.vector4_f32[0] + extra;
        r = __vmulfp(dir, __vmulfp(Replicate(target), rl));
        zero = __VMXGetReg(77);
        *out = __vsel(r, zero, small);
    } else {
        *out = lbl_821962C0;
    }
    return out;
}
