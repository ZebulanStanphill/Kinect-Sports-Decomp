typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

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

extern const __vector4 lbl_8329EA20;

typedef struct Body_82313738 {
    char pad0[0x80];
    __vector4 position;   // 0x80
} Body_82313738;

typedef struct Self_82313738 {
    char pad0[0xa0];
    __vector4 position;   // 0xa0
    __vector4 direction;  // 0xb0
    int fieldC0;          // 0xc0
    int fieldC4;          // 0xc4
    int fieldC8;          // 0xc8
    float fieldCC;        // 0xcc
    float fieldD0;        // 0xd0
    float fieldD4;        // 0xd4
    int fieldD8;          // 0xd8
} Self_82313738;

extern int fn_82313DA0(Self_82313738 *self, void *context, const Body_82313738 *from, const Body_82313738 *to);

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

int fn_82313738(Self_82313738 *self, void *context, const Body_82313738 *from, const Body_82313738 *to)
{
    __vector4 p, d, zero, mask;

    self->fieldC0 = 0;
    self->fieldC4 = 0;
    self->fieldC8 = 0;
    self->fieldCC = 0.0f;
    self->fieldD8 = 0;
    self->fieldD4 = 0.0f;
    self->fieldD0 = 0.0f;
    if (to != 0) {
        p = to->position;
        self->position = p;
        d = __vsubfp(p, from->position);
        zero = __VMXGetReg(77);
        mask = lbl_8329EA20;
        d = __vsel(d, zero, mask);
        self->direction = Normalize3(d);
        return fn_82313DA0(self, context, from, to);
    }
    return 0;
}
