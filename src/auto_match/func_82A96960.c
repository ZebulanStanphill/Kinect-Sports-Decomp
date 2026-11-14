typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float f[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);

static __forceinline unsigned int Mask(int ok, unsigned int value)
{
    return ok ? value : 0;
}

__vector4 fn_82A96960(const unsigned int *data)
{
    unsigned int out[4];
    int i;
    for (i = 0; i < 4; i++)
        out[i] = Mask(data[i] == 3, ~0u);
    return __vor(__lvlx(out, 0), __lvrx(out, 16));
}
