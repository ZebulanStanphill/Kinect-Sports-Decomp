/* Decodes a DXT5/BC4 alpha block: two endpoint bytes (scaled to floats), the eight-entry palette
   (six interpolated values, or four plus 0 and 1 when the first endpoint is not larger), and the
   sixteen 3-bit indices, written into lane `channel` of the sixteen output vectors. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vcfux(__vector4 v, int shift);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rot);
__vector4 __vcmpgtfpR(__vector4 a, __vector4 b, unsigned int *cr);

extern const __vector4 lbl_820D26E0;
extern const __vector4 lbl_820D27C0;
extern const __vector4 lbl_820D27D0;
extern const __vector4 lbl_820D27E0;
extern const __vector4 lbl_820D27F0;
extern const __vector4 lbl_820D2800;
extern const __vector4 lbl_820D2810;
extern const __vector4 lbl_820D2820;
extern const __vector4 lbl_820D2830;

static __forceinline __vector4 LoadScalar(float f)
{
    return __lvlx(&f, 0);
}

void fn_82A97250(const unsigned char *src, __vector4 *out, int channel)
{
    __vector4 words, scaled, a0, a1, t;
    __vector4 palette[2];
    unsigned int cr;
    unsigned int i;

    ((unsigned int *)&words)[2] = 0;
    ((unsigned int *)&words)[3] = 0;
    ((unsigned int *)&words)[0] = src[0];
    ((unsigned int *)&words)[1] = src[1];
    scaled = __vmulfp(__vcfux(words, 0), lbl_820D26E0);
    a0 = __vspltw(scaled, 0);
    a1 = __vspltw(scaled, 1);
    __vcmpgtfpR(a0, a1, &cr);
    if (cr & 0x80) {
        palette[0] = __vmulfp(a1, lbl_820D2830);
        palette[1] = __vmulfp(a1, lbl_820D2820);
        palette[0] = __vmaddfp(a0, lbl_820D2810, palette[0]);
        palette[1] = __vmaddfp(a0, lbl_820D2800, palette[1]);
    } else {
        palette[0] = __vmulfp(a1, lbl_820D27F0);
        palette[1] = __vmulfp(a1, lbl_820D27E0);
        palette[0] = __vmaddfp(a0, lbl_820D27C0, palette[0]);
        palette[1] = __vrlimi(__vmaddfp(a0, lbl_820D27D0, palette[1]), LoadScalar(1.0f), 1, 1);
    }
    ((unsigned int *)&words)[0] = src[2] | (src[3] << 8) | (src[4] << 16);
    ((unsigned int *)&words)[1] = src[5] | (src[6] << 8) | (src[7] << 16);
    for (i = 0; i < 16; i++) {
        unsigned int w = ((unsigned int *)&words)[i >> 3];
        ((unsigned int *)&words)[i >> 3] = w >> 3;
        t = out[i];
        t.vector4_f32[channel] = ((float *)palette)[w & 7];
        out[i] = t;
    }
}
