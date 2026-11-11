// Negates x, y and z of a vector and keeps w (quaternion conjugate).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vslw(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

__vector4 fn_830761B8(__vector4 q)
{
    __vector4 sign;
    __vector4 result;

    sign = __vspltisw(-1);
    sign = __vslw(sign, sign);
    result = __vxor(q, sign);
    return __vrlimi(result, q, 1, 0);
}
