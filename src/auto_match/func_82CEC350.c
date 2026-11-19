typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vpermwi(__vector4 v, int control);

typedef struct Matrix3_82CEC350 {
    __vector4 col[3];
} Matrix3_82CEC350;

static __forceinline void GetRow(const Matrix3_82CEC350 *m, int row, __vector4 *out)
{
    __vector4 v;

    v.vector4_f32[0] = m->col[0].vector4_f32[row];
    v.vector4_f32[1] = m->col[1].vector4_f32[row];
    v.vector4_f32[2] = m->col[2].vector4_f32[row];
    v.vector4_f32[3] = 0.0f;
    *out = v;
}

static __forceinline __vector4 Cross(__vector4 a, __vector4 b)
{
    __vector4 t0 = __vmulfp(__vpermwi(a, 135), __vpermwi(b, 99));
    __vector4 t1 = __vmulfp(__vpermwi(a, 99), __vpermwi(b, 135));
    return __vsubfp(t1, t0);
}

void fn_82CEC350(__vector4 *determinant, const Matrix3_82CEC350 *m)
{
    __vector4 r0;
    __vector4 r1;
    __vector4 r2;

    GetRow(m, 0, &r0);
    GetRow(m, 1, &r1);
    GetRow(m, 2, &r2);
    *determinant = __vmsum3fp(r0, Cross(r1, r2));
}
