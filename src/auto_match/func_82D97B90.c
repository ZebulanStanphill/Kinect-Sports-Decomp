typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D97B90 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D97B90;

typedef struct Obj_82D97B90 {
    char pad00[0x60];
    Rotation_82D97B90 rotation;
} Obj_82D97B90;

void fn_82D97B90(const Obj_82D97B90 *self, Rotation_82D97B90 *out)
{
    const Rotation_82D97B90 *src = &self->rotation;

    out->col0 = src->col0;
    out->col1 = src->col1;
    out->col2 = src->col2;
}
