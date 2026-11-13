/* Decodes a DXT1 colour block: the two RGB565 end points (read through fn_82AA7C38) become float
   colours scaled by lbl_820D26D0, the palette gets the two interpolated entries (or the midpoint
   and transparent black when colour0 <= colour1), and the 2-bit indices (read through
   fn_82AA7710) select the 16 output colours. The 2/3 weight is the literal 0.666666687f, pooled
   as lbl_820151C0 (pool alias __real@3f2aaaab=lbl_820151C0). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfux(__vector4 v, int shift);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

extern void fn_82AA7C38(void *dst, const void *src, unsigned int flags, int count, int size);
extern void fn_82AA7710(void *dst, const void *src, unsigned int flags);
extern const __vector4 lbl_820D26D0;

static __forceinline __vector4 LoadInt4(const unsigned int *p)
{
    __vector4 r = __lvrx(p, 16);
    __vector4 l = __lvlx(p, 0);
    return __vor(l, r);
}

static __forceinline __vector4 Expand565(unsigned short c)
{
    unsigned int v[4];

    v[0] = c >> 11;
    v[1] = (c >> 5) & 0x3f;
    v[2] = c & 0x1f;
    v[3] = 1;
    return __vcfux(LoadInt4(v), 0);
}

static __forceinline __vector4 Replicate(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

static __forceinline __vector4 Lerp(__vector4 v0, __vector4 v1, float t)
{
    __vector4 length = __vsubfp(v1, v0);
    __vector4 scale = Replicate(t);
    return __vmaddfp(length, scale, v0);
}

static __forceinline void SelectColors(__vector4 *out, const __vector4 *palette, unsigned int indices)
{
    int i;

    for (i = 0; i < 16; i++) {
        out[i] = palette[indices & 3];
        indices >>= 2;
    }
}

void fn_82A95CE8(const unsigned short *src, __vector4 *out)
{
    unsigned short colors[2];
    unsigned int indices;
    __vector4 c1;
    __vector4 c0;
    __vector4 palette[4];

    fn_82AA7C38(colors, src, 0x20001, 2, 2);
    fn_82AA7710(&indices, src + 2, 0x40001);
    c0 = Expand565(colors[0]);
    c1 = Expand565(colors[1]);
    palette[0] = __vmulfp(c0, lbl_820D26D0);
    palette[1] = __vmulfp(c1, lbl_820D26D0);
    if (colors[0] <= colors[1]) {
        palette[2] = Lerp(palette[0], palette[1], 0.5f);
        palette[3] = __vspltisw(0);
    } else {
        palette[2] = Lerp(palette[0], palette[1], 0.333333343f);
        palette[3] = Lerp(palette[0], palette[1], 0.666666687f);
    }
    SelectColors(out, palette, indices);
}
