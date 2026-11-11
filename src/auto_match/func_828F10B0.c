typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvsl(const void *base, int offset);
__vector4 __vperm(__vector4 a, __vector4 b, __vector4 control);
__vector4 __vpkd3d(__vector4 d, __vector4 v, int type, int mask, int shift);
__vector4 __vsplth(__vector4 v, unsigned int i);
void __stvehx(__vector4 v, void *base, int offset);

static __forceinline unsigned short FloatToHalf(float value)
{
    __vector4 v;
    unsigned short result;

    v = __vperm(*(__vector4 *)&value, *(__vector4 *)&value, __lvsl(&value, 0));
    v = __vpkd3d(v, v, 5, 2, 2);
    v = __vsplth(v, 0);
    __stvehx(v, &result, 0);
    return result;
}

void fn_828F10B0(unsigned short *out, const float *in, unsigned int count)
{
    unsigned int i;

    for (i = 0; i < count; i++) {
        *out++ = FloatToHalf(*in++);
    }
}
