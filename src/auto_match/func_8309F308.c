typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

typedef struct Rotation_8309F308 {
    __vector4 col[3];
} Rotation_8309F308;

typedef struct Owner_8309F308 {
    char pad0[0x38];
    const Rotation_8309F308 *first;     /* 0x38 */
    const Rotation_8309F308 *second;    /* 0x3c */
} Owner_8309F308;

static __forceinline __vector4 Rotate(__vector4 v, __vector4 c0, __vector4 c1, __vector4 c2)
{
    __vector4 r;

    r = __vmulfp(c0, __vspltw(v, 0));
    r = __vmaddfp(c1, __vspltw(v, 1), r);
    return __vmaddfp(c2, __vspltw(v, 2), r);
}

static __forceinline void RotatePoints(const Rotation_8309F308 *m, const __vector4 *in, int n, __vector4 *out)
{
    __vector4 c0 = m->col[0];
    __vector4 c1 = m->col[1];
    __vector4 c2 = m->col[2];
    int i;

    i = n - 1;
    do {
        __vector4 v = in[i];
        out[i] = Rotate(v, c0, c1, c2);
    } while (--i >= 0);
}

void fn_8309F308(const __vector4 *in, const Owner_8309F308 *owner, __vector4 *out1, __vector4 *out2)
{
    RotatePoints(owner->first, &in[1], 4, out1);
    RotatePoints(owner->second, &in[4], 4, out2);
}
