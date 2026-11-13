typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef struct Transform_82D067F8 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
    __vector4 col3;
} Transform_82D067F8;
extern void fn_82D064E8(Transform_82D067F8 *t);

void fn_82D067F8(Transform_82D067F8 *self, const Transform_82D067F8 *src)
{
    self->col0 = src->col0;
    self->col1 = src->col1;
    self->col2 = src->col2;
    self->col3 = src->col3;
    fn_82D064E8(self);
}
