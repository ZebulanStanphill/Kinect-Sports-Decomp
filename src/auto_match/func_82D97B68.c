typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D97B68 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D97B68;

typedef struct Obj_82D97B68 {
    char pad00[0x20];
    Rotation_82D97B68 rotation;
} Obj_82D97B68;

void fn_82D97B68(const Obj_82D97B68 *self, Rotation_82D97B68 *out)
{
    const Rotation_82D97B68 *src = &self->rotation;

    out->col0 = src->col0;
    out->col1 = src->col1;
    out->col2 = src->col2;
}
