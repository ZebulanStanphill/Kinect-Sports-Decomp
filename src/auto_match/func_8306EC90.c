typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);

__vector4 fn_8306EC90(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}
