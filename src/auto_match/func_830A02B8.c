/* Havok: angular constraint atom set-up. The axis is the normalised sum of the two frames'
   columns (or frame B's column when the sum is degenerate); the angle between the other
   columns around it goes through fn_82CECE68 (atan2). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vpermwi(__vector4 v, int control);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Atom_830A02B8 {
    unsigned char type[3];
    unsigned char axis;         /* 0x03 */
    unsigned char perpAxis;     /* 0x04 */
    char pad5[3];
    float a;                    /* 0x08 */
    float b;                    /* 0x0c */
    float strength;             /* 0x10 */
} Atom_830A02B8;

typedef struct Input_830A02B8 {
    char pad0[0x40];
    float factor;               /* 0x40 */
} Input_830A02B8;

typedef struct Out_830A02B8 {
    __vector4 axis;             /* 0x00 */
    float a;                    /* 0x10 */
    float b;                    /* 0x14 */
    float angle;                /* 0x18 */
    float stiffness;            /* 0x1c */
} Out_830A02B8;

extern const __vector4 lbl_82132D70;    /* 0.5 x4 */
extern float lbl_82187DEC;
extern float fn_82CECE68(float y, float x);

static __forceinline float Length3(__vector4 v)
{
    __vector4 zero = __vspltisw(0);
    __vector4 len2 = __vmsum3fp(v, v);
    __vector4 e = __vrsqrtefp(len2);
    __vector4 halfLen2 = __vmulfp(len2, lbl_82132D70);
    float r;

    e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
    e = __vmaddfp(e, __vnmsubfp(halfLen2, __vmulfp(e, e), lbl_82132D70), e);
    e = __vsel(e, zero, __vcmpeqfp(zero, len2));
    __stvewx(__vmulfp(len2, e), &r, 0);
    return r;
}

static __forceinline __vector4 Cross(__vector4 v1, __vector4 v2)
{
    __vector4 cross0 = __vmulfp(__vpermwi(v1, 99), __vpermwi(v2, 135));
    __vector4 cross1 = __vmulfp(__vpermwi(v1, 135), __vpermwi(v2, 99));
    return __vsubfp(cross0, cross1);
}

static __forceinline float Dot3(__vector4 a, __vector4 b)
{
    float r;
    __stvewx(__vmsum3fp(a, b), &r, 0);
    return r;
}

int fn_830A02B8(const Atom_830A02B8 *atom, const Input_830A02B8 *in, const __vector4 *frameA,
                const __vector4 *frameB, Out_830A02B8 *out)
{
    __vector4 sum, axis, c, d, a, b;
    const __vector4 *perpA, *perpB;
    float len, half, y, x;

    out->axis = frameA[atom->axis];
    out->a = atom->a;
    out->b = atom->b;
    a = frameA[atom->axis];
    b = frameB[atom->axis];
    perpB = &frameB[atom->perpAxis];
    perpA = &frameA[atom->perpAxis];
    sum = __vaddfp(b, a);
    len = Length3(sum);
    if (len > lbl_82187DEC) {
        float inv = 1.0f / len;
        axis = __vmulfp(sum, __vspltw(__lvlx(&inv, 0), 0));
        half = len * 0.5f;
    } else {
        axis = b;
        half = 0.0f;
    }
    c = Cross(axis, *perpB);
    y = Dot3(c, *perpA);
    d = Cross(c, axis);
    x = Dot3(d, *perpA);
    out->angle = fn_82CECE68(y, x);
    out->axis = axis;
    out->stiffness = in->factor * atom->strength * half * half;
    return 0;
}
