typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

__vector4 __vxor(__vector4, __vector4);

void fn_83085AF0(__vector4 *out)
{
    __vector4 zero;
    zero = __vxor(zero, zero);
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out++ = zero;
    *out = zero;
}
