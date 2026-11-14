typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_8306D678 {
    char pad0[0x1a50];
    __vector4 value; /* 0x1a50 */
} Obj_8306D678;

void fn_8306D678(__vector4 *out, Obj_8306D678 *self)
{
    *out = self->value;
}
