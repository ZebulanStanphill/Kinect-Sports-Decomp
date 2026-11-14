typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82F4EF10 {
    char pad0[0xcc0];
    __vector4 value; /* 0xcc0 */
} Obj_82F4EF10;

void fn_82F4EF10(__vector4 *out, Obj_82F4EF10 *self)
{
    *out = self->value;
}
