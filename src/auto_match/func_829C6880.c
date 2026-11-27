typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpeqfpR(__vector4 a, __vector4 b, unsigned int *cr);

typedef struct Matrix_829C6880 {
    __vector4 r[4];
} Matrix_829C6880;

typedef struct Float4_829C6880 {
    float x;
    float y;
    float z;
    float w;
} Float4_829C6880;

typedef union Vector_829C6880 {
    Float4_829C6880 f;
    __vector4 v;
} Vector_829C6880;

typedef struct Camera_829C6880 {
    char pad00[0x170];
    int reference[3]; /* 0x170 */
    char pad17c[4];
    Vector_829C6880 normal; /* 0x180; w is the elevation angle */
    char pad190[4];
    int current[3]; /* 0x194 */
    char pad1a0[0x60];
} Camera_829C6880;

extern Camera_829C6880 lbl_83214DB0;
extern __vector4 fn_829C5C78(const int *v);
extern double fn_82F65E18(double x);
extern Matrix_829C6880 *fn_8234E338(Matrix_829C6880 *result, __vector4 axis, float angle);

static __forceinline int Vector3Equal(__vector4 a, __vector4 b)
{
    unsigned int cr = 0;

    a = __vpermwi(a, 24);
    b = __vpermwi(b, 24);
    __vcmpeqfpR(a, b, &cr);
    return (cr & 0x80) != 0;
}

static __forceinline __vector4 Vector3Cross(__vector4 a, __vector4 b)
{
    __vector4 a1, a2, b1, b2, result;

    b2 = __vpermwi(b, 0x87);
    a1 = __vpermwi(a, 0x63);
    b1 = __vpermwi(b, 0x63);
    a2 = __vpermwi(a, 0x87);
    result = __vmulfp(a1, b2);
    result = __vnmsubfp(a2, b1, result);
    return result;
}

static __forceinline __vector4 Vector3TransformNormal(__vector4 v, Matrix_829C6880 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmulfp(z, m.r[2]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}

__vector4 fn_829C6880(void)
{
    Vector_829C6880 result;
    Matrix_829C6880 rotation;
    __vector4 zero;
    __vector4 from;
    __vector4 to;
    __vector4 dot;
    float angle;

    zero = __vspltisw(0);
    result = lbl_83214DB0.normal;
    if (Vector3Equal(result.v, zero)) {
        return zero;
    }
    from = fn_829C5C78(lbl_83214DB0.reference);
    to = fn_829C5C78(lbl_83214DB0.current);
    dot = __vmsum3fp(from, to);
    angle = (float)fn_82F65E18(dot.vector4_f32[3]);
    fn_8234E338(&rotation, Vector3Cross(from, to), -angle);
    result.v = Vector3TransformNormal(result.v, rotation);
    result.f.w = lbl_83214DB0.normal.f.w;
    return result.v;
}
