// XNA Math XMVector3Transform(V, M) with the matrix passed by value (8 GPR slots).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __declspec(align(16)) struct Matrix_82F597F0 {
    __vector4 r[4];
} Matrix_82F597F0;

__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

__vector4 fn_82F597F0(__vector4 v, Matrix_82F597F0 m)
{
    __vector4 x, y, z, result;

    z = __vspltw(v, 2);
    y = __vspltw(v, 1);
    x = __vspltw(v, 0);
    result = __vmaddfp(m.r[2], z, m.r[3]);
    result = __vmaddfp(y, m.r[1], result);
    result = __vmaddfp(x, m.r[0], result);
    return result;
}
