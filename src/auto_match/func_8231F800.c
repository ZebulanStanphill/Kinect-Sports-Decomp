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
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

extern const float lbl_821CA45C[2];

typedef struct Edge_8231F800 {
    __vector4 origin;   // 0x00
    __vector4 a;        // 0x10
    __vector4 b;        // 0x20
} Edge_8231F800;

typedef struct Self_8231F800 {
    char pad0[0x14];
    const Edge_8231F800 *edge;   // 0x14
    char pad18[0x48];
    __vector4 position;          // 0x60
} Self_8231F800;

static __forceinline __vector4 Replicate(const float *value)
{
    __vector4 v = __lvlx(value, 0);
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

void fn_8231F800(const Self_8231F800 *self, __vector4 *outPoint, __vector4 *outNormal)
{
    const Edge_8231F800 *e = self->edge;
    __vector4 dir, origin, pos, n, sign, one;

    dir = __vsubfp(e->a, e->b);
    pos = self->position;
    origin = e->origin;
    n = Normalize3(dir);
    if (pos.vector4_f32[0] > origin.vector4_f32[0]) {
        sign = __VMXGetReg(65);
        n = __vxor(n, sign);
    }
    sign = __VMXGetReg(65);
    one = Replicate(&lbl_821CA45C[1]);
    *outNormal = n;
    *outPoint = __vmaddfp(__vxor(n, sign), one, pos);
}
