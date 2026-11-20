typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 mask);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int scale);

extern __vector4 fn_8306ED78(__vector4 a, __vector4 b); /* cross product */
extern float fn_8306ED98(__vector4 a, __vector4 b);     /* dot product of x, y, z */

/* Shortest-arc rotation quaternion between two unit vectors. */
__vector4 fn_830762A0(__vector4 from, __vector4 to)
{
    __vector4 axis;
    __vector4 q;
    __vector4 one;
    __vector4 zero;
    __vector4 half;
    __vector4 lengthSquared;
    __vector4 estimate;
    __vector4 correction;

    axis = fn_8306ED78(to, from);
    q.vector4_f32[0] = axis.vector4_f32[0];
    q.vector4_f32[1] = axis.vector4_f32[1];
    q.vector4_f32[2] = axis.vector4_f32[2];
    q.vector4_f32[3] = fn_8306ED98(to, from) + 1.0f;
    one = __vspltisw(1);
    zero = __vspltisw(0);
    half = __vcfsx(one, 1);
    lengthSquared = __vmsum4fp(q, q);
    estimate = __vrsqrtefp(lengthSquared);
    correction = __vnmsubfp(__vmulfp(lengthSquared, half), __vmulfp(estimate, estimate), half);
    estimate = __vmaddfp(estimate, correction, estimate);
    return __vsel(__vmulfp(q, estimate), lengthSquared, __vcmpeqfp(lengthSquared, zero));
}
