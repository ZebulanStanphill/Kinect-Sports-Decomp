typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82DA2188 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82DA2188;

typedef struct Obj_82DA2188 {
    char pad00[0x20];
    Rotation_82DA2188 rotation;
} Obj_82DA2188;

void fn_82DA2188(const Obj_82DA2188 *self, Rotation_82DA2188 *out)
{
    const Rotation_82DA2188 *src = &self->rotation;

    out->col0 = src->col0;
    out->col1 = src->col1;
    out->col2 = src->col2;
}
