// Returns whether two quaternions describe the same rotation within a tolerance: every
// component of a - b, or of a + b, lies within +-epsilon (XNA Math XMVector4NearEqual
// against b and against -b).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpbfpR(__vector4 a, __vector4 b, unsigned int *cr);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v;

    v.vector4_f32[0] = value;
    v.vector4_f32[1] = value;
    v.vector4_f32[2] = value;
    v.vector4_f32[3] = value;
    return v;
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

unsigned char fn_83076080(__vector4 a, __vector4 b, float epsilon)
{
    __vector4 e;
    __vector4 n;
    int r = 0;
    e = Replicate(epsilon);
    n = Negate(b);
    if (NearEqual(a, b, e) || NearEqual(a, n, e)) r = 1;
    return r;
}
