typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_83095E10 {
    char pad00[0x70];
    __vector4 v70;
    __vector4 v80;
} Obj_83095E10;

void fn_83095E10(const Obj_83095E10 *self, __vector4 *a, __vector4 *b)
{
    *a = self->v70;
    *b = self->v80;
}
