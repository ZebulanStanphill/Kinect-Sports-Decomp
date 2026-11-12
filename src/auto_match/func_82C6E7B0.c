typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
void __stvlx(__vector4 v, void *base, int offset);
void __stvrx(__vector4 v, void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vaddubs(__vector4 a, __vector4 b);

static __forceinline __vector4 LoadUnaligned(const unsigned char *p)
{
    return __vor(__lvlx(p, 0), __lvrx(p, 16));
}

static __forceinline void StoreUnaligned(unsigned char *p, __vector4 v)
{
    __stvlx(v, p, 0);
    __stvrx(v, p, 16);
}

void fn_82C6E7B0(const unsigned char *a, const unsigned char *b, unsigned char *dst, int count)
{
    int blocks = count >> 6;
    int rest = count - (blocks << 6);
    int i;

    for (i = 0; i < blocks; i++) {
        __vector4 b0 = LoadUnaligned(b);
        __vector4 a0 = LoadUnaligned(a);
        __vector4 b1 = LoadUnaligned(b + 16);
        __vector4 a1 = LoadUnaligned(a + 16);
        __vector4 b2 = LoadUnaligned(b + 32);
        __vector4 a2 = LoadUnaligned(a + 32);
        __vector4 b3 = LoadUnaligned(b + 48);
        __vector4 a3 = LoadUnaligned(a + 48);
        __vector4 s0 = __vaddubs(a0, b0);
        __vector4 s1 = __vaddubs(a1, b1);
        __vector4 s2 = __vaddubs(a2, b2);
        __vector4 s3 = __vaddubs(a3, b3);
        StoreUnaligned(dst, s0);
        StoreUnaligned(dst + 16, s1);
        StoreUnaligned(dst + 32, s2);
        StoreUnaligned(dst + 48, s3);
        a += 64;
        b += 64;
        dst += 64;
    }
    for (i = 0; i < rest; i++) {
        int sum = *a + *b;
        if (sum > 255) {
            sum = 255;
        }
        *dst = (unsigned char)sum;
        a++;
        b++;
        dst++;
    }
}
