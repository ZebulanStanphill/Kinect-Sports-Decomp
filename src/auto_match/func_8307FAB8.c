typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

static __forceinline float GetReal(__vector4 v)
{
    float r;
    __stvewx(v, &r, 0);
    return r;
}

static __forceinline __vector4 Replicate(float f)
{
    __vector4 v = __lvlx(&f, 0);
    return __vspltw(v, 0);
}

int fn_8307FAB8(const __vector4 *point, const __vector4 *a, const __vector4 *b, __vector4 *out)
{
    __vector4 ab = __vsubfp(*b, *a);
    __vector4 ap = __vsubfp(*point, *a);
    float proj = GetReal(__vmsum3fp(ab, ap));
    float lenSq = GetReal(__vmsum3fp(ab, ab));

    if (proj <= 0.0f) {
        *out = *a;
        return 8;
    }
    if (proj >= lenSq) {
        *out = *b;
        return 4;
    }
    *out = __vmaddfp(ab, Replicate(proj / lenSq), *a);
    return 0;
}
