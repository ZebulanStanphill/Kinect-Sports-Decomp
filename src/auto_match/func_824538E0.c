typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

void fn_824538E0(__vector4 *out)
{
    *out = __VMXGetReg(77);
}
