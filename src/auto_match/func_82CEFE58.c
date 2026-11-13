typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82CEFE58 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
    __vector4 col3;
} Transform_82CEFE58;

typedef struct Obj_82CEFE58 {
    char pad00[0x10];
    Transform_82CEFE58 transform;
} Obj_82CEFE58;

void fn_82CEFE58(const Obj_82CEFE58 *self, Transform_82CEFE58 *transform)
{
    const Transform_82CEFE58 *src = &self->transform;

    transform->col0 = src->col0;
    transform->col1 = src->col1;
    transform->col2 = src->col2;
    transform->col3 = src->col3;
}
