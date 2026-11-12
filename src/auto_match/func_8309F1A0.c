// Two transforms multiplied: four columns (three rotation columns and the translation) of each
// input rotated by the owner's first / second transform, then that transform's translation added.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Transform_8309F1A0 {
    __vector4 col[4];   /* rotation columns 0..2, translation */
} Transform_8309F1A0;

typedef struct Owner_8309F1A0 {
    char pad0[0x38];
    const Transform_8309F1A0 *first;     /* 0x38 */
    const Transform_8309F1A0 *second;    /* 0x3c */
} Owner_8309F1A0;

static __forceinline __vector4 Rotate(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    return __vmaddfp(c2, __vspltw(v, 2), r);
}

static __forceinline void Add4(__vector4 *a, const __vector4 *b)
{
    *a = __vaddfp(*a, *b);
}

static __forceinline void SetMul(const Transform_8309F1A0 *m, const __vector4 *in, __vector4 *out)
{
    __vector4 c0 = m->col[0];
    __vector4 c1 = m->col[1];
    __vector4 c2 = m->col[2];
    int i;

    i = 3;
    do {
        __vector4 v = in[i];
        out[i] = Rotate(v, c0, c1, c2);
    } while (--i >= 0);
    Add4(&out[3], &m->col[3]);
}

void fn_8309F1A0(const __vector4 *in, const Owner_8309F1A0 *owner, __vector4 *out1, __vector4 *out2)
{
    SetMul(owner->first, &in[1], out1);
    SetMul(owner->second, &in[5], out2);
}
