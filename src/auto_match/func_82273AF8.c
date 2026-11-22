/* Scalar sine and cosine (XMScalarSinCos shape): the angle is reduced to [-pi, pi), then the powers of x
   are dotted with the sine and cosine coefficient tables. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
double fabs(double);

extern const __vector4 lbl_82195FE0; /* sine coefficients 0 */
extern const __vector4 lbl_82195FF0; /* sine coefficients 1 */
extern const __vector4 lbl_82196000; /* sine coefficients 2 */
extern const __vector4 lbl_82196010; /* cosine coefficients 0 */
extern const __vector4 lbl_82196020; /* cosine coefficients 1 */
extern const __vector4 lbl_82196030; /* cosine coefficients 2 */

typedef union Vec_82273AF8 {
    __vector4 v;
    float f[4];
} Vec_82273AF8;

static __forceinline float GetX(__vector4 v)
{
    Vec_82273AF8 u;
    u.v = v;
    return u.f[0];
}

static __forceinline float ModAngle(float value)
{
    float t;

    value = value + 3.14159274f;
    t = (float)fabs(value);
    t = t - 6.28318548f * (float)(__int64)(t * 0.159154937f);
    t = t - 3.14159274f;
    return value >= 0.0f ? t : -t;
}

void fn_82273AF8(float *s, float *c, float value)
{
    Vec_82273AF8 p;
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
    *c = c2 + c1 + c0;
    *s = s2 + s1 + s0;
}
