// XNA Math XMMatrixMultiply(M1, M2): both matrices by value, result through the hidden pointer.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __declspec(align(16)) struct Matrix_82F59668 {
    __vector4 r[4];
} Matrix_82F59668;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

Matrix_82F59668 *fn_82F59668(Matrix_82F59668 *result, Matrix_82F59668 m1, Matrix_82F59668 m2)
{
    __vector4 r0, r1, r2, r3;

    r0 = __vmulfp(__vspltw(m1.r[0], 0), m2.r[0]);
    r1 = __vmulfp(__vspltw(m1.r[1], 0), m2.r[0]);
    r2 = __vmulfp(__vspltw(m1.r[2], 0), m2.r[0]);
    r3 = __vmulfp(__vspltw(m1.r[3], 0), m2.r[0]);
    r0 = __vmaddfp(__vspltw(m1.r[0], 1), m2.r[1], r0);
    r1 = __vmaddfp(__vspltw(m1.r[1], 1), m2.r[1], r1);
    r2 = __vmaddfp(__vspltw(m1.r[2], 1), m2.r[1], r2);
    r3 = __vmaddfp(__vspltw(m1.r[3], 1), m2.r[1], r3);
    r0 = __vmaddfp(__vspltw(m1.r[0], 2), m2.r[2], r0);
    r1 = __vmaddfp(__vspltw(m1.r[1], 2), m2.r[2], r1);
    r2 = __vmaddfp(__vspltw(m1.r[2], 2), m2.r[2], r2);
    r3 = __vmaddfp(__vspltw(m1.r[3], 2), m2.r[2], r3);
    r0 = __vmaddfp(__vspltw(m1.r[0], 3), m2.r[3], r0);
    r1 = __vmaddfp(__vspltw(m1.r[1], 3), m2.r[3], r1);
    r2 = __vmaddfp(__vspltw(m1.r[2], 3), m2.r[3], r2);
    r3 = __vmaddfp(__vspltw(m1.r[3], 3), m2.r[3], r3);
    result->r[0] = r0;
    result->r[1] = r1;
    result->r[2] = r2;
    result->r[3] = r3;
    return result;
}
