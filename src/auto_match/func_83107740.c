typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef union { unsigned int u[4]; __vector4 v; } VecU32_83107740;
extern __vector4 lbl_8329EA30;
void fn_83107740(void)
{
    VecU32_83107740 t;
    t.u[0] = 0xffffffff;
    t.u[1] = 0;
    t.u[2] = 0;
    t.u[3] = 0;
    lbl_8329EA30 = t.v;
}
