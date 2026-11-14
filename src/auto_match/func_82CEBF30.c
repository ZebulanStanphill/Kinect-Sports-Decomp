typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmaddfp(__vector4 a, __vector4 b, __vector4 c);

typedef struct Matrix3_82CEBF30 {
    __vector4 col[3];
} Matrix3_82CEBF30;

static __forceinline void AddMul4(__vector4 *self, const __vector4 *a, const __vector4 *b)
{
    *self = __vmaddfp(*a, *b, *self);
}

void fn_82CEBF30(Matrix3_82CEBF30 *self, const __vector4 *v, const Matrix3_82CEBF30 *m)
{
    AddMul4(&self->col[0], &m->col[0], v);
    AddMul4(&self->col[1], &m->col[1], v);
    AddMul4(&self->col[2], &m->col[2], v);
}
