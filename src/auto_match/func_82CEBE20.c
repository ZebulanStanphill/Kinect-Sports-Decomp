typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Matrix3_82CEBE20 {
    __vector4 col[3];
} Matrix3_82CEBE20;

static __forceinline void Mul4(__vector4 *self, const __vector4 *v)
{
    *self = __vmulfp(*self, *v);
}

void fn_82CEBE20(Matrix3_82CEBE20 *self, const __vector4 *diag)
{
    Mul4(&self->col[0], diag);
    Mul4(&self->col[1], diag);
    Mul4(&self->col[2], diag);
}
