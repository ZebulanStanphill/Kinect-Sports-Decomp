typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82D06EE8 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
    __vector4 translation;
} Transform_82D06EE8;

extern void fn_82D064E8(Transform_82D06EE8 *t, float epsilon);
extern void fn_82D06938(void *self, void *a, const Transform_82D06EE8 *t);

void fn_82D06EE8(void *self, void *a, const Transform_82D06EE8 *src)
{
    Transform_82D06EE8 t;

    t.col0 = src->col0;
    t.col1 = src->col1;
    t.col2 = src->col2;
    t.translation = src->translation;

    fn_82D064E8(&t, 1.1920929e-07f);
    fn_82D06938(self, a, &t);
}
