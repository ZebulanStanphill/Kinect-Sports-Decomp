typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vcmpgefp(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);
__vector4 __VMXGetReg(int n);

extern const __vector4 lbl_8323B330[16]; /* hkVector4Comparison mask table */

typedef struct Aabb_8261FC48 {
    __vector4 min;
    __vector4 max;
} Aabb_8261FC48;

typedef struct Volume_8261FC48 {
    char pad0[0x40];
    Aabb_8261FC48 box;
    char pad60[4];
    int active;
    char pad68[0x6c - 0x68];
    float defaultRadius;
    char pad70[0x144 - 0x70];
    void *owner;
} Volume_8261FC48;

static __forceinline unsigned int AllAreSetXyz(__vector4 mask)
{
    unsigned int cr;
    __vcmpequwR(__vor(mask, lbl_8323B330[14]), __vspltisw(-1), &cr);
    return cr & 0x80;
}

static __forceinline unsigned int Contains(const Aabb_8261FC48 *box, __vector4 lo, __vector4 hi)
{
    return AllAreSetXyz(__vand(__vcmpgefp(lo, box->min), __vcmpgefp(box->max, hi)));
}

unsigned char fn_8261FC48(Volume_8261FC48 *self, const __vector4 *other, __vector4 point, float radius)
{
    __vector4 lo, hi, ext;
    float r;

    if (self->owner == 0 || self->active == 0 || radius == 0.0f) {
        return 0;
    }
    lo = point;
    hi = point;
    if (other != 0) {
        lo = __vminfp(point, *other);
        hi = __vmaxfp(point, *other);
    }
    r = 0.0f;
    ext = __VMXGetReg(75);
    if (radius > 0.0f) {
        r = radius;
    } else if (radius < 0.0f) {
        r = self->defaultRadius;
    }
    ext = __vmulfp(ext, __vspltw(__lvlx(&r, 0), 0));
    lo = __vsubfp(lo, ext);
    hi = __vaddfp(hi, ext);
    return Contains(&self->box, lo, hi) ? 1 : 0;
}
