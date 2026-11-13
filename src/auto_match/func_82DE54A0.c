typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82DE54A0 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82DE54A0;

typedef struct Src_82DE54A0 {
    int f0;
    float f4;
    char pad08[0x8];
    __vector4 v10;
    Rotation_82DE54A0 rot;
} Src_82DE54A0;

typedef struct Dst_82DE54A0 {
    char pad00[0x50];
    Rotation_82DE54A0 rot;
    __vector4 v80;
    float f90;
} Dst_82DE54A0;

void fn_82DE54A0(const Src_82DE54A0 *src, Dst_82DE54A0 *self)
{
    Rotation_82DE54A0 *dst;
    const Rotation_82DE54A0 *rot;

    self->f90 = src->f4;
    self->v80 = src->v10;
    dst = &self->rot;
    rot = &src->rot;
    dst->col0 = rot->col0;
    dst->col1 = rot->col1;
    dst->col2 = rot->col2;
}
