typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float value[4];
} __vector4;

__vector4 __lvlx(const void *base, unsigned int offset);
__vector4 __vspltw(__vector4 value, unsigned int lane);
__vector4 __vmulfp(__vector4 first, __vector4 second);

void fn_82FEBD60(__vector4 *out, const __vector4 *input, float scale)
{
    __vector4 factor = __vspltw(__lvlx(&scale, 0), 0);
    __vector4 first = __vmulfp(input[0], factor);
    __vector4 second = __vmulfp(input[1], factor);
    out[0] = first;
    out[1] = second;
}
