typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vpermwi(__vector4 v, int control);

extern const __vector4 lbl_82132D70;    /* (0.5, 0.5, 0.5, 0.5) */

static __forceinline __vector4 InvSqrt(__vector4 r)
{
    __vector4 zero = __vspltisw(0);
    __vector4 e = __vrsqrtefp(r);
    __vector4 hr = __vmulfp(r, lbl_82132D70);
    __vector4 mask = __vcmpeqfp(zero, r);

    e = __vmaddfp(e, __vnmsubfp(hr, __vmulfp(e, e), lbl_82132D70), e);
    e = __vmaddfp(e, __vnmsubfp(hr, __vmulfp(e, e), lbl_82132D70), e);
    return __vsel(e, zero, mask);
}

static __forceinline void SetCross(__vector4 *self, __vector4 a, __vector4 b)
{
    __vector4 a0 = __vpermwi(a, 135);
    __vector4 b0 = __vpermwi(b, 99);
    __vector4 b1 = __vpermwi(b, 135);
    __vector4 a1 = __vpermwi(a, 99);
    *self = __vsubfp(__vmulfp(a1, b1), __vmulfp(a0, b0));
}

static __forceinline void Normalize3(__vector4 *self)
{
    __vector4 lengthSquared = __vmsum3fp(*self, *self);
    __vector4 inv = InvSqrt(lengthSquared);
    *self = __vmulfp(*self, __vspltw(inv, 0));
}

void fn_82D523F8(const __vector4 *a, const __vector4 *b, const __vector4 *c, __vector4 *normal)
{
    __vector4 ab = __vsubfp(*b, *a);
    __vector4 bc = __vsubfp(*c, *b);

    SetCross(normal, ab, bc);
    Normalize3(normal);
}
