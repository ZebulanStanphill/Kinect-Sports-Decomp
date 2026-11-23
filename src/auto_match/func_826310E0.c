typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float f[4];
} __vector4;

void __dcbt(int offset, const void *base);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);

typedef struct Buffer_826310E0 {
    unsigned __int64 mask;
    char pad[0x778];
    __vector4 vectors[256]; // 0x780
} Buffer_826310E0;

static __forceinline __vector4 LoadUnaligned(const char *source, int offset)
{
    return __vor(__lvlx(source, offset), __lvrx(source, offset + 16));
}

static __forceinline __vector4 MergeUnalignedParts(__vector4 right, __vector4 left)
{
    return __vor(left, right);
}

void fn_826310E0(Buffer_826310E0 *buffer, int index, const char *input, unsigned int length,
                 unsigned __int64 mask)
{
    const char *source = input;
    __vector4 *dest = &buffer->vectors[index];
    unsigned int count = length;
    __dcbt(0, input);
    __dcbt(128, input);

    if (length > 3) {
        unsigned int groups = (length - 4) / 4 + 1;
        do {
            __vector4 a;
            __vector4 b;
            __vector4 c;
            __vector4 d;
            __dcbt(256, source);
            a = LoadUnaligned(source, 0);
            count -= 4;
            b = MergeUnalignedParts(__lvrx(source, 32), __lvlx(source, 16));
            c = MergeUnalignedParts(__lvrx(source, 48), __lvlx(source, 32));
            d = MergeUnalignedParts(__lvrx(source, 64), __lvlx(source, 48));
            source += 64;
            dest[0] = a;
            dest[1] = b;
            dest[2] = c;
            dest[3] = d;
            dest += 4;
        } while (--groups != 0);
    }

    while (count != 0) {
        __vector4 value = LoadUnaligned(source, 0);
        source += 16;
        *dest++ = value;
        --count;
    }

    buffer->mask |= mask;
}
