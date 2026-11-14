typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D80A30 {
    char pad0[0x10];
    __vector4 value; /* 0x10 */
} Obj_82D80A30;

void fn_82D80A30(Obj_82D80A30 *self, const __vector4 *value)
{
    self->value = *value;
}
