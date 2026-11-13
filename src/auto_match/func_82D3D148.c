typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82D3D148 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
    __vector4 col3;
} Transform_82D3D148;

typedef struct Obj_82D3D148 {
    char pad00[0x20];
    Transform_82D3D148 transform;
} Obj_82D3D148;

void fn_82D3D148(Obj_82D3D148 *self, const Transform_82D3D148 *transform)
{
    Transform_82D3D148 *dst = &self->transform;

    dst->col0 = transform->col0;
    dst->col1 = transform->col1;
    dst->col2 = transform->col2;
    dst->col3 = transform->col3;
}
