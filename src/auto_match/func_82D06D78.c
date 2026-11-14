typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef struct Transform_82D06D78 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
    __vector4 col3;
} Transform_82D06D78;

void fn_82D06D78(Transform_82D06D78 *self, const Transform_82D06D78 *src)
{
    self->col0 = src->col0;
    self->col1 = src->col1;
    self->col2 = src->col2;
    self->col3 = src->col3;
    self->col0.vector4_f32[3] = 0.0f;
    self->col1.vector4_f32[3] = 0.0f;
    self->col2.vector4_f32[3] = 0.0f;
    self->col3.vector4_f32[3] = 1.0f;
}
