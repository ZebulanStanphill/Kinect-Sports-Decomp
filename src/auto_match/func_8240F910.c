typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern float lbl_8218EC10;      /* 1e-5f */

typedef struct Settings_8240F910 {
    char pad0[0x98];
    float threshold;            /* 0x98 */
} Settings_8240F910;

typedef struct Self_8240F910 {
    char pad0[0x3c];
    int busy;                   /* 0x03c */
    char pad40[0x190];
    int pending;                /* 0x1d0 */
    char pad1d4[0xc];
    __vector4 target;           /* 0x1e0 */
    char pad1f0[0x84];
    Settings_8240F910 *settings;    /* 0x274 */
} Self_8240F910;

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

static __forceinline void Start(Self_8240F910 *self, __vector4 dir)
{
    if (self->pending != 0) {
        return;
    }
    if (self->busy != 0) {
        return;
    }
    self->pending = 1;
    self->target = dir;
}

void fn_8240F910(Self_8240F910 *self, const __vector4 *v, int force)
{
    __vector4 dir = v[1];
    __vector4 lengthSq, length;

    lengthSq = __vmsum3fp(dir, dir);
    if (lengthSq.vector4_f32[0] > lbl_8218EC10) {
        length = Length3(v[0]);
        if (length.vector4_f32[0] > self->settings->threshold) {
            Start(self, dir);
            return;
        }
    }
    if (force != 0) {
        Start(self, dir);
    }
}
