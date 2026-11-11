// Returns whether a quaternion equals the constant quaternion lbl_832628A0 (or its negation)
// within the tolerance lbl_82006848: XNA Math XMVector4NearEqual against both signs.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpbfpR(__vector4 a, __vector4 b, unsigned int *cr);

extern __vector4 lbl_832628A0;
extern const float lbl_82006848[2];

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Negate(__vector4 v)
{
    __vector4 sign;

    sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    return __vxor(v, sign);
}

static __forceinline int NearEqual(__vector4 a, __vector4 b, __vector4 epsilon)
{
    unsigned int cr;
    __vector4 delta;

    delta = __vsubfp(a, b);
    __vcmpbfpR(delta, epsilon, &cr);
    return (cr & 0x20) == 0x20;
}

unsigned char fn_82F59EA8(__vector4 q)
{
    __vector4 e;
    __vector4 n;
    int r = 0;

    e = Replicate(lbl_82006848[0]);
    n = Negate(lbl_832628A0);
    if (NearEqual(q, lbl_832628A0, e) || NearEqual(q, n, e)) r = 1;
    return r;
}
