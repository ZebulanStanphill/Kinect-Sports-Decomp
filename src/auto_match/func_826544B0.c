/* Scalar sine (XMScalarSin shape): the angle is reduced to [-pi, pi), then the odd powers of x are
   dotted with the sine coefficient tables. */
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

typedef union Vec_826544B0 {
    __vector4 v;
    float f[4];
} Vec_826544B0;

static __forceinline float GetX(__vector4 v)
{
    Vec_826544B0 u;
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

float fn_826544B0(float value)
{
    Vec_826544B0 p;
    __vector4 v0123, v0246, v1, v1357, v7, v8, v9, v17;
    float s0, s1, s2;

    value = ModAngle(value);
    p.f[0] = 1.0f;
    p.f[1] = value;
    p.f[2] = value * value;
    p.f[3] = value * value * value;
    v0123 = p.v;
    v0246 = __vmulfp(v0123, v0123);
    v1 = __vspltw(v0123, 1);
    v1357 = __vmulfp(v0246, v1);
    v7 = __vspltw(v1357, 3);
    s0 = GetX(__vmsum4fp(v1357, lbl_82195FE0));
    v8 = __vmulfp(v7, v1);
    v9 = __vmulfp(v1357, v8);
    v17 = __vmulfp(v9, v8);
    s1 = GetX(__vmsum4fp(v9, lbl_82195FF0));
    s2 = GetX(__vmsum4fp(v17, lbl_82196000));
    return s2 + s1 + s0;
}
