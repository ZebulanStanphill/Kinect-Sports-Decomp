typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D8B298 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D8B298;

typedef struct Src_82D8B298 {
    int f0;
    float f4;
    char pad08[0x8];
    __vector4 v10;
    Rotation_82D8B298 rot;
} Src_82D8B298;

typedef struct Dst_82D8B298 {
    char pad00[0x50];
    Rotation_82D8B298 rot;
    __vector4 v80;
    float f90;
} Dst_82D8B298;

void fn_82D8B298(Dst_82D8B298 *self, const Src_82D8B298 *src)
{
    Rotation_82D8B298 *dst;
    const Rotation_82D8B298 *rot;

    self->f90 = src->f4;
    dst = &self->rot;
    rot = &src->rot;
    dst->col0 = rot->col0;
    dst->col1 = rot->col1;
    dst->col2 = rot->col2;
    self->v80 = src->v10;
}
