typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82DA21B0 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82DA21B0;

typedef struct Obj_82DA21B0 {
    char pad00[0x50];
    Rotation_82DA21B0 rotation;
} Obj_82DA21B0;

void fn_82DA21B0(const Obj_82DA21B0 *self, Rotation_82DA21B0 *out)
{
    const Rotation_82DA21B0 *src = &self->rotation;

    out->col0 = src->col0;
    out->col1 = src->col1;
    out->col2 = src->col2;
}
