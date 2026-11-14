typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Matrix4_82D06828 {
    __vector4 col[4];
} Matrix4_82D06828;

static __forceinline void Add4(__vector4 *self, const __vector4 *v)
{
    *self = __vaddfp(*self, *v);
}

void fn_82D06828(Matrix4_82D06828 *self, const Matrix4_82D06828 *other)
{
    Add4(&self->col[0], &other->col[0]);
    Add4(&self->col[1], &other->col[1]);
    Add4(&self->col[2], &other->col[2]);
    Add4(&self->col[3], &other->col[3]);
}
