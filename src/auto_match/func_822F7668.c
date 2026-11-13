typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
__vector4 __vsubfp(__vector4, __vector4);
double sqrt(double);

double fn_822F7668(__vector4 a, __vector4 b)
{
    __vector4 d = __vsubfp(a, b);
    return (double)sqrt(d.vector4_f32[0] * d.vector4_f32[0] + d.vector4_f32[2] * d.vector4_f32[2]);
}
