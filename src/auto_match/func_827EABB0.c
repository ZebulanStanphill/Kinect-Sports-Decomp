typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

__vector4 fn_827EABB0(const char *base, int offset)
{
    return *(const __vector4 *)(base + offset);
}
