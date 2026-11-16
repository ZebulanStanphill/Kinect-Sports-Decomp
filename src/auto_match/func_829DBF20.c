typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern void fn_824DCB30(int *x, int *y, unsigned short *z, __vector4 point);

__vector4 fn_829DBF20(__vector4 point)
{
    int x;
    int y;
    unsigned short z;
    __vector4 result;
    fn_824DCB30(&x, &y, &z, point);
    result.vector4_f32[0] = (float)x;
    result.vector4_f32[1] = (float)y;
    result.vector4_f32[2] = 0.0f;
    result.vector4_f32[3] = 0.0f;
    return result;
}
