typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vandc(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Obj_822C6880 {
    char pad0[0x20];
    __vector4 v20;      /* 0x20 */
    __vector4 v30;      /* 0x30 */
    char pad40[0x8];
    float maxLength;    /* 0x48 */
} Obj_822C6880;

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline __vector4 SetW0(__vector4 v)
{
    __vector4 zero = __VMXGetReg(77);
    __vector4 mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

static __forceinline __vector4 ScaleToLength(__vector4 v, float length)
{
    __vector4 zero, sign, eps, len, d, h, rsq, rt, rcp, abs, near, result;

    zero = __VMXGetReg(77);
    len = __vspltw(__lvlx(&length, 0), 0);
    sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    d = __vmsum3fp(v, v);
    abs = __vandc(v, sign);
    eps = __VMXGetReg(64);
    near = __vcmpgtfp(eps, abs);
    h = __vspltisw(1);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    rsq = __vmulfp(len, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, zero, near);
}

void fn_822C6880(Obj_822C6880 *self, __vector4 v)
{
    __vector4 length = Length3(v);
    if (length.vector4_f32[0] > self->maxLength) {
        __vector4 t = SetW0(v);
        self->v20 = ScaleToLength(t, self->maxLength);
    } else {
        self->v20 = SetW0(v);
    }
}
