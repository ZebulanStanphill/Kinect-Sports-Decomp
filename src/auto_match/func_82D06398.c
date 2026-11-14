typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Matrix4_82D06398 {
    __vector4 col[4];
} Matrix4_82D06398;

void fn_82D06398(Matrix4_82D06398 *out, const __vector4 *diag, const Matrix4_82D06398 *m)
{
    out->col[0] = __vmulfp(m->col[0], *diag);
    out->col[1] = __vmulfp(m->col[1], *diag);
    out->col[2] = __vmulfp(m->col[2], *diag);
    out->col[3] = __vmulfp(m->col[3], *diag);
}
