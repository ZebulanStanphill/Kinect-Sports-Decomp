// Rotation matrix from a quaternion (XMMatrixRotationQuaternion shape), quaternion passed by value,
// matrix returned through r3.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vupkd3d(__vector4 v, int type);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_8307D470 {
    __vector4 r[4];
} Matrix_8307D470;

Matrix_8307D470 fn_8307D470(__vector4 q)
{
    Matrix_8307D470 m;
    __vector4 q0, q1, zero, c, c1110, v0, v1, v2, r0, r1, r2;

    zero = __vspltisw(0);
    q0 = __vaddfp(q, q);
    q1 = __vmulfp(q, q0);
    c = __vupkd3d(zero, 1);
    c1110 = __vpermwi(c, 254);
    v0 = __vpermwi(q1, 64);
    v1 = __vpermwi(q1, 164);
    r0 = __vsubfp(c1110, v0);
    r0 = __vsubfp(r0, v1);
    r0 = __vrlimi(r0, c, 1, 3);
    v0 = __vpermwi(q, 7);
    v1 = __vpermwi(q0, 155);
    v0 = __vmulfp(v0, v1);
    v1 = __vspltw(q, 3);
    v2 = __vpermwi(q0, 99);
    v1 = __vmulfp(v1, v2);
    r1 = __vaddfp(v0, v1);
    r2 = __vsubfp(v0, v1);
    v0 = __vpermwi(r1, 66);
    v0 = __vrlimi(v0, r2, 6, 3);
    v1 = __vsldoi(r2, r1, 8);
    v1 = __vpermwi(v1, 136);
    v2 = __vpermwi(r0, 7);
    m.r[0] = r0;
    m.r[0] = __vrlimi(m.r[0], v0, 6, 3);
    m.r[3] = __vpermwi(c, 171);
    m.r[2] = __vrlimi(v1, r0, 3, 0);
    m.r[1] = __vmrglw(v0, v2);
    return m;
}
