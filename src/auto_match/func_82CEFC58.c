typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82CEFC58 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
    __vector4 col3;
} Transform_82CEFC58;

typedef struct Obj_82CEFC58 {
    char pad00[0x10];
    Transform_82CEFC58 transform;
} Obj_82CEFC58;

void fn_82CEFC58(Obj_82CEFC58 *self, const Transform_82CEFC58 *transform)
{
    Transform_82CEFC58 *dst = &self->transform;

    dst->col0 = transform->col0;
    dst->col1 = transform->col1;
    dst->col2 = transform->col2;
    dst->col3 = transform->col3;
}
