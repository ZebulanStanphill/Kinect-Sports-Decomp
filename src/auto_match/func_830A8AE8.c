typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;

__vector4 fn_830A8AE8(char *p, int off)
{
    return *(__vector4 *)(p + off);
}
