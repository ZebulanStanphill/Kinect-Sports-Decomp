typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
__vector4 __vmulfp(__vector4 a, __vector4 b);

__vector4 fn_8306ED70(__vector4 a, __vector4 b)
{
    return __vmulfp(a, b);
}
