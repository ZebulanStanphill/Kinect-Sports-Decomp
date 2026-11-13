/* Quaternion from an axis and an angle (XMQuaternionRotationAxis shape): the axis is normalised, its w set to 0
   (identity row 3 with xyz replaced), and scaled by (sin, sin, sin, cos) of half the angle. Sine and cosine of the
   reduced half angle come from dot products of the powers of x with the polynomial coefficient tables. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rot);
double __fsel(double a, double b, double c);
double fabs(double);

extern float lbl_8201DFE8;              /* 1 / 2pi */
extern float lbl_82015468;              /* 2pi */
extern const __vector4 lbl_82195FE0;    /* sine coefficients 0 */
extern const __vector4 lbl_82195FF0;    /* sine coefficients 1 */
extern const __vector4 lbl_82196000;    /* sine coefficients 2 */
extern const __vector4 lbl_82196010;    /* cosine coefficients 0 */
extern const __vector4 lbl_82196020;    /* cosine coefficients 1 */
extern const __vector4 lbl_82196030;    /* cosine coefficients 2 */

typedef union Vec_830763C8 {
    __vector4 v;
    float f[4];
} Vec_830763C8;

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

static __forceinline float GetX(__vector4 v)
{
    Vec_830763C8 u;
    u.v = v;
    return u.f[0];
}

static __forceinline float ModAngle(float value)
{
    float t;

    value = value + 3.14159274f;
    t = (float)fabs(value);
    t = t - lbl_82015468 * (float)(__int64)(t * lbl_8201DFE8);
    t = t - 3.14159274f;
    return (float)__fsel(value, t, -t);
}

static __forceinline void SinCos(float *s, float *c, float value)
{
    Vec_830763C8 p;
    __vector4 v0123, v0246, v1, v2, v6, v1357, v8, v9, v8b, v17, v16;
    float c0, s0, s1, c1, s2, c2;

    value = ModAngle(value);
    p.f[0] = 1.0f;
    p.f[1] = value;
    p.f[2] = value * value;
    p.f[3] = value * value * value;
    v0123 = p.v;
    v2 = __vspltw(v0123, 2);
    v0246 = __vmulfp(v0123, v0123);
    c0 = GetX(__vmsum4fp(v0246, lbl_82196010));
    v1 = __vspltw(v0123, 1);
    v6 = __vspltw(v0246, 3);
    v1357 = __vmulfp(v0246, v1);
    v8 = __vmulfp(v6, v2);
    v9 = __vmulfp(v1357, v8);
    v17 = __vmulfp(v9, v8);
    v8b = __vmulfp(v0246, v8);
    s0 = GetX(__vmsum4fp(v1357, lbl_82195FE0));
    s1 = GetX(__vmsum4fp(v9, lbl_82195FF0));
    s2 = GetX(__vmsum4fp(v17, lbl_82196000));
    v16 = __vmulfp(v8b, v8);
    c1 = GetX(__vmsum4fp(v8b, lbl_82196020));
    c2 = GetX(__vmsum4fp(v16, lbl_82196030));
    *s = s2 + s1 + s0;
    *c = c2 + c1 + c0;
}

__vector4 fn_830763C8(__vector4 axis, float angle)
{
    __vector4 n;
    Vec_830763C8 scale;
    float s, c;

    n = Normalize3(axis);
    n = __vrlimi(__vupkd3d(__vspltisw(0), 1), n, 0xe, 0);
    SinCos(&s, &c, 0.5f * angle);
    scale.f[0] = scale.f[1] = scale.f[2] = s;
    scale.f[3] = c;
    return __vmulfp(n, scale.v);
}
