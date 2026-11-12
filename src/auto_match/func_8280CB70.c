typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __declspec(align(16)) struct Matrix_8280CB70 {
    __vector4 r[4];
} Matrix_8280CB70;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

void fn_8280CB70(const Matrix_8280CB70 *m2, const Matrix_8280CB70 *m1, Matrix_8280CB70 *out)
{
    __vector4 a0, a1, a2, a3;
    __vector4 r0, r1, r2, r3;
    __vector4 w, x, y, z;

    a0 = m2->r[0];
    a1 = m2->r[1];
    a2 = m2->r[2];
    a3 = m2->r[3];

    w = m1->r[0];
    x = __vspltw(w, 0);
    y = __vspltw(w, 1);
    z = __vspltw(w, 2);
    w = __vspltw(w, 3);
    x = __vmulfp(x, a0);
    x = __vmaddfp(y, a1, x);
    x = __vmaddfp(z, a2, x);
    r0 = __vmaddfp(w, a3, x);

    w = m1->r[1];
    x = __vspltw(w, 0);
    y = __vspltw(w, 1);
    z = __vspltw(w, 2);
    w = __vspltw(w, 3);
    x = __vmulfp(x, a0);
    x = __vmaddfp(y, a1, x);
    x = __vmaddfp(z, a2, x);
    r1 = __vmaddfp(w, a3, x);

    w = m1->r[2];
    x = __vspltw(w, 0);
    y = __vspltw(w, 1);
    z = __vspltw(w, 2);
    w = __vspltw(w, 3);
    x = __vmulfp(x, a0);
    x = __vmaddfp(y, a1, x);
    x = __vmaddfp(z, a2, x);
    r2 = __vmaddfp(w, a3, x);

    w = m1->r[3];
    x = __vspltw(w, 0);
    y = __vspltw(w, 1);
    z = __vspltw(w, 2);
    w = __vspltw(w, 3);
    x = __vmulfp(x, a0);
    x = __vmaddfp(y, a1, x);
    x = __vmaddfp(z, a2, x);
    r3 = __vmaddfp(w, a3, x);

    out->r[0] = r0;
    out->r[1] = r1;
    out->r[2] = r2;
    out->r[3] = r3;
}
