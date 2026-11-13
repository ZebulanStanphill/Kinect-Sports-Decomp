typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern int fn_8306EE80(float *angle, __vector4 d);
extern float fn_8306EA78(float x);
extern float lbl_8217EB70;

int fn_8306EAD0(float *angle, __vector4 a, __vector4 b)
{
    int result = fn_8306EE80(angle, fn_8306ED30(b, a));
    *angle = -fn_8306EA78(*angle + lbl_8217EB70);
    return result;
}
